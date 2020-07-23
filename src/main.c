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
#include "motors.h"

/* Special note concerning memory allocation :
 * 
 * By default, everything is placed into ram3 (DTCM)
 * which is the fastest but has only 64k of space.
 * 
 * Then if the data exceed the 64k when compiling, it is neccesarry to
 * put the data that are not time critical into ram0 (SRAM) with the keyword 
 * below before the delcaration:
 * 
 * __attribute__((section(".ram0")))
 * 
 * Data thare are used by the DMA should not be placed in ram0, because of the cache.
 */

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
	 * Initializes two serial-over-USB CDC drivers and starts and connects the USB.
	 *  
	 *  !! If you want to debug the programmer with the 779, you need to comment the HUB start
	 *  !! otherwise it will xonfigure it and you'll loose the USB connexion while debuging
	 */
	usbHubStart();
	/*
	 * Initializes the USB PD controller.
	 */
	usbPDControllerStart();
	/*
	 * Starts the thread managing the USB hub.
	 */
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
	palSetLine(LINE_EN_DRIVER_1);
	palSetLine(LINE_EN_DRIVER_2);
	palSetLine(LINE_EN_DRIVER_3);
	palSetLine(LINE_EN_DRIVER_4);

	motorsStart();

	motorSetDutyCycle(BRUSHLESS_MOTOR_1, 10);
	motorSetDutyCycle(BRUSHLESS_MOTOR_2, 10);
	motorSetDutyCycle(BRUSHLESS_MOTOR_3, 10);
	motorSetDutyCycle(BRUSHLESS_MOTOR_4, 10);

	spawn_shell();
	// voltage_measurement_t volt;
	while (true){
		if(isUSBConfigured()){
			//spawns the shell if the usb is connected
			// spawn_shell();
			motorsStop();
			// voltageMesurementGet(&volt);
			// chprintf((BaseSequentialStream *)&USB_SERIAL, "voltages :%fV, %fV, %f°C \r\n", volt.vbus, volt.battery, volt.temperature);
		}
		// voltageMesurementGet(&volt);
		// chprintf((BaseSequentialStream *)&SD1, "voltages :%fV, %fV, %f°C \r\n", volt.vbus, volt.battery, volt.temperature);
		// chprintf((BaseSequentialStream *)&SD1, "RPMs : %f, %f, %f, %f\r\n", motorsGetRPM(BRUSHLESS_MOTOR_1), motorsGetRPM(BRUSHLESS_MOTOR_2), motorsGetRPM(BRUSHLESS_MOTOR_3), motorsGetRPM(BRUSHLESS_MOTOR_4));
		// chprintf((BaseSequentialStream *)&SD1, "I : %f, %f, %f, %f\r\n", motorsGetCurrent(BRUSHLESS_MOTOR_1), motorsGetCurrent(BRUSHLESS_MOTOR_2), motorsGetCurrent(BRUSHLESS_MOTOR_3), motorsGetCurrent(BRUSHLESS_MOTOR_4));
		// chprintf(&SD1, "VBUS HOST = %d\r\n", palReadLine(LINE_VBUS_HOST));
		chThdSleepMilliseconds(100);

	}

}
