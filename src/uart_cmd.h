/**
 * @file	uart_cmd.h
 * @brief  	Manages the uart_cmd transmission between the f746 and the f779
 * 
 * @written by  	Eliot Ferragni
 * @creation date	06.08.2020
 */

#ifndef UART_CMD_H
#define UART_CMD_H

#define UART_CMD_PORT 	SD8


void uartCmdStart(void);

#endif  /* UART_CMD_H */