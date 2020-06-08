/**
 * @file	voltage_measurement.h
 * @brief  	Functions to measure the battery and VBus voltages and change the battery state accordingly
 * 			Uses the event system to signal a new state
 * 
 * @written by  	Eliot Ferragni
 * @creation date	26.06.2018
 */

#ifndef VOLTAGE_MEASUREMENT_H
#define VOLTAGE_MEASUREMENT_H

#include "ch.h"
#include "hal.h"


/* BATTERY/VBUS---[ R1 ]--*--- measure
                	      |
               		      |
               		    [ R2 ]
                	      |
               		     GND
*/

#define ADC_VOLTAGE 				ADCD1

////////////////////////////////////////////BATTERY ZONE///////////////////////////////////////////
#define NB_OF_ELEMENTS_BATTERY		2

//per battery element
#define BATT_MAX_VOLTAGE			(4.2f * NB_OF_ELEMENTS_BATTERY)	//volt GREEN
#define BATT_GOOD_VOLTAGE			(3.5f * NB_OF_ELEMENTS_BATTERY)	//volt ORANGE
#define BATT_LOW_VOLTAGE			(3.4f * NB_OF_ELEMENTS_BATTERY)	//volt RED
#define BATT_VERY_LOW_VOLTAGE		(3.3f * NB_OF_ELEMENTS_BATTERY)	//volt RED BLINKING
#define BATT_MIN_VOLTAGE			(3.2f * NB_OF_ELEMENTS_BATTERY)	//volt RED BLINKING + QUICK TURNOFF

#define BATTERY_LOW_TIME_MS			10000 	//time before shutting down the system when in min voltage
#define CHANGE_STATE_TIME_MS		3000	//time before changing the battery state 

//Event source used to send events to other threads
extern event_source_t battery_info_event;

// A flag is set when the voltage is equal or below this flag and above the previous flag.
#define BATT_MAX_VOLTAGE_FLAG		(1<<0)
#define BATT_GOOD_VOLTAGE_FLAG		(1<<1)
#define BATT_LOW_VOLTAGE_FLAG		(1<<2)
#define BATT_VERY_LOW_VOLTAGE_FLAG	(1<<3)
#define BATT_MIN_VOLTAGE_FLAG		(1<<4)


/////////////////////////////////////////////VBUS ZONE/////////////////////////////////////////////

#define VBUS_HIGHEST_VOLTAGE		20
#define VBUS_THIRD_STEP				15
#define VBUS_SECOND_STEP			12
#define VBUS_FIRST_STEP				9
#define VBUS_DEFAULT_VOLTAGE		5

//Event source used to send events to other threads
extern event_source_t vbus_info_event;

// A flag is set when the voltage is equal or above this flag and below the next flag.
#define VBUS_HIGHEST_VOLTAGE_FLAG	(1<<0)
#define VBUS_THIRD_STEP_FLAG		(1<<1)
#define VBUS_SECOND_STEP_FLAG		(1<<2)
#define VBUS_FIRST_STEP_FLAG		(1<<3)
#define VBUS_DEFAULT_VOLTAGE_FLAG	(1<<4)

typedef struct{
	float	vbus;
	float	battery;
	float	temperature;
}voltage_measurement_t;

/**
 * @brief Starts the voltage measurement thread
 */
void voltageMesurementStart(void);

/**
 * @brief 	Gets the measurements values and put them into the 
 * 			voltage_measurement_t* pointer given.
 * 
 * @param measurements Pointer to the voltage_measurement_t structure to fill
 */	
void voltageMesurementGet(voltage_measurement_t* measurements);

#endif  /* VOLTAGE_MEASUREMENT_H */