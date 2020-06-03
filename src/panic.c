/**
 * @file	panic.c
 * @brief  	Contains the panic handler function
 * 
 * @written by  	Eliot Ferragni
 * @creation date	03.06.2020
 */

#include <ch.h>
#include <hal.h>

//////////////////////////////////////////PUBLIC FUNCTIONS/////////////////////////////////////////

/**
 * @brief Panic handler called when a kernel panic is invoked
 * @param reason Information given by the OS
 */
void panic_handler(const char *reason)
{
    (void)reason;

    // Turns ON all LEDS in white
    palClearLine(LINE_STATUS_LED1_R);
    palClearLine(LINE_STATUS_LED1_G);
    palClearLine(LINE_STATUS_LED1_B);
	palClearLine(LINE_STATUS_LED2_R);
	palClearLine(LINE_STATUS_LED2_G);
	palClearLine(LINE_STATUS_LED2_B);
	palClearLine(LINE_STATUS_LED3_R);
	palClearLine(LINE_STATUS_LED3_G);
	palClearLine(LINE_STATUS_LED3_B);
  
    while (1) {
    }
}
