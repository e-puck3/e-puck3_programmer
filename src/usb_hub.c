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

static USB3803_t hub ={
	.i2cp 				= &I2CD4,
	.i2c_address_7bits 	= USB3803_I2C_ADDRESS00_7BITS,
	.vbus_host_line 	= LINE_VBUS_HOST,
	.vbus_devices_line 	= LINE_VBUS_DEVICES,
	.reset_n_line 		= LINE_RESET_HUB_N,
	.bypass_n_line 		= LINE_BYPASS_HUB_N,
	.hub_connect_line 	= LINE_HUB_CONNECT,
};

/////////////////////////////////////////PRIVATE FUNCTIONS/////////////////////////////////////////

static THD_WORKING_AREA(usb_hub_thd_wa, 128);
static THD_FUNCTION(usb_hub_thd, arg)
{
	(void) arg;

	chRegSetThreadName("USB Hub Management");

	bool hub_state = NOT_CONFIGURED;

	//Vbus detection init. Used to configure the USB Hub when we detect an USB cable

	/* Enabling events on both edges of the button line.*/
	palEnableLineEvent(LINE_VBUS_HOST, PAL_EVENT_MODE_BOTH_EDGES);
	//init the first time the hub if a usb cable is plugged
	if(palReadLine(LINE_VBUS_HOST)){
		USB3803_configure(&hub);
		hub_state = CONFIGURED;
	}

	while(1){
		//waiting until an event on the line is detected
		palWaitLineTimeout(LINE_VBUS_HOST, TIME_INFINITE);
		//wait a few moments to be sure the interruption was not triggered
		//by a glitch and then test the GPIO
		//also wait for the USB HUB to be running
		chThdSleepMilliseconds(DEBOUNCE_TIME_VBUS_DET_MS);

		if(palReadLine(LINE_VBUS_HOST)){
			if(hub_state == NOT_CONFIGURED){
				USB3803_configure(&hub);
				hub_state = CONFIGURED;
			}
		
		}else{
			hub_state = NOT_CONFIGURED;
		}
	}
}

//////////////////////////////////////////PUBLIC FUNCTIONS/////////////////////////////////////////

void usbHubStart(void){

	chThdCreateStatic(usb_hub_thd_wa, sizeof(usb_hub_thd_wa), NORMALPRIO, usb_hub_thd, NULL);
}