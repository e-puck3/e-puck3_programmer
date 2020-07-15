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
#include "leds_management.h"
#include "threads_utilities.h"
#include "mpu_functions.h"

int main(void) {
	// logNextCreatedThreadsTimestamps();
	/**
	 * Special function to handle the turn on if we pressed the button without
	 * the usb cable plugged. Called before everything to catch the button pressed.
	 */
	powerButtonStartSequence();
	// DMA can't access correctly cached data
	// Disabled for now
	mpuDisableSRAMCacheF746();
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

	chEvtObjectInit(&vbus_info_event);
	chEvtObjectInit(&battery_info_event);
	chEvtObjectInit(&gdb_status_event);
	chEvtObjectInit(&communications_event);

	/*
	 * Starts the leds states thread. Must be the first module to not miss events sent by
	 * the others modules.
	 */
	ledsManagementStart();
	/*
	 * Starts the handling of the power button.
	 */
	powerButtonStart();
	/*
	 * Starts the voltage measurement thread.
	 */
	voltageMesurementStart();
	/*
	 * Initializes the USB PD controller.
	 */
	usbPDControllerStart();
	/*
	 * Starts the thread managing the USB hub.
	 */
	usbHubStart();
	/*
	 * Initializes two serial-over-USB CDC drivers and starts and connects the USB.
	 */
	// sleep otherwise it bugs -> should connect a debugger to see why
	chThdSleepMilliseconds(100);
	usbSerialStart();
	/*
	 * Starts the communication thread.
	 */
	communicationsStart();
	/*
	 * Starts the GDB system.
	 */
	gdbStart();

	turnOnOffF779(POWER_ON);
	turnOnOffESP32(POWER_ON);
	spawn_shell();
	// voltage_measurement_t volt;
	while (true){
		if(isUSBConfigured()){
			//spawns the shell if the usb is connected
			// spawn_shell();
			// voltageMesurementGet(&volt);
			// chprintf((BaseSequentialStream *)&USB_SERIAL, "voltages :%fV, %fV, %f°C \r\n", volt.vbus, volt.battery, volt.temperature);
		}

		// voltageMesurementGet(&volt);
		// chprintf((BaseSequentialStream *)&SD1, "voltages :%fV, %fV, %f°C \r\n", volt.vbus, volt.battery, volt.temperature);
		// chprintf(&SD1, "VBUS HOST = %d\r\n", palReadLine(LINE_VBUS_HOST));
		chThdSleepMilliseconds(100);

	}

}
