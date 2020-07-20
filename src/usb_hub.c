/**
 * @file	usb_hub.c
 * @brief  	Functions to handle the configuration of the USB Hub when needed.
 * 
 * @written by  	Eliot Ferragni
 * @creation date	05.06.2020
 */

#include "usb_hub.h"
#include "USB3803.h"

#define CONFIGURED		true
#define NOT_CONFIGURED	false

/*
* I2C configuration object.
* I2C2_TIMINGR: 1000 kHz with I2CCLK = 216 MHz, rise time = 0 ns,
*               fall time = 0 ns
*/
static I2CConfig i2c4config = {
    .timingr    = 0x00A02B91,
    .cr1        = 0,
    .cr2        = 0,
};

static USB3803_t hub ={
	.i2cp 				= &I2CD4,
	.i2c_config			= &i2c4config,
	.i2c_address_7bits 	= USB3803_I2C_ADDRESS00_7BITS,
	.vbus_host_line 	= LINE_VBUS_HOST,
	.vbus_devices_line 	= LINE_VBUS_DEVICES,
	.reset_n_line 		= LINE_RESET_HUB_N,
	.bypass_n_line 		= LINE_BYPASS_HUB_N,
	.hub_connect_line 	= LINE_HUB_CONNECT,
};

static bool hub_state = NOT_CONFIGURED;

/////////////////////////////////////////PRIVATE FUNCTIONS/////////////////////////////////////////

static THD_WORKING_AREA(usb_hub_thd_wa, 128);
static THD_FUNCTION(usb_hub_thd, arg)
{
	(void) arg;

	chRegSetThreadName("USB Hub Management");

	while(1){
		// We can't use interrupts on the VBUS HOST pin because it is 
		// already used by the PD controller library so we simply poll it regularly

		// Enables and configures the HUB only if we have a USB connection
		if(palReadLine(LINE_VBUS_HOST)){
			chThdSleepMilliseconds(DEBOUNCE_TIME_VBUS_DET_MS);
			if(palReadLine(LINE_VBUS_HOST) && hub_state == NOT_CONFIGURED){
				if(USB3803_configure(&hub)){
					// If there was a problem configuring the hub, stop trying to
					// configure it, there is probably a hardware bug
					break;
				}
				hub_state = CONFIGURED;
			}
		// Shuts down the HUB (reset state)
		}else{
			chThdSleepMilliseconds(DEBOUNCE_TIME_VBUS_DET_MS);
			if(!palReadLine(LINE_VBUS_HOST) && hub_state == CONFIGURED){
				USB3803_unconfigure(&hub);
				hub_state = NOT_CONFIGURED;
			}
		}

		chThdSleepMilliseconds(500);
	}
}

//////////////////////////////////////////PUBLIC FUNCTIONS/////////////////////////////////////////

void usbHubStart(void){
	if(!USB3803_configure(&hub)){
		hub_state = CONFIGURED;
		chThdCreateStatic(usb_hub_thd_wa, sizeof(usb_hub_thd_wa), NORMALPRIO, usb_hub_thd, NULL);
	}
}