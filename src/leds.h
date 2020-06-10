/**
 * @file	leds.h
 * @brief  	Functions to manage the RGB leds connected to the programmer. Not intended to be used by the user
 * 			because the RGB leds are already completely used by leds_management.c
 * 
 * @written by  	Eliot Ferragni
 * @creation date	09.06.2020
 */

#ifndef LEDS_H
#define LEDS_H

#include "hal.h"

//List of the LEDs present on a RGB LED
typedef enum {
	RED_LED = 0,
	GREEN_LED,
	BLUE_LED,
	NB_LEDS,
} led_name_t;

//List of the RGB LEDs
typedef enum {
	STATUS_LED1 = 0,
	STATUS_LED2,
	STATUS_LED3,
	NB_RGB_LEDS,
} rgb_led_name_t;	

#define LED_MAX_POWER		10		// Always ON
#define LED_MID_POWER		5		//		∧
#define LED_QUARTER_POWER	2		// PWM at 100Hz
#define LED_MIN_POWER		1		//		∨
#define LED_NO_POWER		0		// Always OFF

/**
 * @brief Init the PWM to handle the RGB LEDs
 */
void ledsInit(void);

/**
 * @brief 			Toggles the selected led with the given value.
 * 
 * @param rgb_led 	RGB LED to update. See rgb_led_name_t
 * @param led 		Led to update. See led_name_t
 * @param value 	New value to set in the case the led was OFF. 
 * 					If the led was ON, it will simply be turned OFF.
 */
void toggleLed(rgb_led_name_t rgb_led, led_name_t led, uint8_t duty_cycle);

/**
 * @brief 		Sets the value of the given led
 * 
 * @param rgb_led 	RGB LED to update. See rgb_led_name_t
 * @param led 		Led to update. See led_name_t
 * @param value 	New value to give to the led. 
 * 					Range is 0-10 (0 = completely OFF and 10 = completely ON)
 */
void setLed(rgb_led_name_t rgb_led, led_name_t led, uint8_t duty_cycle);

#endif  /* LEDS_H */