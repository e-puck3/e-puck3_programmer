/**
 * @file	main.c
 * @brief  	Main file of the e-puck3 programmer firmware
 * 
 * @written by  	Eliot Ferragni
 * @creation date   03.06.2020
 */

#include <stdio.h>
#include <string.h>

#include "ch.h"
#include "hal.h"
#include "usbcfg.h"
#include "user_shell.h"
#include "gdb.h"
#include "usb_pd_controller.h"
#include "usb_hub.h"
#include "power_button.h"
#include "voltage_measurement.h"
#include "communications.h"


static THD_WORKING_AREA(waBlinker,128);
static THD_FUNCTION(Blinker,arg) {
	(void)arg;
	chRegSetThreadName("blinker");
	while(true){
		palClearLine(LINE_STATUS_LED1_R);
		chThdSleepMilliseconds(50);
		palClearLine(LINE_STATUS_LED2_R);
		chThdSleepMilliseconds(50);
		palClearLine(LINE_STATUS_LED3_R);
		chThdSleepMilliseconds(50);
		palClearLine(LINE_STATUS_LED1_G);
		chThdSleepMilliseconds(50);
		palClearLine(LINE_STATUS_LED2_G);
		chThdSleepMilliseconds(50);
		palClearLine(LINE_STATUS_LED3_G);
		chThdSleepMilliseconds(50);
		palClearLine(LINE_STATUS_LED1_B);
		chThdSleepMilliseconds(50);
		palClearLine(LINE_STATUS_LED2_B);
		chThdSleepMilliseconds(50);
		palClearLine(LINE_STATUS_LED3_B);
		chThdSleepMilliseconds(50);
		palSetLine(LINE_STATUS_LED1_R);
		chThdSleepMilliseconds(50);
		palSetLine(LINE_STATUS_LED2_R);
		chThdSleepMilliseconds(50);
		palSetLine(LINE_STATUS_LED3_R);
		chThdSleepMilliseconds(50);
		palSetLine(LINE_STATUS_LED1_G);
		chThdSleepMilliseconds(50);
		palSetLine(LINE_STATUS_LED2_G);
		chThdSleepMilliseconds(50);
		palSetLine(LINE_STATUS_LED3_G);
		chThdSleepMilliseconds(50);
		palSetLine(LINE_STATUS_LED1_B);
		chThdSleepMilliseconds(50);
		palSetLine(LINE_STATUS_LED2_B);
		chThdSleepMilliseconds(50);
		palSetLine(LINE_STATUS_LED3_B);
		chThdSleepMilliseconds(50);
	}
}


int main(void) {
	
	/**
	 * Special function to handle the turn on if we pressed the button without
	 * the usb cable plugged. Called before everything to catch the button pressed.
	 */
	powerButtonStartSequence();
	/*
	 * System initializations.
	 * - HAL initialization, this also initializes the configured device drivers
	 *   and performs the board-specific initializations.
	 * - Kernel initialization, the main() function becomes a thread and the
	 *   RTOS is active.
	 */
	halInit();
	chSysInit();

	/*
	 * Inits the event objects. Better to do it before any modules that use them since
	 * they are global.
	 */

	chEvtObjectInit(&power_event);
	chEvtObjectInit(&vbus_info_event);
	chEvtObjectInit(&battery_info_event);
	chEvtObjectInit(&gdb_status_event);
	// chEvtObjectInit(&communications_event);

	/*
	 * Starts the handling of the power button
	 */
	powerButtonStart();
	/*
	 * Starts the voltage measurement thread
	 */
	voltageMesurementStart();
	/*
	 * Initializes two serial-over-USB CDC drivers and starts and connects the USB
	 */
	usbSerialStart();
	/*
	 * Initializes the USB PD controller
	 */
	usbPDControllerStart();
	/*
	 * Starts the thread managing the USB hub
	 */
	usbHubStart();
	/**
	 * Starts the communication thread
	 */
	communicationsStart();
	/*
	 * Starts the GDB system
	 */
	gdbStart();

	chThdCreateStatic(waBlinker, sizeof(waBlinker), NORMALPRIO, Blinker, NULL);


	while (true){
		if(isUSBConfigured()){
			//spawns the shell if the usb is connected
			spawn_shell();
		}
		chThdSleepMilliseconds(500);
	}

}
