/**
 * @file	leds.c
 * @brief  	Functions to manage the RGB leds connected to the programmer. Not intended to be used by the user
 * 			because the RGB leds are already completely used by leds_management.c
 * 
 * @written by  	Eliot Ferragni
 * @creation date	09.06.2020
 */

#include "ch.h"
#include "hal.h"
#include "leds.h"

static uint16_t leds_values[NB_RGB_LEDS][NB_LEDS] = {LED_NO_POWER};
static BSEMAPHORE_DECL(pause_thread_sem, true);
static bool pause_thread = false;

/////////////////////////////////////////PRIVATE FUNCTIONS/////////////////////////////////////////


// Simulates a 100Hz PWM with duty cycles increment of 10% -> 10 differents levels
static THD_WORKING_AREA(waLeds, 128);
static THD_FUNCTION(thLeds, arg) {

	chRegSetThreadName("RGB leds PWM");
	
	(void)arg;
	
	uint8_t counter = 0;

    while(1){
    	counter = (counter+1) % LED_MAX_POWER;

    	// turns ON each led if duty-cycle not 0
    	if(counter == 0){
			if(leds_values[STATUS_LED1][RED_LED] != LED_NO_POWER){
				palClearLine(LINE_STATUS_LED1_R);
			}
			if(leds_values[STATUS_LED1][GREEN_LED] != LED_NO_POWER){
				palClearLine(LINE_STATUS_LED1_G);
			}
			if(leds_values[STATUS_LED1][BLUE_LED] != LED_NO_POWER){
				palClearLine(LINE_STATUS_LED1_B);
			}
			if(leds_values[STATUS_LED2][RED_LED] != LED_NO_POWER){
				palClearLine(LINE_STATUS_LED2_R);
			}
			if(leds_values[STATUS_LED2][GREEN_LED] != LED_NO_POWER){
				palClearLine(LINE_STATUS_LED2_G);
			}
			if(leds_values[STATUS_LED2][BLUE_LED] != LED_NO_POWER){
				palClearLine(LINE_STATUS_LED2_B);
			}
			if(leds_values[STATUS_LED3][RED_LED] != LED_NO_POWER){
				palClearLine(LINE_STATUS_LED3_R);
			}
			if(leds_values[STATUS_LED3][GREEN_LED] != LED_NO_POWER){
				palClearLine(LINE_STATUS_LED3_G);
			}
			if(leds_values[STATUS_LED3][BLUE_LED] != LED_NO_POWER){
				palClearLine(LINE_STATUS_LED3_B);
			}
    	}
    	// turns OFF a led when we reach its value
    	else{
			if(counter >= leds_values[STATUS_LED1][RED_LED]){
				palSetLine(LINE_STATUS_LED1_R);
			}
			if(counter >= leds_values[STATUS_LED1][GREEN_LED]){
				palSetLine(LINE_STATUS_LED1_G);
			}
			if(counter >= leds_values[STATUS_LED1][BLUE_LED]){
				palSetLine(LINE_STATUS_LED1_B);
			}
			if(counter >= leds_values[STATUS_LED2][RED_LED]){
				palSetLine(LINE_STATUS_LED2_R);
			}
			if(counter >= leds_values[STATUS_LED2][GREEN_LED]){
				palSetLine(LINE_STATUS_LED2_G);
			}
			if(counter >= leds_values[STATUS_LED2][BLUE_LED]){
				palSetLine(LINE_STATUS_LED2_B);
			}
			if(counter >= leds_values[STATUS_LED3][RED_LED]){
				palSetLine(LINE_STATUS_LED3_R);
			}
			if(counter >= leds_values[STATUS_LED3][GREEN_LED]){
				palSetLine(LINE_STATUS_LED3_G);
			}
			if(counter >= leds_values[STATUS_LED3][BLUE_LED]){
				palSetLine(LINE_STATUS_LED3_B);
			}
			if(pause_thread){
				// force OFF all leds
				palSetLine(LINE_STATUS_LED1_R);
				palSetLine(LINE_STATUS_LED1_G);
				palSetLine(LINE_STATUS_LED1_B);
				palSetLine(LINE_STATUS_LED2_R);
				palSetLine(LINE_STATUS_LED2_G);
				palSetLine(LINE_STATUS_LED2_B);
				palSetLine(LINE_STATUS_LED3_R);
				palSetLine(LINE_STATUS_LED3_G);
				palSetLine(LINE_STATUS_LED3_B);
				chBSemWait(&pause_thread_sem);
			}
    	}

    	chThdSleepMilliseconds(1);
    }
}

//////////////////////////////////////////PUBLIC FUNCTIONS/////////////////////////////////////////

void ledsInit(void){

	chThdCreateStatic(waLeds, sizeof(waLeds), NORMALPRIO+10, thLeds, NULL);
}

void pauseLedsPWM(void){
	pause_thread = true;
}

void resumeLedsPWM(void){
	pause_thread = false;
	chBSemSignal(&pause_thread_sem);
}

void resumeLedsPWMI(void){
	pause_thread = false;
	chBSemSignalI(&pause_thread_sem);
}

void toggleLed(rgb_led_name_t rgb_led, led_name_t led, uint8_t duty_cycle){

	if(rgb_led>=NB_RGB_LEDS){
		return;
	}
	if(led>=NB_LEDS){
		return;
	}
	if(duty_cycle > LED_MAX_POWER){
		return;
	}

	if(leds_values[rgb_led][led] == LED_NO_POWER){
		leds_values[rgb_led][led] = duty_cycle;
	}else{
		leds_values[rgb_led][led] = LED_NO_POWER;
	}
}

void setLed(rgb_led_name_t rgb_led, led_name_t led, uint8_t duty_cycle){
	if(rgb_led>=NB_RGB_LEDS){
		return;
	}
	if(led>=NB_LEDS){
		return;
	}
	if(duty_cycle > LED_MAX_POWER){
		return;
	}

	leds_values[rgb_led][led] = duty_cycle;
}