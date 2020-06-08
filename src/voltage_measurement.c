/**
 * @file	voltage_measurement.c
 * @brief  	Functions to measure the battery and VBus voltages and change the battery state accordingly
 * 			Uses the event system to signal a new state
 * 
 * @written by  	Eliot Ferragni
 * @creation date	26.06.2018
 */

#include "ch.h"
#include "hal.h"
#include "voltage_measurement.h"
#include "power_button.h"

#define ADC_NUM_CHANNELS				3	//VBus, Batt+ and Internal temp
#define ADC_NUM_SAMPLES					32	//32 samples by channel

#define ADC1_CHANNEL_VBUS				ADC_CHANNEL_IN0
#define ADC1_CHANNEL_BATTERY			ADC_CHANNEL_IN11

#define VREF							3.0f	//corresponds to the voltage on the VREF+ pin [V]
#define ADC_RESOLUTION					4095	//maximum 12bits value from ADC

// Voltage calculations
#define RESISTOR_R1						3900	//[kohm]
#define RESISTOR_R2						649		//[kohm]
#define VOLTAGE_DIVIDER_INVERSE			((1.0f * RESISTOR_R1 + RESISTOR_R2) / (RESISTOR_R2))

#define ADC_12BITS_TO_VOLT(in, out)		(out = (in * VREF * VOLTAGE_DIVIDER_INVERSE) / ADC_RESOLUTION) //conversion from adc value to voltage

// Temperature calculations
#define V_25							0.75f	//voltage at 25°C
#define AVG_SLOPE 						2.5f	//average slope [mV/°C]
#define TEMPERATURE_OFFSET				25		//offset to apply to the result [°C]
#define ADC_12BITS_TO_CELSIUS(in, out)	(out = ((in - V_25) / AVG_SLOPE) + TEMPERATURE_OFFSET)

#define LOW_PASS_COEFF_A				0.8f
#define LOW_PASS_COEFF_B				0.2f

#define LOW_PASS_FILTER(in, out)		(out = LOW_PASS_COEFF_A * out + LOW_PASS_COEFF_B * in)

//buffer filled by the ADC
static adcsample_t adc_samples[ADC_NUM_CHANNELS * ADC_NUM_SAMPLES];

//battery voltage variable
static float battery_voltage = 0;
static float vbus_voltage = 0;
static float temperature_celsius = 0;

//Event source used to send events to other threads
event_source_t vbus_info_event;
event_source_t battery_info_event;

static BSEMAPHORE_DECL(measurement_ready, true);

static void adcCb(ADCDriver *adcp);

typedef enum{
	VBUS_MEASURE = 0,
	BATT_MEASURE,
	TEMP_MEASURE
}adc_measurement_t;

//group conversion config for the ADC
static const ADCConversionGroup adcGroupConfig =  {
	.circular = true, 	//we need it to be circular to be able to relaunch it simply by setting the SWSTART bit in CR2
	.num_channels = ADC_NUM_CHANNELS,
	.end_cb = adcCb,
	.error_cb = NULL,
	.cr1 = 0,
	.cr2 = 0,
	.smpr2 = ADC_SMPR2_SMP_AN0(ADC_SAMPLE_480),
	.smpr1 = ADC_SMPR1_SMP_AN11(ADC_SAMPLE_480) |
			 ADC_SMPR1_SMP_SENSOR(ADC_SAMPLE_480), //Internal temperature sensor
	.sqr3 = ADC_SQR3_SQ1_N(ADC1_CHANNEL_VBUS) |
			ADC_SQR3_SQ2_N(ADC1_CHANNEL_BATTERY) |
			ADC_SQR3_SQ3_N(ADC_CHANNEL_SENSOR),
	.sqr2 = 0,
	.sqr1 = 0,
};

/////////////////////////////////////////PRIVATE FUNCTIONS/////////////////////////////////////////

/**
 * @brief 	Launches one conversion of the given ADC
 * 			The ADC must already be configured in order to work properly
 * @param adcp The adc to start
 */
void ADCdoOneConversion(ADCDriver *adcp){
	adcp->adc->CR2 |= ADC_CR2_SWSTART;
}

//called each half of the buffer
static void adcCb(ADCDriver *adcp) {

	// Because the adc is configured as circular, the half buffer
	// interrupt is set so we compute only when the buffer is full
	if(adcIsBufferComplete(adcp)){

		chSysLockFromISR();
		chBSemSignalI(&measurement_ready);
		chSysUnlockFromISR();
	}
}

void vbusStateMachine(void){
	//actual state
	static uint8_t actual_state = VBUS_DEFAULT_VOLTAGE_FLAG;
	//state in which the battery voltage tells us to be.
	//-> we use it in order to change the actual state only after a fixed amount
	//of time. It prevents quick changes in the state if the measurements oscillate.
	static uint8_t new_state = VBUS_DEFAULT_VOLTAGE_FLAG;


	if(battery_voltage >= VBUS_HIGHEST_VOLTAGE){
		new_state = VBUS_HIGHEST_VOLTAGE_FLAG;
		
	}else if(battery_voltage >= VBUS_THIRD_STEP){
		new_state = VBUS_THIRD_STEP_FLAG;
		
	}else if(battery_voltage >= VBUS_SECOND_STEP){
		new_state = VBUS_SECOND_STEP_FLAG;
		
	}else if(battery_voltage >= VBUS_FIRST_STEP){
		new_state = VBUS_FIRST_STEP_FLAG;
		
	}else{
		new_state = VBUS_DEFAULT_VOLTAGE;
	}

	//checks if we are in the new state for at least CHANGE_STATE_TIME_MS time
	if(actual_state != new_state){
		//we change the state
		actual_state = new_state;
		//we signal the new state
		chEvtBroadcastFlags(&vbus_info_event, actual_state);
	}

}

