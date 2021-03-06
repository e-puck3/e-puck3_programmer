/**
 * @file	power.c
 * @brief  	Controls the power. Contains the functions to turn ON and OFF
 * 			the the main parts of the robot. Sends events when a power on or power off occurs.
 * 
 * @written by  	Eliot Ferragni
 * @creation date	05.06.2020
 */

#include "ch.h"
#include "hal.h"
#include "power.h"
#include "leds.h"

static virtual_timer_t power_timer;
static uint8_t power_state = POWER_OFF;

/////////////////////////////////////////PRIVATE FUNCTIONS/////////////////////////////////////////

/**
 * @brief 	Callback called when the virtual timer finishes to count.
 * 			Used to turn ON or OFF the robot when pressing the button for
 * 			the good duration
 * @param par Tells if we need to turn ON or OFF
 */
void powerButtonCb(void* par){
	uint8_t choice = (uint32_t)par;

	chSysLockFromISR();
	mainPowerTurnOnOffI(choice);
	chSysUnlockFromISR();
}

//Event source used to send events to other threads
event_source_t power_event;

static THD_WORKING_AREA(power_button_thd_wa, 128);
static THD_FUNCTION(power_button_thd, arg)
{

	(void) arg;
	chRegSetThreadName("Power Button management");

	/* Enabling events on both edges of the button line.*/
	palEnableLineEvent(LINE_PWR_ON_BTN_STATE_N, PAL_EVENT_MODE_BOTH_EDGES);

	while(1){
		//waiting until an event on the line is detected
		palWaitLineTimeout(LINE_PWR_ON_BTN_STATE_N, TIME_INFINITE);
		//if the button is pressed, we begin to count
		if(isPowerButtonPressed()){
			if(power_state == POWER_OFF){
				//set the timer to turn ON the robot after the good time
				chVTSet(&power_timer, TIME_MS2I(POWER_BUTTON_DURATION_MS_TO_TURN_ON),
                           powerButtonCb, (void*)POWER_ON);
			}else if(power_state == POWER_ON){
				//set the timer to turn OFF the robot after the good time
				chVTSet(&power_timer, TIME_MS2I(POWER_BUTTON_DURATION_MS_TO_TURN_OFF),
                           powerButtonCb, (void*)POWER_OFF);
			}
		}else{
			//stops the timer (prevent the callback to be called)
			chVTReset(&power_timer);
		}
	}
}

/////////////////////////////////////////PUBLIC FUNCTIONS/////////////////////////////////////////

void powerButtonStart(void){
	chVTObjectInit(&power_timer);

	chThdCreateStatic(power_button_thd_wa, sizeof(power_button_thd_wa), NORMALPRIO, power_button_thd, NULL);
}

void powerButtonStartSequence(void){

	/* 	we don't need to configure the GPIOs because it is done in _early_init which
		is called before the main */

	if(isPowerButtonPressed()){
		mainPowerTurnOnOff(POWER_ON);
	}
}

uint8_t isPowerButtonPressed(void){
	return !palReadLine(LINE_PWR_ON_BTN_STATE_N);
}

uint8_t powerButtonGetPowerState(void){
	return power_state;
}

void mainPowerTurnOnOff(uint8_t state){
	if(state == POWER_ON){
		power_state = POWER_ON;
		palSetLine(LINE_PWR_ON);
		// Turns ON the LEDs PWM in case it's paused
		resumeLedsPWM();
	}else{
		power_state = POWER_OFF;
		palClearLine(LINE_PWR_ON);
		// Turns OFF the LEDs PWM to turn them all OFF
		pauseLedsPWM();
	}
}

void mainPowerTurnOnOffI(uint8_t state){
	if(state == POWER_ON){
		power_state = POWER_ON;
		palSetLine(LINE_PWR_ON);
		// Turns ON the LEDs PWM in case it's paused
		resumeLedsPWMI();
	}else{
		power_state = POWER_OFF;
		palClearLine(LINE_PWR_ON);
		// Turns OFF the LEDs PWM to turn them all OFF
		pauseLedsPWM();
	}
}

void setVbusPriority(uint8_t state){
	palWriteLine(LINE_PRIORITY_TO_VBUS, state);
}

void setInrushCurrentLimit(uint8_t state){
	palWriteLine(LINE_BAT_PLUS_INRUSH_LIMIT_n, state ? 0 : 1);
}

void f779TurnOnOff(uint8_t state){
	palWriteLine(LINE_RESET_UC, state);
}

void esp32TurnOnOff(uint8_t state){
	palWriteLine(LINE_EN_ESP32, state);
}

void gateDriverTurnOnOff(gateDriver_id id, uint8_t state){
	switch (id){
		case GATE_DRIVER_1:
			palWriteLine(LINE_EN_DRIVER_1, state);
			break;
		case GATE_DRIVER_2:
			palWriteLine(LINE_EN_DRIVER_2, state);
			break;
		case GATE_DRIVER_3:
			palWriteLine(LINE_EN_DRIVER_3, state);
			break;
		case GATE_DRIVER_4:
			palWriteLine(LINE_EN_DRIVER_4, state);
			break;
		default:
			break;
	}
}

void gateDriversTurnOnOff(uint8_t state){

	palWriteLine(LINE_EN_DRIVER_1, state);
	palWriteLine(LINE_EN_DRIVER_2, state);
	palWriteLine(LINE_EN_DRIVER_3, state);
	palWriteLine(LINE_EN_DRIVER_4, state);
}
