/**
 * @file    USB3803.c
 * @brief   Functions to configure the USB3803 USB2 Hub over I2C.
 *
 * @author  Eliot Ferragni
 */

#include "ch.h"
#include "hal.h"
#include "USB3803.h"

/********************                   REGISTERS                  ********************/
#define VID_LSB_REG								0x00
#define VID_MSB_REG								0x01
#define PID_LSB_REG								0x02
#define PID_MSB_REG								0x03
#define DID_LSB_REG								0x04
#define DID_MSB_REG								0x05
#define CONFIG_DATA_BYTE_1_REG					0x06
#define CONFIG_DATA_BYTE_2_REG					0x07
#define CONFIG_DATA_BYTE_3_REG					0x08
#define NON_REMOVABLE_DEVICES_REG				0x09
#define PORT_DISABLE_SELF_REG					0x0A
#define PORT_DISABLE_BUS_REG					0x0B
#define MAX_POWER_SELF_REG						0x0C
#define MAX_POWER_BUS_REG						0x0D
#define HUB_CONTROLLER_MAX_CURRENT_SELF_REG		0x0E
#define HUB_CONTROLLER_MAX_CURRENT_BUS_REG		0x0F
#define POWER_ON_TIME_REG						0x10
#define LANG_ID_H_REG							0x11
#define LANG_ID_L_REG							0x12
#define MFR_STR_LEN_REG							0x13
#define PRD_STR_LEN_REG							0x14
#define SER_STR_LEN_REG							0x15
#define MFR_STR_REG								0x16 // 0x16 to 0x53
#define PROD_STR_REG							0x54 // 0x54 to 0x91
#define SER_STR_REG								0x92 // 0x92 to 0xCF
#define DOWNSTREAM_BATTERY_CHARGING_REG			0xD0
#define RESERVED1_REG							0xD1 // 0xD1 to 0xE1
#define UPSTREAM_BATTERY_CHARGER_DETECTION_REG	0xE2
#define RESERVED2_REG							0xE3 // 0xE3 to 0xE4
#define PORT_POWER_STATUS_REG					0xE5
#define OVER_CURRENT_SENSE_CONTROL_REG			0xE6
#define SERIAL_PORT_INTERLOCK_CONTROL_REG		0xE7
#define SERIAL_PORT_INTERRUPT_STATUS_REG		0xE8
#define SERIAL_PORT_INTERRUPT_MASK_REG			0xE9
#define I2C_ADDRESS_0_REG						0xEA
#define I2C_ADDRESS_1_REG						0xEB
#define BATTERY_CHARGER_MODE_REG				0xEC
#define CHARGER_DETECT_MASK_REG					0xED
#define CONFIGURE_PORTABLE_HUB_REG				0xEE
#define RESERVED3_REG							0xEF // 0xEF to 0xF3
#define VARISENSE_UP3_REG						0xF4
#define VARISENSE_21_REG						0xF5
#define BOOST_UP3_REG							0xF6
#define RESERVED4_REG							0xF7
#define BOOST_21_REG							0xF8
#define RESERVED5_REG							0xF9
#define PORT_SWAP_REG							0xFA
#define PORT_REMAP_12_REG						0xFB
#define PORT_REMAP_34_REG						0xFC
#define RESERVED6_REG							0xFD
#define RESERVED7_REG							0xFE
#define I2C_STATUS_COMMAND_REG					0xFF

/********************                 CONFIGURATION                ********************/
// default = 0x9B, Self-powered, High_speed, MTT, EOP disable, individual sensing, individual switching
// modified = 0x1B, Bus-powered, High_speed, MTT, EOP disable, individual sensing, individual switching
#define CONFIG_DATA_BYTE_1						0x1B
// default = ?
// modified = 0x00, No compound
#define CONFIG_DATA_BYTE_2						0x00
// default = ?
// modified = 0x00, standard port mapping mode, string support disabled
#define CONFIG_DATA_BYTE_3						0x00
// default = ?
// modified = 0x00, No devices are Non-Removable
#define NON_REMOVABLE_DEVICES					0x00

// default = ?
// modified = 0xFA, 500mA
#define MAX_POWER_BUS							0xFA
// default = ?
// modified = 0x32, 100ms until a port has power
#define POWER_ON_TIME							0x32

// default = 0x14, Charge detection enabled for SDP, CDP, and DCP
// modified = 0x00, Charge detection completely disabled
#define BATTERY_CHARGER_MODE 					0x00


