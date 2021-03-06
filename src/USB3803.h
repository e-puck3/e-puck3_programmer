#ifndef USB3803_H
#define USB3803_H

/**
 * @file    USB3803.h
 * @brief   Functions to configure the USB3803 USB2 Hub over I2C.
 *
 * @author  Eliot Ferragni
 */

#include "ch.h"
#include "hal.h"

#define USB3803_I2C_ADDRESS00_7BITS 	0x08
#define USB3803_I2C_ADDRESS01_7BITS 	0x09
#define USB3803_I2C_ADDRESS10_7BITS 	0x28
#define USB3803_I2C_ADDRESS11_7BITS 	0x29

typedef struct{
	I2CDriver	*i2cp;
	I2CConfig	*i2c_config;
	uint8_t 	i2c_address_7bits;
	ioline_t	vbus_host_line;
	ioline_t	vbus_devices_line;
	ioline_t	reset_n_line;
	ioline_t	bypass_n_line;
	ioline_t	hub_connect_line;
}USB3803_t;


/********************                PUBLIC FUNCITONS              ********************/

/**
 * @brief 		Turns ON and configures the USB Hub with custom parameters and enables
 * 				Vbus for its devices.
 * 				Note: The I2C should already be configured prior calling this function
 * 
 * @param hub 	The hub to configure. See USB3803_t.
 * 
 * @return 		True if an error occured, false otherwise
 */
bool USB3803_configure(USB3803_t* hub);

/**
 * @brief 		Turns OFF the USB Hub and disables Vbus for its devices.
 * 
 * @param hub 	The hub to configure. See USB3803_t.
 */
void USB3803_unconfigure(USB3803_t* hub);

#endif /* USB3803_H*/
