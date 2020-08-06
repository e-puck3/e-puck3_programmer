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

static void uart_cmd_cb(const void *message, size_t len, void *arg){
	(void) message;
	(void) len;
	(void) arg;

	chprintf((BaseSequentialStream *)&SD1, "message of len %d : ", len);
	chnWrite((BaseSequentialStream *)&SD1, message, len);
	chprintf((BaseSequentialStream *)&SD1, "\r\n");
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
    char rcv_buffer[30];

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
// static THD_WORKING_AREA(uart_cmd_tx_wa, 1024);
// static THD_FUNCTION(uart_cmd_tx, arg)
// {
// 	chRegSetThreadName("uart_cmd_tx");
// 	(void)arg;

// 	char send_buf[30];

//     while (1) {
//     	serial_datagram_send(send_buf, 30, _stream_values_sndfn, &UART_CMD_PORT);
//     	chThdSleepMilliseconds(10);
//     }
// }


void uartCmdStart(void){
	static const SerialConfig ser_cfg_uart_cmd = {
	    .speed = 115200,
	    .cr1 = 0,
	    .cr2 = 0,
	    .cr3 = 0,
	};

	sdStart(&UART_CMD_PORT, &ser_cfg_uart_cmd);

	// chThdCreateStatic(uart_cmd_tx_wa, sizeof(uart_cmd_tx_wa), NORMALPRIO, uart_cmd_tx, NULL);

	chThdCreateStatic(uart_cmd_rx_wa, sizeof(uart_cmd_rx_wa), NORMALPRIO, uart_cmd_rx, NULL);
}