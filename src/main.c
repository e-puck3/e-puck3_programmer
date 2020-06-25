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


static THD_WORKING_AREA(waBlinker,128);
static THD_FUNCTION(Blinker,arg) {
	(void)arg;
	chRegSetThreadName("blinker");
	while(true){
		// palClearLine(LINE_STATUS_LED1_R);
		// chThdSleepMilliseconds(50);
		// palClearLine(LINE_STATUS_LED2_R);
		// chThdSleepMilliseconds(50);
		// palClearLine(LINE_STATUS_LED3_R);
		// chThdSleepMilliseconds(50);
		// palClearLine(LINE_STATUS_LED1_G);
		// chThdSleepMilliseconds(50);
		// palClearLine(LINE_STATUS_LED2_G);
		// chThdSleepMilliseconds(50);
		// palClearLine(LINE_STATUS_LED3_G);
		// chThdSleepMilliseconds(50);
		// palClearLine(LINE_STATUS_LED1_B);
		// chThdSleepMilliseconds(50);
		// palClearLine(LINE_STATUS_LED2_B);
		// chThdSleepMilliseconds(50);
		// palClearLine(LINE_STATUS_LED3_B);
		// chThdSleepMilliseconds(50);
		// palSetLine(LINE_STATUS_LED1_R);
		// chThdSleepMilliseconds(50);
		// palSetLine(LINE_STATUS_LED2_R);
		// chThdSleepMilliseconds(50);
		// palSetLine(LINE_STATUS_LED3_R);
		// chThdSleepMilliseconds(50);
		// palSetLine(LINE_STATUS_LED1_G);
		// chThdSleepMilliseconds(50);
		// palSetLine(LINE_STATUS_LED2_G);
		// chThdSleepMilliseconds(50);
		// palSetLine(LINE_STATUS_LED3_G);
		// chThdSleepMilliseconds(50);
		// palSetLine(LINE_STATUS_LED1_B);
		// chThdSleepMilliseconds(50);
		// palSetLine(LINE_STATUS_LED2_B);
		// chThdSleepMilliseconds(50);
		// palSetLine(LINE_STATUS_LED3_B);
		// chThdSleepMilliseconds(50);

		palClearLine(LINE_STATUS_LED1_R);
		palClearLine(LINE_STATUS_LED2_R);
		palClearLine(LINE_STATUS_LED3_R);
		chThdSleepMilliseconds(500);
		palSetLine(LINE_STATUS_LED1_R);
		palSetLine(LINE_STATUS_LED2_R);
		palSetLine(LINE_STATUS_LED3_R);
		chThdSleepMilliseconds(500);
		palClearLine(LINE_STATUS_LED1_G);
		palClearLine(LINE_STATUS_LED2_G);
		palClearLine(LINE_STATUS_LED3_G);
		chThdSleepMilliseconds(500);
		palSetLine(LINE_STATUS_LED1_G);
		palSetLine(LINE_STATUS_LED2_G);
		palSetLine(LINE_STATUS_LED3_G);
		chThdSleepMilliseconds(500);
		palClearLine(LINE_STATUS_LED1_B);
		palClearLine(LINE_STATUS_LED2_B);
		palClearLine(LINE_STATUS_LED3_B);
		chThdSleepMilliseconds(500);
		palSetLine(LINE_STATUS_LED1_B);
		palSetLine(LINE_STATUS_LED2_B);
		palSetLine(LINE_STATUS_LED3_B);
		chThdSleepMilliseconds(500);
	}
}


int main(void) {
	// logNextCreatedThreadsTimestamps();
	/**
	 * Special function to handle the turn on if we pressed the button without
	 * the usb cable plugged. Called before everything to catch the button pressed.
	 */
	powerButtonStartSequence();
	// DMA can't access correctly cached data
	// Disabled for now
	SCB_DisableDCache();
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
	chEvtObjectInit(&communications_event);
	static const SerialConfig ser_cfg_esp = {
	    .speed = 230400,
	    .cr1 = 0,
	    .cr2 = 0,
	    .cr3 = 0,
	};
	sdStart(&UART_ESP, &ser_cfg_esp);

	/*
	 * Starts the leds states thread. Must be the first module to not miss events sent by
	 * the others modules.
	 */
	// ledsManagementStart();
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
	 */
	usbSerialStart();
	/*
	 * Initializes the USB PD controller.
	 */
	usbPDControllerStart();
	/*
	 * Starts the thread managing the USB hub.
	 */
	usbHubStart();
	/*
	 * Starts the communication thread.
	 */
	// communicationsStart();
	// communicationsSwitchModeTo(UART_ESP_PASSTHROUGH, false);
	/*
	 * Starts the GDB system.
	 */
	gdbStart();

	palSetLine(LINE_RESET_UC);

	chThdCreateStatic(waBlinker, sizeof(waBlinker), NORMALPRIO, Blinker, NULL);

	// uint8_t reg[1];
	// uint8_t rxbuf[1];
	// chThdSleepMilliseconds(1000);
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
		// reg[0] = 0x01;
		// rxbuf[0] = 0;
		// i2cAcquireBus(&I2CD4);
		// msg_t result = i2cMasterTransmitTimeout(&I2CD4, 0x22, reg, 1, rxbuf, 1, 1000);
		// i2cReleaseBus(&I2CD4);
		// chprintf((BaseSequentialStream *)&SD1, "PD: reg = %x, msg = %d\r\n", rxbuf[0], result);
		// reg[0] = 0xEA;
		// rxbuf[0] = 0;
		// i2cAcquireBus(&I2CD4);
		// result = i2cMasterTransmitTimeout(&I2CD4, 0x08, reg, 1, rxbuf, 1, 1000);
		// i2cReleaseBus(&I2CD4);
		// chprintf((BaseSequentialStream *)&SD1, "HUB: reg = %x, msg = %d\r\n", rxbuf[0], result);

	}

}
