/**
 * @file	uart_cmd.c
 * @brief  	Manages the uart_cmd transmission between the f746 and the f779
 * 
 * @written by  	Eliot Ferragni
 * @creation date	06.08.2020
 */

#include "ch.h"
#include "hal.h"
#include "uart_cmd.h"
#include "serial_datagram.h"
#include "chprintf.h"
#include "motors.h"
#include "voltage_measurement.h"
/**
 *  Messages payload :
 *  Motor telemetry from programmer : 'T' DT1 RPM1 DT2 RPM2 DT3 RPM3 DT4 RPM4 (DT = duty cycle in float, RPM = rpm in float) => 33 bytes
 *  Voltage measurements from programmer : 'V' VBUS BATTERY TEMPERATURE ( VBUS, BATTERY and TEMPERATURE in float) => 13 bytes
 *  
 *  Motor orders to programmer : 'M' DT1 DT2 DT3 DT4 (DT = duty cycle in uint8_t) => 5 bytes
 */

#define TELEMETRY_MSG_ID        'T'
#define TELEMETRY_MSG_LEN       33
#define VOLTAGE_MSG_ID          'V'
#define VOLTAGE_MSG_LEN         13
#define MOTOR_MSG_ID            'M'
#define MOTOR_MSG_LEN           5

static void uart_cmd_cb(const void *message, size_t len, void *arg){
	(void) arg;

	static uint8_t* buffer_8bits;

	buffer_8bits = (uint8_t*) message;
	
	if(buffer_8bits[0] == MOTOR_MSG_ID && len == MOTOR_MSG_LEN){

		motorSetDutyCycle(BRUSHLESS_MOTOR_1, buffer_8bits[1]);
		motorSetDutyCycle(BRUSHLESS_MOTOR_2, buffer_8bits[2]);
		motorSetDutyCycle(BRUSHLESS_MOTOR_3, buffer_8bits[3]);
		motorSetDutyCycle(BRUSHLESS_MOTOR_4, buffer_8bits[4]);

        // chprintf((BaseSequentialStream *)&SD1, "motor 1: %d dt\r\n", buffer_8bits[1]);
        // chprintf((BaseSequentialStream *)&SD1, "motor 2: %d dt\r\n", buffer_8bits[2]);
        // chprintf((BaseSequentialStream *)&SD1, "motor 3: %d dt\r\n", buffer_8bits[3]);
        // chprintf((BaseSequentialStream *)&SD1, "motor 4: %d dt\r\n\r\n", buffer_8bits[4]);
    }
}

/*
 * Thread dedicated to the reading of the frames received
*/
static THD_WORKING_AREA(uart_cmd_rx_wa, 1024);
static THD_FUNCTION(uart_cmd_rx, arg)
{
	chRegSetThreadName("uart_cmd_rx");
	(void)arg;

    serial_datagram_rcv_handler_t rcv_handler;
    char rcv_buffer[100];

    serial_datagram_rcv_handler_init(&rcv_handler,
                                     rcv_buffer,
                                     sizeof(rcv_buffer),
                                     uart_cmd_cb,
                                     NULL);
    uint8_t c;
    while (1) {
        chnReadTimeout((BaseChannel*)&UART_CMD_PORT, &c, 1, TIME_INFINITE);
        serial_datagram_receive(&rcv_handler, &c, 1);
    }
}

/*
 * a simple wrapper to the system write function
*/
static void _stream_values_sndfn(void *arg, const void *p, size_t len)
{
    if (len > 0) {
        chnWrite((BaseSequentialStream*)arg, (const uint8_t*)p, len);
    }
}

/*
 * Thread dedicated to the sending of the frames
*/
static THD_WORKING_AREA(uart_cmd_tx_wa, 1024);
static THD_FUNCTION(uart_cmd_tx, arg)
{
	chRegSetThreadName("uart_cmd_tx");
	(void)arg;

	char send_buf[100];

	char* send_id = send_buf;
	float* send_float = (float*)&send_buf[1];

	voltage_measurement_t volt;

    while (1) {
    	// Motors telemetry sending
    	*send_id = TELEMETRY_MSG_ID;
    	send_float[0] = motorGetDutyCycle(BRUSHLESS_MOTOR_1);
    	send_float[1] = motorsGetRPM(BRUSHLESS_MOTOR_1);
    	send_float[2] = motorGetDutyCycle(BRUSHLESS_MOTOR_2);
    	send_float[3] = motorsGetRPM(BRUSHLESS_MOTOR_1);
    	send_float[4] = motorGetDutyCycle(BRUSHLESS_MOTOR_3);
    	send_float[5] = motorsGetRPM(BRUSHLESS_MOTOR_1);
    	send_float[6] = motorGetDutyCycle(BRUSHLESS_MOTOR_4);
    	send_float[7] = motorsGetRPM(BRUSHLESS_MOTOR_1);
    	serial_datagram_send(send_buf, TELEMETRY_MSG_LEN, _stream_values_sndfn, &UART_CMD_PORT);

    	// voltage measurements sending
		voltageMesurementGet(&volt);
    	*send_id = VOLTAGE_MSG_ID;
    	send_float[0] = volt.vbus;
    	send_float[1] = volt.battery;
    	send_float[2] = volt.temperature;
    	serial_datagram_send(send_buf, VOLTAGE_MSG_LEN, _stream_values_sndfn, &UART_CMD_PORT);

    	chThdSleepMilliseconds(10);
    }
}


void uartCmdStart(void){
	static const SerialConfig ser_cfg_uart_cmd = {
	    .speed = 27000000,
	    .cr1 = 0,
	    .cr2 = 0,
	    .cr3 = 0,
	};

	sdStart(&UART_CMD_PORT, &ser_cfg_uart_cmd);

	chThdCreateStatic(uart_cmd_tx_wa, sizeof(uart_cmd_tx_wa), NORMALPRIO, uart_cmd_tx, NULL);

	chThdCreateStatic(uart_cmd_rx_wa, sizeof(uart_cmd_rx_wa), NORMALPRIO, uart_cmd_rx, NULL);
}