/********************   SERIAL_PORT_INTERLOCK_CONTROL_REG CONFIG   ********************/
// config_n = 1, connect_n = 1
#define CONFIG_MODE_ENABLED 		 			0x03
// config_n = 0, connect_n = 1
#define CONFIG_MODE_DISABLED 		 			0x02


/********************               PRIVATE FUNCITONS              ********************/

#define SET_RESET_HUB(x) 			palClearLine((x)->reset_n_line)
#define UNSET_RESET_HUB(x) 			palSetLine((x)->reset_n_line)
#define ENABLE_BYPASS_MODE(x) 		palClearLine((x)->bypass_n_line)
#define DISABLE_BYPASS_MODE(x) 		palSetLine((x)->bypass_n_line)
#define ENABLE_VBUS_DEVICES(x) 		palSetLine((x)->vbus_devices_line)
#define DISABLE_VBUS_DEVICES(x) 	palClearLine((x)->vbus_devices_line)
#define SET_HUB_CONNECT(x)			palSetLine((x)->hub_connect_line)
#define CLEAR_HUB_CONNECT(x)		palClearLine((x)->hub_connect_line)

static uint8_t _read_byte(USB3803_t* hub, uint8_t reg){
	uint8_t rxbuf;

	i2cAcquireBus(hub->i2cp);
	i2cMasterTransmit(hub->i2cp, hub->i2c_address_7bits, &reg, 1, &rxbuf, 1);
	i2cReleaseBus(hub->i2cp);

	return rxbuf;
}

static void _write_byte(USB3803_t* hub, uint8_t reg, uint8_t byte){
	uint8_t txbuf[2] = {reg, byte};

	i2cAcquireBus(hub->i2cp);
	i2cMasterTransmit(hub->i2cp, hub->i2c_address_7bits, txbuf, 2, NULL, 0);
	i2cReleaseBus(hub->i2cp);
}

static void _write_byte_multi(USB3803_t* hub, uint8_t reg, uint8_t *bytes, uint8_t len){
	
	uint8_t txbuf[len + 1];

    /* Prepare the transmit buffer */
    txbuf[0] = reg;
    for (uint8_t i = 0 ; i < len; i++) {
        txbuf[i + 1] = bytes[i];
    }

	i2cAcquireBus(hub->i2cp);
	i2cMasterTransmit(hub->i2cp, hub->i2c_address_7bits, txbuf, len+1, NULL, 0);
	i2cReleaseBus(hub->i2cp);
}


/********************               PUBLIC FUNCITONS               ********************/

void USB3803_configure(USB3803_t* hub){
	// we should not have HUB_CONNECT high when the hub is in reset state
	CLEAR_HUB_CONNECT(hub);

	// Tells the devices  VBUS is disconnected
	DISABLE_VBUS_DEVICES(hub);

	SET_RESET_HUB(hub);
	DISABLE_BYPASS_MODE(hub);
	chThdSleepMilliseconds(1);
	UNSET_RESET_HUB(hub);

	// Waits for the hub to be initialized (max 4ms in the datasheet)
	chThdSleepMilliseconds(5);

	// Puts the hub into config mode to let us configure it
	_write_byte(hub, SERIAL_PORT_INTERLOCK_CONTROL_REG, CONFIG_MODE_ENABLED);

	uint8_t temp_buf[] = {
							CONFIG_DATA_BYTE_1,
							CONFIG_DATA_BYTE_2,
							CONFIG_DATA_BYTE_3,
							NON_REMOVABLE_DEVICES
	};

	// Configures only the registers we need to change
	_write_byte_multi(hub, CONFIG_DATA_BYTE_1_REG, temp_buf, sizeof(temp_buf));
	_write_byte(hub, MAX_POWER_BUS_REG, MAX_POWER_BUS);
	_write_byte(hub, POWER_ON_TIME_REG, POWER_ON_TIME);
	_write_byte(hub, BATTERY_CHARGER_MODE_REG, BATTERY_CHARGER_MODE);

	// Puts the hub out of the config mode
	_write_byte(hub, SERIAL_PORT_INTERLOCK_CONTROL_REG, CONFIG_MODE_DISABLED);

	// Gives order to connect to USB
	SET_HUB_CONNECT(hub);

	chThdSleepMilliseconds(5);

	// Tells the device VBUS is connected
	ENABLE_VBUS_DEVICES(hub);

}




// First put SERIAL_PORT_INTERLOCK_CONTROL-config_n to 1 to put in config mode (keep connect_n to 1)
// Then write what you want
// Finally put SERIAL_PORT_INTERLOCK_CONTROL-config_n to 0 to resume normal operation (keep connect_n to 1)
