/**
 * @file	power.h
 * @brief  	Controls the power. Contains the functions to turn ON and OFF
 * 			the the main parts of the robot. Sends events when a power on or power off occurs.
 * 
 * @written by  	Eliot Ferragni
 * @creation date	05.06.2020
 */

#ifndef POWER_H
#define POWER_H

#include "ch.h"
#include "hal.h"

#define POWER_ON				1
#define POWER_OFF				0

#define POWER_BUTTON_DURATION_MS_TO_TURN_ON		10
#define POWER_BUTTON_DURATION_MS_TO_TURN_OFF	500

/**
 * Gate drivers
 */
typedef enum {
	GATE_DRIVER_1 = 0,
	GATE_DRIVER_2,
	GATE_DRIVER_3,
	GATE_DRIVER_4,
	NB_OF_GATE_DRIVERS,
} gateDriver_id;

/**
 * @brief 	Function used to turn ON the robot if the button is pressed
 * 			and if the USB connexion is not plugged->when we want to turn on the robot, without the USB.
 * 			
 * 			Need to be called before everything in the main (even halInit) in order to catch 
 * 			correctly the button pressed and not miss it because the system init took to much time.
 */	
void powerButtonStartSequence(void);

/**
 * @brief 	Starts the thread managing the button to turn on and off
 * 			the robot.
 */	
void powerButtonStart(void);

/**
 * @brief Checks if the power button is pressed
 * 
 * @return true of false
 */
uint8_t isPowerButtonPressed(void);

/**
 * @brief Returns the power state of the robot
 * 
 * @return POWER_ON or POWER_OFF
 */
uint8_t powerButtonGetPowerState(void);

/**
 * @brief Turns ON or OFF the robot
 * @param state POWER_ON or POWER_OFF
 */
void mainPowerTurnOnOff(uint8_t state);

/**
 * @brief Turns ON or OFF the robot from interrupt
 * @param state POWER_ON or POWER_OFF
 */
void mainPowerTurnOnOffI(uint8_t state);

/**
 * @brief 	Sets or clears VBus priority over the battery
 * 			for the main 3V.
 * 
 * @param 	state true or false
 */
void setVbusPriority(uint8_t state);

/**
 * @brief 	Sets or clears the battery inrush limiter
 * 
 * @param 	state true or false
 */
void setInrushCurrentLimit(uint8_t state);

/**
 * @brief Turns ON or OFF the stm32f779
 * @param state POWER_ON or POWER_OFF
 */
void f779TurnOnOff(uint8_t state);

/**
 * @brief Turns ON or OFF the ESP32
 * @param state POWER_ON or POWER_OFF
 */
void esp32TurnOnOff(uint8_t state);

/**
 * @brief Turns ON or OFF the gate driver chosen
 * @param state POWER_ON or POWER_OFF
 */
void gateDriverTurnOnOff(gateDriver_id id, uint8_t state);

/**
 * @brief Turns ON or OFF all the gate drivers
 * @param state POWER_ON or POWER_OFF
 */
void gateDriversTurnOnOff(uint8_t state);

#endif  /* POWER_H */