void batteryStateMachine(void){
	//actual state
	static uint8_t actual_state = BATT_MAX_VOLTAGE_FLAG;
	//state in which the battery voltage tells us to be.
	//-> we use it in order to change the actual state only after a fixed amount
	//of time. It prevents quick changes in the state if the measurements oscillate.
	static uint8_t new_state = BATT_MAX_VOLTAGE_FLAG;

	static systime_t time_state = 0;
	static systime_t time_battery_low = 0;

	if(battery_voltage <= BATT_MIN_VOLTAGE){
		new_state = BATT_MIN_VOLTAGE_FLAG;
		
	}else if(battery_voltage <= BATT_VERY_LOW_VOLTAGE){
		new_state = BATT_VERY_LOW_VOLTAGE_FLAG;
		
	}else if(battery_voltage <= BATT_LOW_VOLTAGE){
		new_state = BATT_LOW_VOLTAGE_FLAG;
		
	}else if(battery_voltage <= BATT_GOOD_VOLTAGE){
		new_state = BATT_GOOD_VOLTAGE_FLAG;
		
	}else{
		new_state = BATT_MAX_VOLTAGE_FLAG;
	}

	//checks if we are in the new state for at least CHANGE_STATE_TIME_MS time
	if(actual_state != new_state){
		if(time_state < chVTGetSystemTime()){
			//we change the state
			actual_state = new_state;
			//we signal the new state
			chEvtBroadcastFlags(&battery_info_event, actual_state);

			time_state = chVTGetSystemTime() + CHANGE_STATE_TIME_MS;
		}
	}else{
		time_state = chVTGetSystemTime() + CHANGE_STATE_TIME_MS;
	}

	//if the battery voltage is too low for TICK_BATTERY_LOW time
	//we turn OFF the robot
	if(actual_state == BATT_MIN_VOLTAGE_FLAG){
		if(time_battery_low < chVTGetSystemTime()){
			//shutdown robot
			powerButtonTurnOnOff(POWER_OFF);
		}
	}else{
		time_battery_low = chVTGetSystemTime() + BATTERY_LOW_TIME_MS;
	}

}

static THD_WORKING_AREA(volt_thd_wa, 256);
static THD_FUNCTION(volt_thd, arg)
{
	(void) arg;

	chRegSetThreadName("Voltage measurement");

	systime_t time = 0;

	// filtered raw values
	uint32_t vbus_value = 0;
	uint32_t battery_value = 0;
	uint32_t temperature_value = 0;

	// raw values
	uint32_t vbus_raw = ADC_RESOLUTION;
	uint32_t battery_raw = ADC_RESOLUTION;
	uint32_t temperature_raw = ADC_RESOLUTION;

	//configures the ADC for the conversion but doesn't start it because the SWSTART is not set
	adcStartConversion(&ADC_VOLTAGE, &adcGroupConfig, adc_samples, ADC_NUM_SAMPLES);

	while(1){
		time = chVTGetSystemTime();
		//we compute the battery state only if the robot is turned on
		if(powerButtonGetPowerState() == POWER_ON){

			//starts the conversion process.
			ADCdoOneConversion(&ADC_VOLTAGE);
			//the semaphore is released when all the conversions are finished
			chBSemWait(&measurement_ready);

			vbus_raw 		= 0;
			battery_raw 	= 0;
			temperature_raw	= 0;

			for(uint16_t i = 0 ; i < (ADC_NUM_CHANNELS * ADC_NUM_SAMPLES) ; i += ADC_NUM_CHANNELS){
				vbus_raw 		+= adc_samples[i + VBUS_MEASURE];
				battery_raw 	+= adc_samples[i + BATT_MEASURE];
				temperature_raw += adc_samples[i + TEMP_MEASURE];
			}

			vbus_raw 		/= ADC_NUM_CHANNELS;
			battery_raw 	/= ADC_NUM_CHANNELS;
			temperature_raw /= ADC_NUM_CHANNELS;

			//low-pass filter on vbus measurement
			LOW_PASS_FILTER(vbus_raw, vbus_value);
			ADC_12BITS_TO_VOLT(vbus_value, vbus_voltage);

			//low-pass filter on battery measurement
			LOW_PASS_FILTER(battery_raw, battery_value);
			ADC_12BITS_TO_VOLT(battery_value, battery_voltage);

			//low-pass filter on temperature measurement
			LOW_PASS_FILTER(temperature_raw, temperature_value);
			ADC_12BITS_TO_CELSIUS(temperature_value, temperature_celsius);

			//VBus state update
			vbusStateMachine();
			//Battery state update
			batteryStateMachine();
		}

		//sampling at 20Hz
		chThdSleepUntilWindowed(time, time + TIME_MS2I(50));
	}
}

//////////////////////////////////////////PUBLIC FUNCTIONS/////////////////////////////////////////

void voltageMesurementStart(void){
	/*
	* Activates the ADC driver and the temperature sensor.
	*/
	adcStart(&ADC_VOLTAGE, NULL);
	adcSTM32DisableVBATE();
	adcSTM32EnableTSVREFE();

	/**
	 * Starts the voltage measurement thread
	 */
	chThdCreateStatic(volt_thd_wa, sizeof(volt_thd_wa), NORMALPRIO, volt_thd, NULL);
}

void voltageMesurementGet(voltage_measurement_t* measurements){
	measurements->vbus = vbus_voltage;
	measurements->battery = battery_voltage;
	measurements->temperature = temperature_celsius;
}