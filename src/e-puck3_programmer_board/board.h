/*
    ChibiOS - Copyright (C) 2006..2018 Giovanni Di Sirio

    Licensed under the Apache License, Version 2.0 (the "License");
    you may not use this file except in compliance with the License.
    You may obtain a copy of the License at

        http://www.apache.org/licenses/LICENSE-2.0

    Unless required by applicable law or agreed to in writing, software
    distributed under the License is distributed on an "AS IS" BASIS,
    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
    See the License for the specific language governing permissions and
    limitations under the License.
*/

/*
 * This file has been automatically generated using ChibiStudio board
 * generator plugin. Do not edit manually.
 */

#ifndef BOARD_H
#define BOARD_H

/*===========================================================================*/
/* Driver constants.                                                         */
/*===========================================================================*/

/*
 * Setup for e-puck3 programmer board.
 */

/*
 * Board identifier.
 */
#define BOARD_EPUCK3_PROGRAMMER
#define BOARD_NAME                  "e-puck3 programmer"

/*
 * Board oscillators-related settings.
 */
#if !defined(STM32_LSECLK)
#define STM32_LSECLK                32768U
#endif

#define STM32_LSEDRV                (3U << 3U)

#if !defined(STM32_HSECLK)
#define STM32_HSECLK                26000000U
#endif

#define STM32_HSE_BYPASS

/*
 * Board voltages.
 * Required for performance limits calculation.
 */
#define STM32_VDD                   300U

/*
 * MCU type as defined in the ST header.
 */
#define STM32F746xx

/*
 * IO pins assignments.
 */
#define GPIOA_ZIO_D32_TIM2_CH1      0U
#define GPIOA_Brushless_sense_mot4A 1U
#define GPIOA_Brushless_sense_mot4B 2U
#define GPIOA_Brushless_sense_mot4C 3U
#define GPIOA_Current_sense_mot2A   4U
#define GPIOA_Current_sense_mot2B   5U
#define GPIOA_Current_sense_mot3A   6U
#define GPIOA_H_bridge_mot4AN       7U
#define GPIOA_RESET_HUB_n           8U
#define GPIOA_USB_VBUS              9U
#define GPIOA_UART_PROG_ESP         10U
#define GPIOA_USB_DM                11U
#define GPIOA_USB_DP                12U
#define GPIOA_SWDIO                 13U
#define GPIOA_SWCLK                 14U
#define GPIOA_H_bridge_mot2AP       15U

#define GPIOB_H_bridge_mot3AP       0U
#define GPIOB_Current_sense_mot4A   1U
#define GPIOB_BAT__INRUSH_LIMIT_n   2U
#define GPIOB_H_bridge_mot2AN       3U
#define GPIOB_H_bridge_mot2CP       4U
#define GPIOB_H_bridge_mot2CN       5U
#define GPIOB_UART_PROG_ESP         6U
#define GPIOB_H_bridge_mot3BN       7U
#define GPIOB_EN_ESP32              8U
#define GPIOB_GPIO0_ESP32           9U
#define GPIOB_H_bridge_mot2BP       10U
#define GPIOB_H_bridge_mot2BN       11U
#define GPIOB_PWR_ON                12U
#define GPIOB_EN_CAN_PROG_n         13U
#define GPIOB_H_bridge_mot4BN       14U
#define GPIOB_H_bridge_mot4CN       15U

#define GPIOC_Brushless_sense_mot2C 0U
#define GPIOC_BAT__sense            1U
#define GPIOC_Current_sense_mot1A   2U
#define GPIOC_Current_sense_mot1B   3U
#define GPIOC_Current_sense_mot4B   4U
#define GPIOC_Current_sense_mot3B   5U
#define GPIOC_H_bridge_mot4AP       6U
#define GPIOC_H_bridge_mot4BP       7U
#define GPIOC_H_bridge_mot4CP       8U
#define GPIOC_H_bridge_mot3AN       9U
#define GPIOC_UART_uC_ESP           10U
#define GPIOC_UART_uC_ESP           11U
#define GPIOC_EN_EXTENSION_TOP      12U
#define GPIOC_BUTTON                13U
#define GPIOC_OSC32_IN              14U
#define GPIOC_OSC32_OUT             15U

#define GPIOD_ZIO_D67_CAN1_RX       0U
#define GPIOD_ZIO_D66_CAN1_TX       1U
#define GPIOD_STATUS_LED1_R         2U
#define GPIOD_STATUS_LED1_G         3U
#define GPIOD_STATUS_LED1_B         4U
#define GPIOD_STATUS_LED2_R         5U
#define GPIOD_STATUS_LED2_G         6U
#define GPIOD_STATUS_LED2_B         7U
#define GPIOD_STATUS_LED3_R         8U
#define GPIOD_STATUS_LED3_G         9U
#define GPIOD_STATUS_LED3_B         10U
#define GPIOD_CS_ENCODER1_n         11U
#define GPIOD_H_bridge_mot3BP       12U
#define GPIOD_I2C_PD_CONTROLLER     13U
#define GPIOD_H_bridge_mot3CP       14U
#define GPIOD_H_bridge_mot3CN       15U

#define GPIOE_UART_CMD              0U
#define GPIOE_UART_CMD              1U
#define GPIOE_EN_DRIVER_4           2U
#define GPIOE_GPIO4_ESP32           3U
#define GPIOE_ZIO_D57_SAI1_FS_A     4U
#define GPIOE_SWD_uC_SWCLK          5U
#define GPIOE_SWD_uC_SWDIO          6U
#define GPIOE_CS_ENCODER2_n         7U
#define GPIOE_H_bridge_mot1AN       8U
#define GPIOE_H_bridge_mot1AP       9U
#define GPIOE_H_bridge_mot1BN       10U
#define GPIOE_H_bridge_mot1BP       11U
#define GPIOE_H_bridge_mot1CN       12U
#define GPIOE_H_bridge_mot1CP       13U
#define GPIOE_CS_ENCODER3_n         14U
#define GPIOE_RESET_uC              15U

#define GPIOF_GPIO13_ESP32          0U
#define GPIOF_HUB_CONNECT           1U
#define GPIOF_EN_DRIVER_2           2U
#define GPIOF_Brushless_sense_mot3C 3U
#define GPIOF_Brushless_sense_mot1B 4U
#define GPIOF_Brushless_sense_mot1C 5U
#define GPIOF_Brushless_sense_mot3A 6U
#define GPIOF_Brushless_sense_mot1A 7U
#define GPIOF_Brushless_sense_mot3B 8U
#define GPIOF_Brushless_sense_mot2A 9U
#define GPIOF_Brushless_sense_mot2B 10U
#define GPIOF_PRIORITY_TO_VBUS      11U
#define GPIOF_ARD_D8                12U
#define GPIOF_CS_ENCODER4_n         13U
#define GPIOF_I2C_PD_CONTROLLER     14U
#define GPIOF_EN_DRIVER_1           15U

#define GPIOG_FAULT_DRIVER_1_n      0U
#define GPIOG_FAULT_DRIVER_2_n      1U
#define GPIOG_FAULT_DRIVER_4_n      2U
#define GPIOG_FAULT_DRIVER_3_n      3U
#define GPIOG_VBUS_HOST             4U
#define GPIOG_INT_PD_CTRL_n         5U
#define GPIOG_VBUS_DEVICES          6U
#define GPIOG_USB_GPIO_IN           7U
#define GPIOG_BYPASS_HUB_n          8U
#define GPIOG_EN_EXTENSION_BOTTOM   9U
#define GPIOG_PWR_ON_BTN_STATE_n    10U
#define GPIOG_EN_DRIVER_3           11U
#define GPIOG_ENCODERS_GATE_DRIVERS 12U
#define GPIOG_ENCODERS_GATE_DRIVERS 13U
#define GPIOG_ENCODERS_GATE_DRIVERS 14U
#define GPIOG_PIN15                 15U

#define GPIOH_OSC_IN                0U
#define GPIOH_OSC_OUT               1U
#define GPIOH_PIN2                  2U
#define GPIOH_PIN3                  3U
#define GPIOH_PIN4                  4U
#define GPIOH_PIN5                  5U
#define GPIOH_PIN6                  6U
#define GPIOH_PIN7                  7U
#define GPIOH_PIN8                  8U
#define GPIOH_PIN9                  9U
#define GPIOH_PIN10                 10U
#define GPIOH_PIN11                 11U
#define GPIOH_PIN12                 12U
#define GPIOH_PIN13                 13U
#define GPIOH_PIN14                 14U
#define GPIOH_PIN15                 15U

/*
 * IO lines assignments.
 */
#define LINE_ZIO_D32_TIM2_CH1       PAL_LINE(GPIOA, 0U)
#define LINE_Brushless_sense_mot4A  PAL_LINE(GPIOA, 1U)
#define LINE_Brushless_sense_mot4B  PAL_LINE(GPIOA, 2U)
#define LINE_Brushless_sense_mot4C  PAL_LINE(GPIOA, 3U)
#define LINE_Current_sense_mot2A    PAL_LINE(GPIOA, 4U)
#define LINE_Current_sense_mot2B    PAL_LINE(GPIOA, 5U)
#define LINE_Current_sense_mot3A    PAL_LINE(GPIOA, 6U)
#define LINE_H_bridge_mot4AN        PAL_LINE(GPIOA, 7U)
#define LINE_RESET_HUB_n            PAL_LINE(GPIOA, 8U)
#define LINE_USB_VBUS               PAL_LINE(GPIOA, 9U)
#define LINE_UART_PROG_ESP          PAL_LINE(GPIOA, 10U)
#define LINE_USB_DM                 PAL_LINE(GPIOA, 11U)
#define LINE_USB_DP                 PAL_LINE(GPIOA, 12U)
#define LINE_SWDIO                  PAL_LINE(GPIOA, 13U)
#define LINE_SWCLK                  PAL_LINE(GPIOA, 14U)
#define LINE_H_bridge_mot2AP        PAL_LINE(GPIOA, 15U)
#define LINE_H_bridge_mot3AP        PAL_LINE(GPIOB, 0U)
#define LINE_Current_sense_mot4A    PAL_LINE(GPIOB, 1U)
#define LINE_BAT__INRUSH_LIMIT_n    PAL_LINE(GPIOB, 2U)
#define LINE_H_bridge_mot2AN        PAL_LINE(GPIOB, 3U)
#define LINE_H_bridge_mot2CP        PAL_LINE(GPIOB, 4U)
#define LINE_H_bridge_mot2CN        PAL_LINE(GPIOB, 5U)
#define LINE_UART_PROG_ESP          PAL_LINE(GPIOB, 6U)
#define LINE_H_bridge_mot3BN        PAL_LINE(GPIOB, 7U)
#define LINE_EN_ESP32               PAL_LINE(GPIOB, 8U)
#define LINE_GPIO0_ESP32            PAL_LINE(GPIOB, 9U)
#define LINE_H_bridge_mot2BP        PAL_LINE(GPIOB, 10U)
#define LINE_H_bridge_mot2BN        PAL_LINE(GPIOB, 11U)
#define LINE_PWR_ON                 PAL_LINE(GPIOB, 12U)
#define LINE_EN_CAN_PROG_n          PAL_LINE(GPIOB, 13U)
#define LINE_H_bridge_mot4BN        PAL_LINE(GPIOB, 14U)
#define LINE_H_bridge_mot4CN        PAL_LINE(GPIOB, 15U)
#define LINE_Brushless_sense_mot2C  PAL_LINE(GPIOC, 0U)
#define LINE_BAT__sense             PAL_LINE(GPIOC, 1U)
#define LINE_Current_sense_mot1A    PAL_LINE(GPIOC, 2U)
#define LINE_Current_sense_mot1B    PAL_LINE(GPIOC, 3U)
#define LINE_Current_sense_mot4B    PAL_LINE(GPIOC, 4U)
#define LINE_Current_sense_mot3B    PAL_LINE(GPIOC, 5U)
#define LINE_H_bridge_mot4AP        PAL_LINE(GPIOC, 6U)
#define LINE_H_bridge_mot4BP        PAL_LINE(GPIOC, 7U)
#define LINE_H_bridge_mot4CP        PAL_LINE(GPIOC, 8U)
#define LINE_H_bridge_mot3AN        PAL_LINE(GPIOC, 9U)
#define LINE_UART_uC_ESP            PAL_LINE(GPIOC, 10U)
#define LINE_UART_uC_ESP            PAL_LINE(GPIOC, 11U)
#define LINE_EN_EXTENSION_TOP       PAL_LINE(GPIOC, 12U)
#define LINE_BUTTON                 PAL_LINE(GPIOC, 13U)
#define LINE_OSC32_IN               PAL_LINE(GPIOC, 14U)
#define LINE_OSC32_OUT              PAL_LINE(GPIOC, 15U)
#define LINE_ZIO_D67_CAN1_RX        PAL_LINE(GPIOD, 0U)
#define LINE_ZIO_D66_CAN1_TX        PAL_LINE(GPIOD, 1U)
#define LINE_STATUS_LED1_R          PAL_LINE(GPIOD, 2U)
#define LINE_STATUS_LED1_G          PAL_LINE(GPIOD, 3U)
#define LINE_STATUS_LED1_B          PAL_LINE(GPIOD, 4U)
#define LINE_STATUS_LED2_R          PAL_LINE(GPIOD, 5U)
#define LINE_STATUS_LED2_G          PAL_LINE(GPIOD, 6U)
#define LINE_STATUS_LED2_B          PAL_LINE(GPIOD, 7U)
#define LINE_STATUS_LED3_R          PAL_LINE(GPIOD, 8U)
#define LINE_STATUS_LED3_G          PAL_LINE(GPIOD, 9U)
#define LINE_STATUS_LED3_B          PAL_LINE(GPIOD, 10U)
#define LINE_CS_ENCODER1_n          PAL_LINE(GPIOD, 11U)
#define LINE_H_bridge_mot3BP        PAL_LINE(GPIOD, 12U)
#define LINE_I2C_PD_CONTROLLER      PAL_LINE(GPIOD, 13U)
#define LINE_H_bridge_mot3CP        PAL_LINE(GPIOD, 14U)
#define LINE_H_bridge_mot3CN        PAL_LINE(GPIOD, 15U)
#define LINE_UART_CMD               PAL_LINE(GPIOE, 0U)
#define LINE_UART_CMD               PAL_LINE(GPIOE, 1U)
#define LINE_EN_DRIVER_4            PAL_LINE(GPIOE, 2U)
#define LINE_GPIO4_ESP32            PAL_LINE(GPIOE, 3U)
#define LINE_ZIO_D57_SAI1_FS_A      PAL_LINE(GPIOE, 4U)
#define LINE_SWD_uC_SWCLK           PAL_LINE(GPIOE, 5U)
#define LINE_SWD_uC_SWDIO           PAL_LINE(GPIOE, 6U)
#define LINE_CS_ENCODER2_n          PAL_LINE(GPIOE, 7U)
#define LINE_H_bridge_mot1AN        PAL_LINE(GPIOE, 8U)
#define LINE_H_bridge_mot1AP        PAL_LINE(GPIOE, 9U)
#define LINE_H_bridge_mot1BN        PAL_LINE(GPIOE, 10U)
#define LINE_H_bridge_mot1BP        PAL_LINE(GPIOE, 11U)
#define LINE_H_bridge_mot1CN        PAL_LINE(GPIOE, 12U)
#define LINE_H_bridge_mot1CP        PAL_LINE(GPIOE, 13U)
#define LINE_CS_ENCODER3_n          PAL_LINE(GPIOE, 14U)
#define LINE_RESET_uC               PAL_LINE(GPIOE, 15U)
#define LINE_GPIO13_ESP32           PAL_LINE(GPIOF, 0U)
#define LINE_HUB_CONNECT            PAL_LINE(GPIOF, 1U)
#define LINE_EN_DRIVER_2            PAL_LINE(GPIOF, 2U)
#define LINE_Brushless_sense_mot3C  PAL_LINE(GPIOF, 3U)
#define LINE_Brushless_sense_mot1B  PAL_LINE(GPIOF, 4U)
#define LINE_Brushless_sense_mot1C  PAL_LINE(GPIOF, 5U)
#define LINE_Brushless_sense_mot3A  PAL_LINE(GPIOF, 6U)
#define LINE_Brushless_sense_mot1A  PAL_LINE(GPIOF, 7U)
#define LINE_Brushless_sense_mot3B  PAL_LINE(GPIOF, 8U)
#define LINE_Brushless_sense_mot2A  PAL_LINE(GPIOF, 9U)
#define LINE_Brushless_sense_mot2B  PAL_LINE(GPIOF, 10U)
#define LINE_PRIORITY_TO_VBUS       PAL_LINE(GPIOF, 11U)
#define LINE_ARD_D8                 PAL_LINE(GPIOF, 12U)
#define LINE_CS_ENCODER4_n          PAL_LINE(GPIOF, 13U)
#define LINE_I2C_PD_CONTROLLER      PAL_LINE(GPIOF, 14U)
#define LINE_EN_DRIVER_1            PAL_LINE(GPIOF, 15U)
#define LINE_FAULT_DRIVER_1_n       PAL_LINE(GPIOG, 0U)
#define LINE_FAULT_DRIVER_2_n       PAL_LINE(GPIOG, 1U)
#define LINE_FAULT_DRIVER_4_n       PAL_LINE(GPIOG, 2U)
#define LINE_FAULT_DRIVER_3_n       PAL_LINE(GPIOG, 3U)
#define LINE_VBUS_HOST              PAL_LINE(GPIOG, 4U)
#define LINE_INT_PD_CTRL_n          PAL_LINE(GPIOG, 5U)
#define LINE_VBUS_DEVICES           PAL_LINE(GPIOG, 6U)
#define LINE_USB_GPIO_IN            PAL_LINE(GPIOG, 7U)
#define LINE_BYPASS_HUB_n           PAL_LINE(GPIOG, 8U)
#define LINE_EN_EXTENSION_BOTTOM    PAL_LINE(GPIOG, 9U)
#define LINE_PWR_ON_BTN_STATE_n     PAL_LINE(GPIOG, 10U)
#define LINE_EN_DRIVER_3            PAL_LINE(GPIOG, 11U)
#define LINE_ENCODERS_GATE_DRIVERS  PAL_LINE(GPIOG, 12U)
#define LINE_ENCODERS_GATE_DRIVERS  PAL_LINE(GPIOG, 13U)
#define LINE_ENCODERS_GATE_DRIVERS  PAL_LINE(GPIOG, 14U)
#define LINE_OSC_IN                 PAL_LINE(GPIOH, 0U)
#define LINE_OSC_OUT                PAL_LINE(GPIOH, 1U)

/*===========================================================================*/
/* Driver pre-compile time settings.                                         */
/*===========================================================================*/

/*===========================================================================*/
/* Derived constants and error checks.                                       */
/*===========================================================================*/

/*===========================================================================*/
/* Driver data structures and types.                                         */
/*===========================================================================*/

/*===========================================================================*/
/* Driver macros.                                                            */
/*===========================================================================*/

/*
 * I/O ports initial setup, this configuration is established soon after reset
 * in the initialization code.
 * Please refer to the STM32 Reference Manual for details.
 */
#define PIN_MODE_INPUT(n)           (0U << ((n) * 2U))
#define PIN_MODE_OUTPUT(n)          (1U << ((n) * 2U))
#define PIN_MODE_ALTERNATE(n)       (2U << ((n) * 2U))
#define PIN_MODE_ANALOG(n)          (3U << ((n) * 2U))
#define PIN_ODR_LOW(n)              (0U << (n))
#define PIN_ODR_HIGH(n)             (1U << (n))
#define PIN_OTYPE_PUSHPULL(n)       (0U << (n))
#define PIN_OTYPE_OPENDRAIN(n)      (1U << (n))
#define PIN_OSPEED_VERYLOW(n)       (0U << ((n) * 2U))
#define PIN_OSPEED_LOW(n)           (1U << ((n) * 2U))
#define PIN_OSPEED_MEDIUM(n)        (2U << ((n) * 2U))
#define PIN_OSPEED_HIGH(n)          (3U << ((n) * 2U))
#define PIN_PUPDR_FLOATING(n)       (0U << ((n) * 2U))
#define PIN_PUPDR_PULLUP(n)         (1U << ((n) * 2U))
#define PIN_PUPDR_PULLDOWN(n)       (2U << ((n) * 2U))
#define PIN_AFIO_AF(n, v)           ((v) << (((n) % 8U) * 4U))

/*
 * GPIOA setup:
 *
 * PA0  - ZIO_D32_TIM2_CH1          (input pullup).
 * PA1  - Brushless_sense_mot4A     (analog).
 * PA2  - Brushless_sense_mot4B     (analog).
 * PA3  - Brushless_sense_mot4C     (analog).
 * PA4  - Current_sense_mot2A       (analog).
 * PA5  - Current_sense_mot2B       (analog).
 * PA6  - Current_sense_mot3A       (analog).
 * PA7  - H_bridge_mot4AN           (alternate 3).
 * PA8  - RESET_HUB_n               (output pushpull minimum).
 * PA9  - USB_VBUS                  (input floating).
 * PA10 - UART_PROG_ESP             (alternate 7).
 * PA11 - USB_DM                    (alternate 10).
 * PA12 - USB_DP                    (alternate 10).
 * PA13 - SWDIO                     (alternate 0).
 * PA14 - SWCLK                     (alternate 0).
 * PA15 - H_bridge_mot2AP           (input floating).
 */
#define VAL_GPIOA_MODER             (PIN_MODE_INPUT(GPIOA_ZIO_D32_TIM2_CH1) |\
                                     PIN_MODE_ANALOG(GPIOA_Brushless_sense_mot4A) |\
                                     PIN_MODE_ANALOG(GPIOA_Brushless_sense_mot4B) |\
                                     PIN_MODE_ANALOG(GPIOA_Brushless_sense_mot4C) |\
                                     PIN_MODE_ANALOG(GPIOA_Current_sense_mot2A) |\
                                     PIN_MODE_ANALOG(GPIOA_Current_sense_mot2B) |\
                                     PIN_MODE_ANALOG(GPIOA_Current_sense_mot3A) |\
                                     PIN_MODE_ALTERNATE(GPIOA_H_bridge_mot4AN) |\
                                     PIN_MODE_OUTPUT(GPIOA_RESET_HUB_n) |   \
                                     PIN_MODE_INPUT(GPIOA_USB_VBUS) |       \
                                     PIN_MODE_ALTERNATE(GPIOA_UART_PROG_ESP) |\
                                     PIN_MODE_ALTERNATE(GPIOA_USB_DM) |     \
                                     PIN_MODE_ALTERNATE(GPIOA_USB_DP) |     \
                                     PIN_MODE_ALTERNATE(GPIOA_SWDIO) |      \
                                     PIN_MODE_ALTERNATE(GPIOA_SWCLK) |      \
                                     PIN_MODE_INPUT(GPIOA_H_bridge_mot2AP))
#define VAL_GPIOA_OTYPER            (PIN_OTYPE_PUSHPULL(GPIOA_ZIO_D32_TIM2_CH1) |\
                                     PIN_OTYPE_PUSHPULL(GPIOA_Brushless_sense_mot4A) |\
                                     PIN_OTYPE_PUSHPULL(GPIOA_Brushless_sense_mot4B) |\
                                     PIN_OTYPE_PUSHPULL(GPIOA_Brushless_sense_mot4C) |\
                                     PIN_OTYPE_PUSHPULL(GPIOA_Current_sense_mot2A) |\
                                     PIN_OTYPE_PUSHPULL(GPIOA_Current_sense_mot2B) |\
                                     PIN_OTYPE_PUSHPULL(GPIOA_Current_sense_mot3A) |\
                                     PIN_OTYPE_PUSHPULL(GPIOA_H_bridge_mot4AN) |\
                                     PIN_OTYPE_PUSHPULL(GPIOA_RESET_HUB_n) |\
                                     PIN_OTYPE_PUSHPULL(GPIOA_USB_VBUS) |   \
                                     PIN_OTYPE_PUSHPULL(GPIOA_UART_PROG_ESP) |\
                                     PIN_OTYPE_PUSHPULL(GPIOA_USB_DM) |     \
                                     PIN_OTYPE_PUSHPULL(GPIOA_USB_DP) |     \
                                     PIN_OTYPE_PUSHPULL(GPIOA_SWDIO) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOA_SWCLK) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOA_H_bridge_mot2AP))
#define VAL_GPIOA_OSPEEDR           (PIN_OSPEED_HIGH(GPIOA_ZIO_D32_TIM2_CH1) |\
                                     PIN_OSPEED_VERYLOW(GPIOA_Brushless_sense_mot4A) |\
                                     PIN_OSPEED_VERYLOW(GPIOA_Brushless_sense_mot4B) |\
                                     PIN_OSPEED_VERYLOW(GPIOA_Brushless_sense_mot4C) |\
                                     PIN_OSPEED_VERYLOW(GPIOA_Current_sense_mot2A) |\
                                     PIN_OSPEED_VERYLOW(GPIOA_Current_sense_mot2B) |\
                                     PIN_OSPEED_VERYLOW(GPIOA_Current_sense_mot3A) |\
                                     PIN_OSPEED_VERYLOW(GPIOA_H_bridge_mot4AN) |\
                                     PIN_OSPEED_VERYLOW(GPIOA_RESET_HUB_n) |\
                                     PIN_OSPEED_VERYLOW(GPIOA_USB_VBUS) |   \
                                     PIN_OSPEED_VERYLOW(GPIOA_UART_PROG_ESP) |\
                                     PIN_OSPEED_VERYLOW(GPIOA_USB_DM) |     \
                                     PIN_OSPEED_VERYLOW(GPIOA_USB_DP) |     \
                                     PIN_OSPEED_VERYLOW(GPIOA_SWDIO) |      \
                                     PIN_OSPEED_VERYLOW(GPIOA_SWCLK) |      \
                                     PIN_OSPEED_VERYLOW(GPIOA_H_bridge_mot2AP))
#define VAL_GPIOA_PUPDR             (PIN_PUPDR_PULLUP(GPIOA_ZIO_D32_TIM2_CH1) |\
                                     PIN_PUPDR_FLOATING(GPIOA_Brushless_sense_mot4A) |\
                                     PIN_PUPDR_FLOATING(GPIOA_Brushless_sense_mot4B) |\
                                     PIN_PUPDR_FLOATING(GPIOA_Brushless_sense_mot4C) |\
                                     PIN_PUPDR_FLOATING(GPIOA_Current_sense_mot2A) |\
                                     PIN_PUPDR_FLOATING(GPIOA_Current_sense_mot2B) |\
                                     PIN_PUPDR_FLOATING(GPIOA_Current_sense_mot3A) |\
                                     PIN_PUPDR_FLOATING(GPIOA_H_bridge_mot4AN) |\
                                     PIN_PUPDR_FLOATING(GPIOA_RESET_HUB_n) |\
                                     PIN_PUPDR_FLOATING(GPIOA_USB_VBUS) |   \
                                     PIN_PUPDR_FLOATING(GPIOA_UART_PROG_ESP) |\
                                     PIN_PUPDR_FLOATING(GPIOA_USB_DM) |     \
                                     PIN_PUPDR_FLOATING(GPIOA_USB_DP) |     \
                                     PIN_PUPDR_FLOATING(GPIOA_SWDIO) |      \
                                     PIN_PUPDR_FLOATING(GPIOA_SWCLK) |      \
                                     PIN_PUPDR_FLOATING(GPIOA_H_bridge_mot2AP))
#define VAL_GPIOA_ODR               (PIN_ODR_HIGH(GPIOA_ZIO_D32_TIM2_CH1) | \
                                     PIN_ODR_LOW(GPIOA_Brushless_sense_mot4A) |\
                                     PIN_ODR_LOW(GPIOA_Brushless_sense_mot4B) |\
                                     PIN_ODR_LOW(GPIOA_Brushless_sense_mot4C) |\
                                     PIN_ODR_LOW(GPIOA_Current_sense_mot2A) |\
                                     PIN_ODR_LOW(GPIOA_Current_sense_mot2B) |\
                                     PIN_ODR_LOW(GPIOA_Current_sense_mot3A) |\
                                     PIN_ODR_LOW(GPIOA_H_bridge_mot4AN) |   \
                                     PIN_ODR_LOW(GPIOA_RESET_HUB_n) |       \
                                     PIN_ODR_LOW(GPIOA_USB_VBUS) |          \
                                     PIN_ODR_LOW(GPIOA_UART_PROG_ESP) |     \
                                     PIN_ODR_LOW(GPIOA_USB_DM) |            \
                                     PIN_ODR_LOW(GPIOA_USB_DP) |            \
                                     PIN_ODR_LOW(GPIOA_SWDIO) |             \
                                     PIN_ODR_LOW(GPIOA_SWCLK) |             \
                                     PIN_ODR_LOW(GPIOA_H_bridge_mot2AP))
#define VAL_GPIOA_AFRL              (PIN_AFIO_AF(GPIOA_ZIO_D32_TIM2_CH1, 0U) |\
                                     PIN_AFIO_AF(GPIOA_Brushless_sense_mot4A, 0U) |\
                                     PIN_AFIO_AF(GPIOA_Brushless_sense_mot4B, 0U) |\
                                     PIN_AFIO_AF(GPIOA_Brushless_sense_mot4C, 0U) |\
                                     PIN_AFIO_AF(GPIOA_Current_sense_mot2A, 0U) |\
                                     PIN_AFIO_AF(GPIOA_Current_sense_mot2B, 0U) |\
                                     PIN_AFIO_AF(GPIOA_Current_sense_mot3A, 0U) |\
                                     PIN_AFIO_AF(GPIOA_H_bridge_mot4AN, 3U))
#define VAL_GPIOA_AFRH              (PIN_AFIO_AF(GPIOA_RESET_HUB_n, 0U) |   \
                                     PIN_AFIO_AF(GPIOA_USB_VBUS, 0U) |      \
                                     PIN_AFIO_AF(GPIOA_UART_PROG_ESP, 7U) | \
                                     PIN_AFIO_AF(GPIOA_USB_DM, 10U) |       \
                                     PIN_AFIO_AF(GPIOA_USB_DP, 10U) |       \
                                     PIN_AFIO_AF(GPIOA_SWDIO, 0U) |         \
                                     PIN_AFIO_AF(GPIOA_SWCLK, 0U) |         \
                                     PIN_AFIO_AF(GPIOA_H_bridge_mot2AP, 0U))

/*
 * GPIOB setup:
 *
 * PB0  - H_bridge_mot3AP           (input floating).
 * PB1  - Current_sense_mot4A       (analog).
 * PB2  - BAT__INRUSH_LIMIT_n       (output pushpull minimum).
 * PB3  - H_bridge_mot2AN           (input floating).
 * PB4  - H_bridge_mot2CP           (input floating).
 * PB5  - H_bridge_mot2CN           (input floating).
 * PB6  - UART_PROG_ESP             (alternate 7).
 * PB7  - H_bridge_mot3BN           (input floating).
 * PB8  - EN_ESP32                  (output pushpull minimum).
 * PB9  - GPIO0_ESP32               (output pushpull minimum).
 * PB10 - H_bridge_mot2BP           (input floating).
 * PB11 - H_bridge_mot2BN           (input floating).
 * PB12 - PWR_ON                    (output pushpull minimum).
 * PB13 - EN_CAN_PROG_n             (output pushpull minimum).
 * PB14 - H_bridge_mot4BN           (alternate 3).
 * PB15 - H_bridge_mot4CN           (alternate 3).
 */
#define VAL_GPIOB_MODER             (PIN_MODE_INPUT(GPIOB_H_bridge_mot3AP) |\
                                     PIN_MODE_ANALOG(GPIOB_Current_sense_mot4A) |\
                                     PIN_MODE_OUTPUT(GPIOB_BAT__INRUSH_LIMIT_n) |\
                                     PIN_MODE_INPUT(GPIOB_H_bridge_mot2AN) |\
                                     PIN_MODE_INPUT(GPIOB_H_bridge_mot2CP) |\
                                     PIN_MODE_INPUT(GPIOB_H_bridge_mot2CN) |\
                                     PIN_MODE_ALTERNATE(GPIOB_UART_PROG_ESP) |\
                                     PIN_MODE_INPUT(GPIOB_H_bridge_mot3BN) |\
                                     PIN_MODE_OUTPUT(GPIOB_EN_ESP32) |      \
                                     PIN_MODE_OUTPUT(GPIOB_GPIO0_ESP32) |   \
                                     PIN_MODE_INPUT(GPIOB_H_bridge_mot2BP) |\
                                     PIN_MODE_INPUT(GPIOB_H_bridge_mot2BN) |\
                                     PIN_MODE_OUTPUT(GPIOB_PWR_ON) |        \
                                     PIN_MODE_OUTPUT(GPIOB_EN_CAN_PROG_n) | \
                                     PIN_MODE_ALTERNATE(GPIOB_H_bridge_mot4BN) |\
                                     PIN_MODE_ALTERNATE(GPIOB_H_bridge_mot4CN))
#define VAL_GPIOB_OTYPER            (PIN_OTYPE_PUSHPULL(GPIOB_H_bridge_mot3AP) |\
                                     PIN_OTYPE_PUSHPULL(GPIOB_Current_sense_mot4A) |\
                                     PIN_OTYPE_PUSHPULL(GPIOB_BAT__INRUSH_LIMIT_n) |\
                                     PIN_OTYPE_PUSHPULL(GPIOB_H_bridge_mot2AN) |\
                                     PIN_OTYPE_PUSHPULL(GPIOB_H_bridge_mot2CP) |\
                                     PIN_OTYPE_PUSHPULL(GPIOB_H_bridge_mot2CN) |\
                                     PIN_OTYPE_PUSHPULL(GPIOB_UART_PROG_ESP) |\
                                     PIN_OTYPE_PUSHPULL(GPIOB_H_bridge_mot3BN) |\
                                     PIN_OTYPE_PUSHPULL(GPIOB_EN_ESP32) |   \
                                     PIN_OTYPE_PUSHPULL(GPIOB_GPIO0_ESP32) |\
                                     PIN_OTYPE_PUSHPULL(GPIOB_H_bridge_mot2BP) |\
                                     PIN_OTYPE_PUSHPULL(GPIOB_H_bridge_mot2BN) |\
                                     PIN_OTYPE_PUSHPULL(GPIOB_PWR_ON) |     \
                                     PIN_OTYPE_PUSHPULL(GPIOB_EN_CAN_PROG_n) |\
                                     PIN_OTYPE_PUSHPULL(GPIOB_H_bridge_mot4BN) |\
                                     PIN_OTYPE_PUSHPULL(GPIOB_H_bridge_mot4CN))
#define VAL_GPIOB_OSPEEDR           (PIN_OSPEED_VERYLOW(GPIOB_H_bridge_mot3AP) |\
                                     PIN_OSPEED_VERYLOW(GPIOB_Current_sense_mot4A) |\
                                     PIN_OSPEED_VERYLOW(GPIOB_BAT__INRUSH_LIMIT_n) |\
                                     PIN_OSPEED_VERYLOW(GPIOB_H_bridge_mot2AN) |\
                                     PIN_OSPEED_VERYLOW(GPIOB_H_bridge_mot2CP) |\
                                     PIN_OSPEED_VERYLOW(GPIOB_H_bridge_mot2CN) |\
                                     PIN_OSPEED_VERYLOW(GPIOB_UART_PROG_ESP) |\
                                     PIN_OSPEED_VERYLOW(GPIOB_H_bridge_mot3BN) |\
                                     PIN_OSPEED_VERYLOW(GPIOB_EN_ESP32) |   \
                                     PIN_OSPEED_VERYLOW(GPIOB_GPIO0_ESP32) |\
                                     PIN_OSPEED_VERYLOW(GPIOB_H_bridge_mot2BP) |\
                                     PIN_OSPEED_VERYLOW(GPIOB_H_bridge_mot2BN) |\
                                     PIN_OSPEED_VERYLOW(GPIOB_PWR_ON) |     \
                                     PIN_OSPEED_VERYLOW(GPIOB_EN_CAN_PROG_n) |\
                                     PIN_OSPEED_VERYLOW(GPIOB_H_bridge_mot4BN) |\
                                     PIN_OSPEED_VERYLOW(GPIOB_H_bridge_mot4CN))
#define VAL_GPIOB_PUPDR             (PIN_PUPDR_FLOATING(GPIOB_H_bridge_mot3AP) |\
                                     PIN_PUPDR_FLOATING(GPIOB_Current_sense_mot4A) |\
                                     PIN_PUPDR_FLOATING(GPIOB_BAT__INRUSH_LIMIT_n) |\
                                     PIN_PUPDR_FLOATING(GPIOB_H_bridge_mot2AN) |\
                                     PIN_PUPDR_FLOATING(GPIOB_H_bridge_mot2CP) |\
                                     PIN_PUPDR_FLOATING(GPIOB_H_bridge_mot2CN) |\
                                     PIN_PUPDR_FLOATING(GPIOB_UART_PROG_ESP) |\
                                     PIN_PUPDR_FLOATING(GPIOB_H_bridge_mot3BN) |\
                                     PIN_PUPDR_FLOATING(GPIOB_EN_ESP32) |   \
                                     PIN_PUPDR_FLOATING(GPIOB_GPIO0_ESP32) |\
                                     PIN_PUPDR_FLOATING(GPIOB_H_bridge_mot2BP) |\
                                     PIN_PUPDR_FLOATING(GPIOB_H_bridge_mot2BN) |\
                                     PIN_PUPDR_FLOATING(GPIOB_PWR_ON) |     \
                                     PIN_PUPDR_FLOATING(GPIOB_EN_CAN_PROG_n) |\
                                     PIN_PUPDR_FLOATING(GPIOB_H_bridge_mot4BN) |\
                                     PIN_PUPDR_FLOATING(GPIOB_H_bridge_mot4CN))
#define VAL_GPIOB_ODR               (PIN_ODR_LOW(GPIOB_H_bridge_mot3AP) |   \
                                     PIN_ODR_LOW(GPIOB_Current_sense_mot4A) |\
                                     PIN_ODR_LOW(GPIOB_BAT__INRUSH_LIMIT_n) |\
                                     PIN_ODR_LOW(GPIOB_H_bridge_mot2AN) |   \
                                     PIN_ODR_LOW(GPIOB_H_bridge_mot2CP) |   \
                                     PIN_ODR_LOW(GPIOB_H_bridge_mot2CN) |   \
                                     PIN_ODR_LOW(GPIOB_UART_PROG_ESP) |     \
                                     PIN_ODR_LOW(GPIOB_H_bridge_mot3BN) |   \
                                     PIN_ODR_LOW(GPIOB_EN_ESP32) |          \
                                     PIN_ODR_LOW(GPIOB_GPIO0_ESP32) |       \
                                     PIN_ODR_LOW(GPIOB_H_bridge_mot2BP) |   \
                                     PIN_ODR_LOW(GPIOB_H_bridge_mot2BN) |   \
                                     PIN_ODR_LOW(GPIOB_PWR_ON) |            \
                                     PIN_ODR_LOW(GPIOB_EN_CAN_PROG_n) |     \
                                     PIN_ODR_LOW(GPIOB_H_bridge_mot4BN) |   \
                                     PIN_ODR_LOW(GPIOB_H_bridge_mot4CN))
#define VAL_GPIOB_AFRL              (PIN_AFIO_AF(GPIOB_H_bridge_mot3AP, 0U) |\
                                     PIN_AFIO_AF(GPIOB_Current_sense_mot4A, 0U) |\
                                     PIN_AFIO_AF(GPIOB_BAT__INRUSH_LIMIT_n, 0U) |\
                                     PIN_AFIO_AF(GPIOB_H_bridge_mot2AN, 0U) |\
                                     PIN_AFIO_AF(GPIOB_H_bridge_mot2CP, 0U) |\
                                     PIN_AFIO_AF(GPIOB_H_bridge_mot2CN, 0U) |\
                                     PIN_AFIO_AF(GPIOB_UART_PROG_ESP, 7U) | \
                                     PIN_AFIO_AF(GPIOB_H_bridge_mot3BN, 0U))
#define VAL_GPIOB_AFRH              (PIN_AFIO_AF(GPIOB_EN_ESP32, 0U) |      \
                                     PIN_AFIO_AF(GPIOB_GPIO0_ESP32, 0U) |   \
                                     PIN_AFIO_AF(GPIOB_H_bridge_mot2BP, 0U) |\
                                     PIN_AFIO_AF(GPIOB_H_bridge_mot2BN, 0U) |\
                                     PIN_AFIO_AF(GPIOB_PWR_ON, 0U) |        \
                                     PIN_AFIO_AF(GPIOB_EN_CAN_PROG_n, 0U) | \
                                     PIN_AFIO_AF(GPIOB_H_bridge_mot4BN, 3U) |\
                                     PIN_AFIO_AF(GPIOB_H_bridge_mot4CN, 3U))

/*
 * GPIOC setup:
 *
 * PC0  - Brushless_sense_mot2C     (analog).
 * PC1  - BAT__sense                (analog).
 * PC2  - Current_sense_mot1A       (analog).
 * PC3  - Current_sense_mot1B       (analog).
 * PC4  - Current_sense_mot4B       (analog).
 * PC5  - Current_sense_mot3B       (analog).
 * PC6  - H_bridge_mot4AP           (input floating).
 * PC7  - H_bridge_mot4BP           (input floating).
 * PC8  - H_bridge_mot4CP           (input floating).
 * PC9  - H_bridge_mot3AN           (input floating).
 * PC10 - UART_uC_ESP               (alternate 7).
 * PC11 - UART_uC_ESP               (alternate 7).
 * PC12 - EN_EXTENSION_TOP          (output pushpull minimum).
 * PC13 - BUTTON                    (input floating).
 * PC14 - OSC32_IN                  (input floating).
 * PC15 - OSC32_OUT                 (input floating).
 */
#define VAL_GPIOC_MODER             (PIN_MODE_ANALOG(GPIOC_Brushless_sense_mot2C) |\
                                     PIN_MODE_ANALOG(GPIOC_BAT__sense) |    \
                                     PIN_MODE_ANALOG(GPIOC_Current_sense_mot1A) |\
                                     PIN_MODE_ANALOG(GPIOC_Current_sense_mot1B) |\
                                     PIN_MODE_ANALOG(GPIOC_Current_sense_mot4B) |\
                                     PIN_MODE_ANALOG(GPIOC_Current_sense_mot3B) |\
                                     PIN_MODE_INPUT(GPIOC_H_bridge_mot4AP) |\
                                     PIN_MODE_INPUT(GPIOC_H_bridge_mot4BP) |\
                                     PIN_MODE_INPUT(GPIOC_H_bridge_mot4CP) |\
                                     PIN_MODE_INPUT(GPIOC_H_bridge_mot3AN) |\
                                     PIN_MODE_ALTERNATE(GPIOC_UART_uC_ESP) |\
                                     PIN_MODE_ALTERNATE(GPIOC_UART_uC_ESP) |\
                                     PIN_MODE_OUTPUT(GPIOC_EN_EXTENSION_TOP) |\
                                     PIN_MODE_INPUT(GPIOC_BUTTON) |         \
                                     PIN_MODE_INPUT(GPIOC_OSC32_IN) |       \
                                     PIN_MODE_INPUT(GPIOC_OSC32_OUT))
#define VAL_GPIOC_OTYPER            (PIN_OTYPE_PUSHPULL(GPIOC_Brushless_sense_mot2C) |\
                                     PIN_OTYPE_PUSHPULL(GPIOC_BAT__sense) | \
                                     PIN_OTYPE_PUSHPULL(GPIOC_Current_sense_mot1A) |\
                                     PIN_OTYPE_PUSHPULL(GPIOC_Current_sense_mot1B) |\
                                     PIN_OTYPE_PUSHPULL(GPIOC_Current_sense_mot4B) |\
                                     PIN_OTYPE_PUSHPULL(GPIOC_Current_sense_mot3B) |\
                                     PIN_OTYPE_PUSHPULL(GPIOC_H_bridge_mot4AP) |\
                                     PIN_OTYPE_PUSHPULL(GPIOC_H_bridge_mot4BP) |\
                                     PIN_OTYPE_PUSHPULL(GPIOC_H_bridge_mot4CP) |\
                                     PIN_OTYPE_PUSHPULL(GPIOC_H_bridge_mot3AN) |\
                                     PIN_OTYPE_PUSHPULL(GPIOC_UART_uC_ESP) |\
                                     PIN_OTYPE_PUSHPULL(GPIOC_UART_uC_ESP) |\
                                     PIN_OTYPE_PUSHPULL(GPIOC_EN_EXTENSION_TOP) |\
                                     PIN_OTYPE_PUSHPULL(GPIOC_BUTTON) |     \
                                     PIN_OTYPE_PUSHPULL(GPIOC_OSC32_IN) |   \
                                     PIN_OTYPE_PUSHPULL(GPIOC_OSC32_OUT))
#define VAL_GPIOC_OSPEEDR           (PIN_OSPEED_VERYLOW(GPIOC_Brushless_sense_mot2C) |\
                                     PIN_OSPEED_VERYLOW(GPIOC_BAT__sense) | \
                                     PIN_OSPEED_VERYLOW(GPIOC_Current_sense_mot1A) |\
                                     PIN_OSPEED_VERYLOW(GPIOC_Current_sense_mot1B) |\
                                     PIN_OSPEED_VERYLOW(GPIOC_Current_sense_mot4B) |\
                                     PIN_OSPEED_VERYLOW(GPIOC_Current_sense_mot3B) |\
                                     PIN_OSPEED_VERYLOW(GPIOC_H_bridge_mot4AP) |\
                                     PIN_OSPEED_VERYLOW(GPIOC_H_bridge_mot4BP) |\
                                     PIN_OSPEED_VERYLOW(GPIOC_H_bridge_mot4CP) |\
                                     PIN_OSPEED_VERYLOW(GPIOC_H_bridge_mot3AN) |\
                                     PIN_OSPEED_VERYLOW(GPIOC_UART_uC_ESP) |\
                                     PIN_OSPEED_VERYLOW(GPIOC_UART_uC_ESP) |\
                                     PIN_OSPEED_VERYLOW(GPIOC_EN_EXTENSION_TOP) |\
                                     PIN_OSPEED_HIGH(GPIOC_BUTTON) |        \
                                     PIN_OSPEED_VERYLOW(GPIOC_OSC32_IN) |   \
                                     PIN_OSPEED_VERYLOW(GPIOC_OSC32_OUT))
#define VAL_GPIOC_PUPDR             (PIN_PUPDR_FLOATING(GPIOC_Brushless_sense_mot2C) |\
                                     PIN_PUPDR_FLOATING(GPIOC_BAT__sense) | \
                                     PIN_PUPDR_FLOATING(GPIOC_Current_sense_mot1A) |\
                                     PIN_PUPDR_FLOATING(GPIOC_Current_sense_mot1B) |\
                                     PIN_PUPDR_FLOATING(GPIOC_Current_sense_mot4B) |\
                                     PIN_PUPDR_FLOATING(GPIOC_Current_sense_mot3B) |\
                                     PIN_PUPDR_FLOATING(GPIOC_H_bridge_mot4AP) |\
                                     PIN_PUPDR_FLOATING(GPIOC_H_bridge_mot4BP) |\
                                     PIN_PUPDR_FLOATING(GPIOC_H_bridge_mot4CP) |\
                                     PIN_PUPDR_FLOATING(GPIOC_H_bridge_mot3AN) |\
                                     PIN_PUPDR_FLOATING(GPIOC_UART_uC_ESP) |\
                                     PIN_PUPDR_FLOATING(GPIOC_UART_uC_ESP) |\
                                     PIN_PUPDR_FLOATING(GPIOC_EN_EXTENSION_TOP) |\
                                     PIN_PUPDR_FLOATING(GPIOC_BUTTON) |     \
                                     PIN_PUPDR_FLOATING(GPIOC_OSC32_IN) |   \
                                     PIN_PUPDR_FLOATING(GPIOC_OSC32_OUT))
#define VAL_GPIOC_ODR               (PIN_ODR_LOW(GPIOC_Brushless_sense_mot2C) |\
                                     PIN_ODR_LOW(GPIOC_BAT__sense) |        \
                                     PIN_ODR_LOW(GPIOC_Current_sense_mot1A) |\
                                     PIN_ODR_LOW(GPIOC_Current_sense_mot1B) |\
                                     PIN_ODR_LOW(GPIOC_Current_sense_mot4B) |\
                                     PIN_ODR_LOW(GPIOC_Current_sense_mot3B) |\
                                     PIN_ODR_LOW(GPIOC_H_bridge_mot4AP) |   \
                                     PIN_ODR_LOW(GPIOC_H_bridge_mot4BP) |   \
                                     PIN_ODR_LOW(GPIOC_H_bridge_mot4CP) |   \
                                     PIN_ODR_LOW(GPIOC_H_bridge_mot3AN) |   \
                                     PIN_ODR_LOW(GPIOC_UART_uC_ESP) |       \
                                     PIN_ODR_LOW(GPIOC_UART_uC_ESP) |       \
                                     PIN_ODR_LOW(GPIOC_EN_EXTENSION_TOP) |  \
                                     PIN_ODR_HIGH(GPIOC_BUTTON) |           \
                                     PIN_ODR_HIGH(GPIOC_OSC32_IN) |         \
                                     PIN_ODR_HIGH(GPIOC_OSC32_OUT))
#define VAL_GPIOC_AFRL              (PIN_AFIO_AF(GPIOC_Brushless_sense_mot2C, 0U) |\
                                     PIN_AFIO_AF(GPIOC_BAT__sense, 0U) |    \
                                     PIN_AFIO_AF(GPIOC_Current_sense_mot1A, 0U) |\
                                     PIN_AFIO_AF(GPIOC_Current_sense_mot1B, 0U) |\
                                     PIN_AFIO_AF(GPIOC_Current_sense_mot4B, 0U) |\
                                     PIN_AFIO_AF(GPIOC_Current_sense_mot3B, 0U) |\
                                     PIN_AFIO_AF(GPIOC_H_bridge_mot4AP, 0U) |\
                                     PIN_AFIO_AF(GPIOC_H_bridge_mot4BP, 0U))
#define VAL_GPIOC_AFRH              (PIN_AFIO_AF(GPIOC_H_bridge_mot4CP, 0U) |\
                                     PIN_AFIO_AF(GPIOC_H_bridge_mot3AN, 0U) |\
                                     PIN_AFIO_AF(GPIOC_UART_uC_ESP, 7U) |   \
                                     PIN_AFIO_AF(GPIOC_UART_uC_ESP, 7U) |   \
                                     PIN_AFIO_AF(GPIOC_EN_EXTENSION_TOP, 0U) |\
                                     PIN_AFIO_AF(GPIOC_BUTTON, 0U) |        \
                                     PIN_AFIO_AF(GPIOC_OSC32_IN, 0U) |      \
                                     PIN_AFIO_AF(GPIOC_OSC32_OUT, 0U))

/*
 * GPIOD setup:
 *
 * PD0  - ZIO_D67_CAN1_RX           (alternate 9).
 * PD1  - ZIO_D66_CAN1_TX           (alternate 9).
 * PD2  - STATUS_LED1_R             (output pushpull minimum).
 * PD3  - STATUS_LED1_G             (output pushpull minimum).
 * PD4  - STATUS_LED1_B             (output pushpull minimum).
 * PD5  - STATUS_LED2_R             (output pushpull minimum).
 * PD6  - STATUS_LED2_G             (output pushpull minimum).
 * PD7  - STATUS_LED2_B             (output pushpull minimum).
 * PD8  - STATUS_LED3_R             (output pushpull minimum).
 * PD9  - STATUS_LED3_G             (output pushpull minimum).
 * PD10 - STATUS_LED3_B             (output pushpull minimum).
 * PD11 - CS_ENCODER1_n             (output pushpull minimum).
 * PD12 - H_bridge_mot3BP           (input floating).
 * PD13 - I2C_PD_CONTROLLER         (alternate 4).
 * PD14 - H_bridge_mot3CP           (input floating).
 * PD15 - H_bridge_mot3CN           (input floating).
 */
#define VAL_GPIOD_MODER             (PIN_MODE_ALTERNATE(GPIOD_ZIO_D67_CAN1_RX) |\
                                     PIN_MODE_ALTERNATE(GPIOD_ZIO_D66_CAN1_TX) |\
                                     PIN_MODE_OUTPUT(GPIOD_STATUS_LED1_R) | \
                                     PIN_MODE_OUTPUT(GPIOD_STATUS_LED1_G) | \
                                     PIN_MODE_OUTPUT(GPIOD_STATUS_LED1_B) | \
                                     PIN_MODE_OUTPUT(GPIOD_STATUS_LED2_R) | \
                                     PIN_MODE_OUTPUT(GPIOD_STATUS_LED2_G) | \
                                     PIN_MODE_OUTPUT(GPIOD_STATUS_LED2_B) | \
                                     PIN_MODE_OUTPUT(GPIOD_STATUS_LED3_R) | \
                                     PIN_MODE_OUTPUT(GPIOD_STATUS_LED3_G) | \
                                     PIN_MODE_OUTPUT(GPIOD_STATUS_LED3_B) | \
                                     PIN_MODE_OUTPUT(GPIOD_CS_ENCODER1_n) | \
                                     PIN_MODE_INPUT(GPIOD_H_bridge_mot3BP) |\
                                     PIN_MODE_ALTERNATE(GPIOD_I2C_PD_CONTROLLER) |\
                                     PIN_MODE_INPUT(GPIOD_H_bridge_mot3CP) |\
                                     PIN_MODE_INPUT(GPIOD_H_bridge_mot3CN))
#define VAL_GPIOD_OTYPER            (PIN_OTYPE_PUSHPULL(GPIOD_ZIO_D67_CAN1_RX) |\
                                     PIN_OTYPE_PUSHPULL(GPIOD_ZIO_D66_CAN1_TX) |\
                                     PIN_OTYPE_PUSHPULL(GPIOD_STATUS_LED1_R) |\
                                     PIN_OTYPE_PUSHPULL(GPIOD_STATUS_LED1_G) |\
                                     PIN_OTYPE_PUSHPULL(GPIOD_STATUS_LED1_B) |\
                                     PIN_OTYPE_PUSHPULL(GPIOD_STATUS_LED2_R) |\
                                     PIN_OTYPE_PUSHPULL(GPIOD_STATUS_LED2_G) |\
                                     PIN_OTYPE_PUSHPULL(GPIOD_STATUS_LED2_B) |\
                                     PIN_OTYPE_PUSHPULL(GPIOD_STATUS_LED3_R) |\
                                     PIN_OTYPE_PUSHPULL(GPIOD_STATUS_LED3_G) |\
                                     PIN_OTYPE_PUSHPULL(GPIOD_STATUS_LED3_B) |\
                                     PIN_OTYPE_PUSHPULL(GPIOD_CS_ENCODER1_n) |\
                                     PIN_OTYPE_PUSHPULL(GPIOD_H_bridge_mot3BP) |\
                                     PIN_OTYPE_PUSHPULL(GPIOD_I2C_PD_CONTROLLER) |\
                                     PIN_OTYPE_PUSHPULL(GPIOD_H_bridge_mot3CP) |\
                                     PIN_OTYPE_PUSHPULL(GPIOD_H_bridge_mot3CN))
#define VAL_GPIOD_OSPEEDR           (PIN_OSPEED_VERYLOW(GPIOD_ZIO_D67_CAN1_RX) |\
                                     PIN_OSPEED_VERYLOW(GPIOD_ZIO_D66_CAN1_TX) |\
                                     PIN_OSPEED_VERYLOW(GPIOD_STATUS_LED1_R) |\
                                     PIN_OSPEED_VERYLOW(GPIOD_STATUS_LED1_G) |\
                                     PIN_OSPEED_VERYLOW(GPIOD_STATUS_LED1_B) |\
                                     PIN_OSPEED_VERYLOW(GPIOD_STATUS_LED2_R) |\
                                     PIN_OSPEED_VERYLOW(GPIOD_STATUS_LED2_G) |\
                                     PIN_OSPEED_VERYLOW(GPIOD_STATUS_LED2_B) |\
                                     PIN_OSPEED_VERYLOW(GPIOD_STATUS_LED3_R) |\
                                     PIN_OSPEED_VERYLOW(GPIOD_STATUS_LED3_G) |\
                                     PIN_OSPEED_VERYLOW(GPIOD_STATUS_LED3_B) |\
                                     PIN_OSPEED_VERYLOW(GPIOD_CS_ENCODER1_n) |\
                                     PIN_OSPEED_VERYLOW(GPIOD_H_bridge_mot3BP) |\
                                     PIN_OSPEED_VERYLOW(GPIOD_I2C_PD_CONTROLLER) |\
                                     PIN_OSPEED_VERYLOW(GPIOD_H_bridge_mot3CP) |\
                                     PIN_OSPEED_VERYLOW(GPIOD_H_bridge_mot3CN))
#define VAL_GPIOD_PUPDR             (PIN_PUPDR_FLOATING(GPIOD_ZIO_D67_CAN1_RX) |\
                                     PIN_PUPDR_FLOATING(GPIOD_ZIO_D66_CAN1_TX) |\
                                     PIN_PUPDR_FLOATING(GPIOD_STATUS_LED1_R) |\
                                     PIN_PUPDR_FLOATING(GPIOD_STATUS_LED1_G) |\
                                     PIN_PUPDR_FLOATING(GPIOD_STATUS_LED1_B) |\
                                     PIN_PUPDR_FLOATING(GPIOD_STATUS_LED2_R) |\
                                     PIN_PUPDR_FLOATING(GPIOD_STATUS_LED2_G) |\
                                     PIN_PUPDR_FLOATING(GPIOD_STATUS_LED2_B) |\
                                     PIN_PUPDR_FLOATING(GPIOD_STATUS_LED3_R) |\
                                     PIN_PUPDR_FLOATING(GPIOD_STATUS_LED3_G) |\
                                     PIN_PUPDR_FLOATING(GPIOD_STATUS_LED3_B) |\
                                     PIN_PUPDR_FLOATING(GPIOD_CS_ENCODER1_n) |\
                                     PIN_PUPDR_FLOATING(GPIOD_H_bridge_mot3BP) |\
                                     PIN_PUPDR_FLOATING(GPIOD_I2C_PD_CONTROLLER) |\
                                     PIN_PUPDR_FLOATING(GPIOD_H_bridge_mot3CP) |\
                                     PIN_PUPDR_FLOATING(GPIOD_H_bridge_mot3CN))
#define VAL_GPIOD_ODR               (PIN_ODR_LOW(GPIOD_ZIO_D67_CAN1_RX) |   \
                                     PIN_ODR_LOW(GPIOD_ZIO_D66_CAN1_TX) |   \
                                     PIN_ODR_LOW(GPIOD_STATUS_LED1_R) |     \
                                     PIN_ODR_LOW(GPIOD_STATUS_LED1_G) |     \
                                     PIN_ODR_LOW(GPIOD_STATUS_LED1_B) |     \
                                     PIN_ODR_LOW(GPIOD_STATUS_LED2_R) |     \
                                     PIN_ODR_LOW(GPIOD_STATUS_LED2_G) |     \
                                     PIN_ODR_LOW(GPIOD_STATUS_LED2_B) |     \
                                     PIN_ODR_LOW(GPIOD_STATUS_LED3_R) |     \
                                     PIN_ODR_LOW(GPIOD_STATUS_LED3_G) |     \
                                     PIN_ODR_LOW(GPIOD_STATUS_LED3_B) |     \
                                     PIN_ODR_LOW(GPIOD_CS_ENCODER1_n) |     \
                                     PIN_ODR_LOW(GPIOD_H_bridge_mot3BP) |   \
                                     PIN_ODR_LOW(GPIOD_I2C_PD_CONTROLLER) | \
                                     PIN_ODR_LOW(GPIOD_H_bridge_mot3CP) |   \
                                     PIN_ODR_LOW(GPIOD_H_bridge_mot3CN))
#define VAL_GPIOD_AFRL              (PIN_AFIO_AF(GPIOD_ZIO_D67_CAN1_RX, 9U) |\
                                     PIN_AFIO_AF(GPIOD_ZIO_D66_CAN1_TX, 9U) |\
                                     PIN_AFIO_AF(GPIOD_STATUS_LED1_R, 0U) | \
                                     PIN_AFIO_AF(GPIOD_STATUS_LED1_G, 0U) | \
                                     PIN_AFIO_AF(GPIOD_STATUS_LED1_B, 0U) | \
                                     PIN_AFIO_AF(GPIOD_STATUS_LED2_R, 0U) | \
                                     PIN_AFIO_AF(GPIOD_STATUS_LED2_G, 0U) | \
                                     PIN_AFIO_AF(GPIOD_STATUS_LED2_B, 0U))
#define VAL_GPIOD_AFRH              (PIN_AFIO_AF(GPIOD_STATUS_LED3_R, 0U) | \
                                     PIN_AFIO_AF(GPIOD_STATUS_LED3_G, 0U) | \
                                     PIN_AFIO_AF(GPIOD_STATUS_LED3_B, 0U) | \
                                     PIN_AFIO_AF(GPIOD_CS_ENCODER1_n, 0U) | \
                                     PIN_AFIO_AF(GPIOD_H_bridge_mot3BP, 0U) |\
                                     PIN_AFIO_AF(GPIOD_I2C_PD_CONTROLLER, 4U) |\
                                     PIN_AFIO_AF(GPIOD_H_bridge_mot3CP, 0U) |\
                                     PIN_AFIO_AF(GPIOD_H_bridge_mot3CN, 0U))

/*
 * GPIOE setup:
 *
 * PE0  - UART_CMD                  (alternate 8).
 * PE1  - UART_CMD                  (alternate 8).
 * PE2  - EN_DRIVER_4               (output pushpull minimum).
 * PE3  - GPIO4_ESP32               (output pushpull minimum).
 * PE4  - ZIO_D57_SAI1_FS_A         (input pullup).
 * PE5  - SWD_uC_SWCLK              (output pushpull minimum).
 * PE6  - SWD_uC_SWDIO              (output pushpull minimum).
 * PE7  - CS_ENCODER2_n             (output pushpull minimum).
 * PE8  - H_bridge_mot1AN           (alternate 1).
 * PE9  - H_bridge_mot1AP           (input floating).
 * PE10 - H_bridge_mot1BN           (alternate 1).
 * PE11 - H_bridge_mot1BP           (input floating).
 * PE12 - H_bridge_mot1CN           (alternate 1).
 * PE13 - H_bridge_mot1CP           (input floating).
 * PE14 - CS_ENCODER3_n             (output pushpull minimum).
 * PE15 - RESET_uC                  (output pushpull minimum).
 */
#define VAL_GPIOE_MODER             (PIN_MODE_ALTERNATE(GPIOE_UART_CMD) |   \
                                     PIN_MODE_ALTERNATE(GPIOE_UART_CMD) |   \
                                     PIN_MODE_OUTPUT(GPIOE_EN_DRIVER_4) |   \
                                     PIN_MODE_OUTPUT(GPIOE_GPIO4_ESP32) |   \
                                     PIN_MODE_INPUT(GPIOE_ZIO_D57_SAI1_FS_A) |\
                                     PIN_MODE_OUTPUT(GPIOE_SWD_uC_SWCLK) |  \
                                     PIN_MODE_OUTPUT(GPIOE_SWD_uC_SWDIO) |  \
                                     PIN_MODE_OUTPUT(GPIOE_CS_ENCODER2_n) | \
                                     PIN_MODE_ALTERNATE(GPIOE_H_bridge_mot1AN) |\
                                     PIN_MODE_INPUT(GPIOE_H_bridge_mot1AP) |\
                                     PIN_MODE_ALTERNATE(GPIOE_H_bridge_mot1BN) |\
                                     PIN_MODE_INPUT(GPIOE_H_bridge_mot1BP) |\
                                     PIN_MODE_ALTERNATE(GPIOE_H_bridge_mot1CN) |\
                                     PIN_MODE_INPUT(GPIOE_H_bridge_mot1CP) |\
                                     PIN_MODE_OUTPUT(GPIOE_CS_ENCODER3_n) | \
                                     PIN_MODE_OUTPUT(GPIOE_RESET_uC))
#define VAL_GPIOE_OTYPER            (PIN_OTYPE_PUSHPULL(GPIOE_UART_CMD) |   \
                                     PIN_OTYPE_PUSHPULL(GPIOE_UART_CMD) |   \
                                     PIN_OTYPE_PUSHPULL(GPIOE_EN_DRIVER_4) |\
                                     PIN_OTYPE_PUSHPULL(GPIOE_GPIO4_ESP32) |\
                                     PIN_OTYPE_PUSHPULL(GPIOE_ZIO_D57_SAI1_FS_A) |\
                                     PIN_OTYPE_PUSHPULL(GPIOE_SWD_uC_SWCLK) |\
                                     PIN_OTYPE_PUSHPULL(GPIOE_SWD_uC_SWDIO) |\
                                     PIN_OTYPE_PUSHPULL(GPIOE_CS_ENCODER2_n) |\
                                     PIN_OTYPE_PUSHPULL(GPIOE_H_bridge_mot1AN) |\
                                     PIN_OTYPE_PUSHPULL(GPIOE_H_bridge_mot1AP) |\
                                     PIN_OTYPE_PUSHPULL(GPIOE_H_bridge_mot1BN) |\
                                     PIN_OTYPE_PUSHPULL(GPIOE_H_bridge_mot1BP) |\
                                     PIN_OTYPE_PUSHPULL(GPIOE_H_bridge_mot1CN) |\
                                     PIN_OTYPE_PUSHPULL(GPIOE_H_bridge_mot1CP) |\
                                     PIN_OTYPE_PUSHPULL(GPIOE_CS_ENCODER3_n) |\
                                     PIN_OTYPE_PUSHPULL(GPIOE_RESET_uC))
#define VAL_GPIOE_OSPEEDR           (PIN_OSPEED_VERYLOW(GPIOE_UART_CMD) |   \
                                     PIN_OSPEED_VERYLOW(GPIOE_UART_CMD) |   \
                                     PIN_OSPEED_VERYLOW(GPIOE_EN_DRIVER_4) |\
                                     PIN_OSPEED_VERYLOW(GPIOE_GPIO4_ESP32) |\
                                     PIN_OSPEED_HIGH(GPIOE_ZIO_D57_SAI1_FS_A) |\
                                     PIN_OSPEED_VERYLOW(GPIOE_SWD_uC_SWCLK) |\
                                     PIN_OSPEED_VERYLOW(GPIOE_SWD_uC_SWDIO) |\
                                     PIN_OSPEED_VERYLOW(GPIOE_CS_ENCODER2_n) |\
                                     PIN_OSPEED_VERYLOW(GPIOE_H_bridge_mot1AN) |\
                                     PIN_OSPEED_VERYLOW(GPIOE_H_bridge_mot1AP) |\
                                     PIN_OSPEED_VERYLOW(GPIOE_H_bridge_mot1BN) |\
                                     PIN_OSPEED_VERYLOW(GPIOE_H_bridge_mot1BP) |\
                                     PIN_OSPEED_VERYLOW(GPIOE_H_bridge_mot1CN) |\
                                     PIN_OSPEED_VERYLOW(GPIOE_H_bridge_mot1CP) |\
                                     PIN_OSPEED_VERYLOW(GPIOE_CS_ENCODER3_n) |\
                                     PIN_OSPEED_VERYLOW(GPIOE_RESET_uC))
#define VAL_GPIOE_PUPDR             (PIN_PUPDR_FLOATING(GPIOE_UART_CMD) |   \
                                     PIN_PUPDR_FLOATING(GPIOE_UART_CMD) |   \
                                     PIN_PUPDR_FLOATING(GPIOE_EN_DRIVER_4) |\
                                     PIN_PUPDR_FLOATING(GPIOE_GPIO4_ESP32) |\
                                     PIN_PUPDR_PULLUP(GPIOE_ZIO_D57_SAI1_FS_A) |\
                                     PIN_PUPDR_FLOATING(GPIOE_SWD_uC_SWCLK) |\
                                     PIN_PUPDR_FLOATING(GPIOE_SWD_uC_SWDIO) |\
                                     PIN_PUPDR_FLOATING(GPIOE_CS_ENCODER2_n) |\
                                     PIN_PUPDR_FLOATING(GPIOE_H_bridge_mot1AN) |\
                                     PIN_PUPDR_FLOATING(GPIOE_H_bridge_mot1AP) |\
                                     PIN_PUPDR_FLOATING(GPIOE_H_bridge_mot1BN) |\
                                     PIN_PUPDR_FLOATING(GPIOE_H_bridge_mot1BP) |\
                                     PIN_PUPDR_FLOATING(GPIOE_H_bridge_mot1CN) |\
                                     PIN_PUPDR_FLOATING(GPIOE_H_bridge_mot1CP) |\
                                     PIN_PUPDR_FLOATING(GPIOE_CS_ENCODER3_n) |\
                                     PIN_PUPDR_FLOATING(GPIOE_RESET_uC))
#define VAL_GPIOE_ODR               (PIN_ODR_LOW(GPIOE_UART_CMD) |          \
                                     PIN_ODR_LOW(GPIOE_UART_CMD) |          \
                                     PIN_ODR_LOW(GPIOE_EN_DRIVER_4) |       \
                                     PIN_ODR_LOW(GPIOE_GPIO4_ESP32) |       \
                                     PIN_ODR_HIGH(GPIOE_ZIO_D57_SAI1_FS_A) |\
                                     PIN_ODR_LOW(GPIOE_SWD_uC_SWCLK) |      \
                                     PIN_ODR_LOW(GPIOE_SWD_uC_SWDIO) |      \
                                     PIN_ODR_LOW(GPIOE_CS_ENCODER2_n) |     \
                                     PIN_ODR_LOW(GPIOE_H_bridge_mot1AN) |   \
                                     PIN_ODR_LOW(GPIOE_H_bridge_mot1AP) |   \
                                     PIN_ODR_LOW(GPIOE_H_bridge_mot1BN) |   \
                                     PIN_ODR_LOW(GPIOE_H_bridge_mot1BP) |   \
                                     PIN_ODR_LOW(GPIOE_H_bridge_mot1CN) |   \
                                     PIN_ODR_LOW(GPIOE_H_bridge_mot1CP) |   \
                                     PIN_ODR_LOW(GPIOE_CS_ENCODER3_n) |     \
                                     PIN_ODR_LOW(GPIOE_RESET_uC))
#define VAL_GPIOE_AFRL              (PIN_AFIO_AF(GPIOE_UART_CMD, 8U) |      \
                                     PIN_AFIO_AF(GPIOE_UART_CMD, 8U) |      \
                                     PIN_AFIO_AF(GPIOE_EN_DRIVER_4, 0U) |   \
                                     PIN_AFIO_AF(GPIOE_GPIO4_ESP32, 0U) |   \
                                     PIN_AFIO_AF(GPIOE_ZIO_D57_SAI1_FS_A, 0U) |\
                                     PIN_AFIO_AF(GPIOE_SWD_uC_SWCLK, 0U) |  \
                                     PIN_AFIO_AF(GPIOE_SWD_uC_SWDIO, 0U) |  \
                                     PIN_AFIO_AF(GPIOE_CS_ENCODER2_n, 0U))
#define VAL_GPIOE_AFRH              (PIN_AFIO_AF(GPIOE_H_bridge_mot1AN, 1U) |\
                                     PIN_AFIO_AF(GPIOE_H_bridge_mot1AP, 0U) |\
                                     PIN_AFIO_AF(GPIOE_H_bridge_mot1BN, 1U) |\
                                     PIN_AFIO_AF(GPIOE_H_bridge_mot1BP, 0U) |\
                                     PIN_AFIO_AF(GPIOE_H_bridge_mot1CN, 1U) |\
                                     PIN_AFIO_AF(GPIOE_H_bridge_mot1CP, 0U) |\
                                     PIN_AFIO_AF(GPIOE_CS_ENCODER3_n, 0U) | \
                                     PIN_AFIO_AF(GPIOE_RESET_uC, 0U))

/*
 * GPIOF setup:
 *
 * PF0  - GPIO13_ESP32              (output pushpull minimum).
 * PF1  - HUB_CONNECT               (output pushpull minimum).
 * PF2  - EN_DRIVER_2               (output pushpull minimum).
 * PF3  - Brushless_sense_mot3C     (analog).
 * PF4  - Brushless_sense_mot1B     (analog).
 * PF5  - Brushless_sense_mot1C     (analog).
 * PF6  - Brushless_sense_mot3A     (analog).
 * PF7  - Brushless_sense_mot1A     (analog).
 * PF8  - Brushless_sense_mot3B     (analog).
 * PF9  - Brushless_sense_mot2A     (analog).
 * PF10 - Brushless_sense_mot2B     (analog).
 * PF11 - PRIORITY_TO_VBUS          (output pushpull minimum).
 * PF12 - ARD_D8                    (input pullup).
 * PF13 - CS_ENCODER4_n             (output pushpull minimum).
 * PF14 - I2C_PD_CONTROLLER         (alternate 4).
 * PF15 - EN_DRIVER_1               (output pushpull minimum).
 */
#define VAL_GPIOF_MODER             (PIN_MODE_OUTPUT(GPIOF_GPIO13_ESP32) |  \
                                     PIN_MODE_OUTPUT(GPIOF_HUB_CONNECT) |   \
                                     PIN_MODE_OUTPUT(GPIOF_EN_DRIVER_2) |   \
                                     PIN_MODE_ANALOG(GPIOF_Brushless_sense_mot3C) |\
                                     PIN_MODE_ANALOG(GPIOF_Brushless_sense_mot1B) |\
                                     PIN_MODE_ANALOG(GPIOF_Brushless_sense_mot1C) |\
                                     PIN_MODE_ANALOG(GPIOF_Brushless_sense_mot3A) |\
                                     PIN_MODE_ANALOG(GPIOF_Brushless_sense_mot1A) |\
                                     PIN_MODE_ANALOG(GPIOF_Brushless_sense_mot3B) |\
                                     PIN_MODE_ANALOG(GPIOF_Brushless_sense_mot2A) |\
                                     PIN_MODE_ANALOG(GPIOF_Brushless_sense_mot2B) |\
                                     PIN_MODE_OUTPUT(GPIOF_PRIORITY_TO_VBUS) |\
                                     PIN_MODE_INPUT(GPIOF_ARD_D8) |         \
                                     PIN_MODE_OUTPUT(GPIOF_CS_ENCODER4_n) | \
                                     PIN_MODE_ALTERNATE(GPIOF_I2C_PD_CONTROLLER) |\
                                     PIN_MODE_OUTPUT(GPIOF_EN_DRIVER_1))
#define VAL_GPIOF_OTYPER            (PIN_OTYPE_PUSHPULL(GPIOF_GPIO13_ESP32) |\
                                     PIN_OTYPE_PUSHPULL(GPIOF_HUB_CONNECT) |\
                                     PIN_OTYPE_PUSHPULL(GPIOF_EN_DRIVER_2) |\
                                     PIN_OTYPE_PUSHPULL(GPIOF_Brushless_sense_mot3C) |\
                                     PIN_OTYPE_PUSHPULL(GPIOF_Brushless_sense_mot1B) |\
                                     PIN_OTYPE_PUSHPULL(GPIOF_Brushless_sense_mot1C) |\
                                     PIN_OTYPE_PUSHPULL(GPIOF_Brushless_sense_mot3A) |\
                                     PIN_OTYPE_PUSHPULL(GPIOF_Brushless_sense_mot1A) |\
                                     PIN_OTYPE_PUSHPULL(GPIOF_Brushless_sense_mot3B) |\
                                     PIN_OTYPE_PUSHPULL(GPIOF_Brushless_sense_mot2A) |\
                                     PIN_OTYPE_PUSHPULL(GPIOF_Brushless_sense_mot2B) |\
                                     PIN_OTYPE_PUSHPULL(GPIOF_PRIORITY_TO_VBUS) |\
                                     PIN_OTYPE_PUSHPULL(GPIOF_ARD_D8) |     \
                                     PIN_OTYPE_PUSHPULL(GPIOF_CS_ENCODER4_n) |\
                                     PIN_OTYPE_PUSHPULL(GPIOF_I2C_PD_CONTROLLER) |\
                                     PIN_OTYPE_PUSHPULL(GPIOF_EN_DRIVER_1))
#define VAL_GPIOF_OSPEEDR           (PIN_OSPEED_VERYLOW(GPIOF_GPIO13_ESP32) |\
                                     PIN_OSPEED_VERYLOW(GPIOF_HUB_CONNECT) |\
                                     PIN_OSPEED_VERYLOW(GPIOF_EN_DRIVER_2) |\
                                     PIN_OSPEED_VERYLOW(GPIOF_Brushless_sense_mot3C) |\
                                     PIN_OSPEED_VERYLOW(GPIOF_Brushless_sense_mot1B) |\
                                     PIN_OSPEED_VERYLOW(GPIOF_Brushless_sense_mot1C) |\
                                     PIN_OSPEED_VERYLOW(GPIOF_Brushless_sense_mot3A) |\
                                     PIN_OSPEED_VERYLOW(GPIOF_Brushless_sense_mot1A) |\
                                     PIN_OSPEED_VERYLOW(GPIOF_Brushless_sense_mot3B) |\
                                     PIN_OSPEED_VERYLOW(GPIOF_Brushless_sense_mot2A) |\
                                     PIN_OSPEED_VERYLOW(GPIOF_Brushless_sense_mot2B) |\
                                     PIN_OSPEED_VERYLOW(GPIOF_PRIORITY_TO_VBUS) |\
                                     PIN_OSPEED_VERYLOW(GPIOF_ARD_D8) |     \
                                     PIN_OSPEED_VERYLOW(GPIOF_CS_ENCODER4_n) |\
                                     PIN_OSPEED_VERYLOW(GPIOF_I2C_PD_CONTROLLER) |\
                                     PIN_OSPEED_VERYLOW(GPIOF_EN_DRIVER_1))
#define VAL_GPIOF_PUPDR             (PIN_PUPDR_FLOATING(GPIOF_GPIO13_ESP32) |\
                                     PIN_PUPDR_FLOATING(GPIOF_HUB_CONNECT) |\
                                     PIN_PUPDR_FLOATING(GPIOF_EN_DRIVER_2) |\
                                     PIN_PUPDR_FLOATING(GPIOF_Brushless_sense_mot3C) |\
                                     PIN_PUPDR_FLOATING(GPIOF_Brushless_sense_mot1B) |\
                                     PIN_PUPDR_FLOATING(GPIOF_Brushless_sense_mot1C) |\
                                     PIN_PUPDR_FLOATING(GPIOF_Brushless_sense_mot3A) |\
                                     PIN_PUPDR_FLOATING(GPIOF_Brushless_sense_mot1A) |\
                                     PIN_PUPDR_FLOATING(GPIOF_Brushless_sense_mot3B) |\
                                     PIN_PUPDR_FLOATING(GPIOF_Brushless_sense_mot2A) |\
                                     PIN_PUPDR_FLOATING(GPIOF_Brushless_sense_mot2B) |\
                                     PIN_PUPDR_FLOATING(GPIOF_PRIORITY_TO_VBUS) |\
                                     PIN_PUPDR_PULLUP(GPIOF_ARD_D8) |       \
                                     PIN_PUPDR_FLOATING(GPIOF_CS_ENCODER4_n) |\
                                     PIN_PUPDR_FLOATING(GPIOF_I2C_PD_CONTROLLER) |\
                                     PIN_PUPDR_FLOATING(GPIOF_EN_DRIVER_1))
#define VAL_GPIOF_ODR               (PIN_ODR_LOW(GPIOF_GPIO13_ESP32) |      \
                                     PIN_ODR_LOW(GPIOF_HUB_CONNECT) |       \
                                     PIN_ODR_LOW(GPIOF_EN_DRIVER_2) |       \
                                     PIN_ODR_LOW(GPIOF_Brushless_sense_mot3C) |\
                                     PIN_ODR_LOW(GPIOF_Brushless_sense_mot1B) |\
                                     PIN_ODR_LOW(GPIOF_Brushless_sense_mot1C) |\
                                     PIN_ODR_LOW(GPIOF_Brushless_sense_mot3A) |\
                                     PIN_ODR_LOW(GPIOF_Brushless_sense_mot1A) |\
                                     PIN_ODR_LOW(GPIOF_Brushless_sense_mot3B) |\
                                     PIN_ODR_LOW(GPIOF_Brushless_sense_mot2A) |\
                                     PIN_ODR_LOW(GPIOF_Brushless_sense_mot2B) |\
                                     PIN_ODR_LOW(GPIOF_PRIORITY_TO_VBUS) |  \
                                     PIN_ODR_HIGH(GPIOF_ARD_D8) |           \
                                     PIN_ODR_LOW(GPIOF_CS_ENCODER4_n) |     \
                                     PIN_ODR_LOW(GPIOF_I2C_PD_CONTROLLER) | \
                                     PIN_ODR_LOW(GPIOF_EN_DRIVER_1))
#define VAL_GPIOF_AFRL              (PIN_AFIO_AF(GPIOF_GPIO13_ESP32, 0U) |  \
                                     PIN_AFIO_AF(GPIOF_HUB_CONNECT, 0U) |   \
                                     PIN_AFIO_AF(GPIOF_EN_DRIVER_2, 0U) |   \
                                     PIN_AFIO_AF(GPIOF_Brushless_sense_mot3C, 0U) |\
                                     PIN_AFIO_AF(GPIOF_Brushless_sense_mot1B, 0U) |\
                                     PIN_AFIO_AF(GPIOF_Brushless_sense_mot1C, 0U) |\
                                     PIN_AFIO_AF(GPIOF_Brushless_sense_mot3A, 0U) |\
                                     PIN_AFIO_AF(GPIOF_Brushless_sense_mot1A, 0U))
#define VAL_GPIOF_AFRH              (PIN_AFIO_AF(GPIOF_Brushless_sense_mot3B, 0U) |\
                                     PIN_AFIO_AF(GPIOF_Brushless_sense_mot2A, 0U) |\
                                     PIN_AFIO_AF(GPIOF_Brushless_sense_mot2B, 0U) |\
                                     PIN_AFIO_AF(GPIOF_PRIORITY_TO_VBUS, 0U) |\
                                     PIN_AFIO_AF(GPIOF_ARD_D8, 0U) |        \
                                     PIN_AFIO_AF(GPIOF_CS_ENCODER4_n, 0U) | \
                                     PIN_AFIO_AF(GPIOF_I2C_PD_CONTROLLER, 4U) |\
                                     PIN_AFIO_AF(GPIOF_EN_DRIVER_1, 0U))

/*
 * GPIOG setup:
 *
 * PG0  - FAULT_DRIVER_1_n          (input floating).
 * PG1  - FAULT_DRIVER_2_n          (input floating).
 * PG2  - FAULT_DRIVER_4_n          (input floating).
 * PG3  - FAULT_DRIVER_3_n          (input floating).
 * PG4  - VBUS_HOST                 (input floating).
 * PG5  - INT_PD_CTRL_n             (input floating).
 * PG6  - VBUS_DEVICES              (output pushpull minimum).
 * PG7  - USB_GPIO_IN               (input pullup).
 * PG8  - BYPASS_HUB_n              (output pushpull minimum).
 * PG9  - EN_EXTENSION_BOTTOM       (output pushpull minimum).
 * PG10 - PWR_ON_BTN_STATE_n        (input floating).
 * PG11 - EN_DRIVER_3               (output pushpull minimum).
 * PG12 - ENCODERS_GATE_DRIVERS     (alternate 5).
 * PG13 - ENCODERS_GATE_DRIVERS     (alternate 5).
 * PG14 - ENCODERS_GATE_DRIVERS     (alternate 5).
 * PG15 - PIN15                     (input pullup).
 */
#define VAL_GPIOG_MODER             (PIN_MODE_INPUT(GPIOG_FAULT_DRIVER_1_n) |\
                                     PIN_MODE_INPUT(GPIOG_FAULT_DRIVER_2_n) |\
                                     PIN_MODE_INPUT(GPIOG_FAULT_DRIVER_4_n) |\
                                     PIN_MODE_INPUT(GPIOG_FAULT_DRIVER_3_n) |\
                                     PIN_MODE_INPUT(GPIOG_VBUS_HOST) |      \
                                     PIN_MODE_INPUT(GPIOG_INT_PD_CTRL_n) |  \
                                     PIN_MODE_OUTPUT(GPIOG_VBUS_DEVICES) |  \
                                     PIN_MODE_INPUT(GPIOG_USB_GPIO_IN) |    \
                                     PIN_MODE_OUTPUT(GPIOG_BYPASS_HUB_n) |  \
                                     PIN_MODE_OUTPUT(GPIOG_EN_EXTENSION_BOTTOM) |\
                                     PIN_MODE_INPUT(GPIOG_PWR_ON_BTN_STATE_n) |\
                                     PIN_MODE_OUTPUT(GPIOG_EN_DRIVER_3) |   \
                                     PIN_MODE_ALTERNATE(GPIOG_ENCODERS_GATE_DRIVERS) |\
                                     PIN_MODE_ALTERNATE(GPIOG_ENCODERS_GATE_DRIVERS) |\
                                     PIN_MODE_ALTERNATE(GPIOG_ENCODERS_GATE_DRIVERS) |\
                                     PIN_MODE_INPUT(GPIOG_PIN15))
#define VAL_GPIOG_OTYPER            (PIN_OTYPE_PUSHPULL(GPIOG_FAULT_DRIVER_1_n) |\
                                     PIN_OTYPE_PUSHPULL(GPIOG_FAULT_DRIVER_2_n) |\
                                     PIN_OTYPE_PUSHPULL(GPIOG_FAULT_DRIVER_4_n) |\
                                     PIN_OTYPE_PUSHPULL(GPIOG_FAULT_DRIVER_3_n) |\
                                     PIN_OTYPE_PUSHPULL(GPIOG_VBUS_HOST) |  \
                                     PIN_OTYPE_PUSHPULL(GPIOG_INT_PD_CTRL_n) |\
                                     PIN_OTYPE_PUSHPULL(GPIOG_VBUS_DEVICES) |\
                                     PIN_OTYPE_PUSHPULL(GPIOG_USB_GPIO_IN) |\
                                     PIN_OTYPE_PUSHPULL(GPIOG_BYPASS_HUB_n) |\
                                     PIN_OTYPE_PUSHPULL(GPIOG_EN_EXTENSION_BOTTOM) |\
                                     PIN_OTYPE_PUSHPULL(GPIOG_PWR_ON_BTN_STATE_n) |\
                                     PIN_OTYPE_PUSHPULL(GPIOG_EN_DRIVER_3) |\
                                     PIN_OTYPE_PUSHPULL(GPIOG_ENCODERS_GATE_DRIVERS) |\
                                     PIN_OTYPE_PUSHPULL(GPIOG_ENCODERS_GATE_DRIVERS) |\
                                     PIN_OTYPE_PUSHPULL(GPIOG_ENCODERS_GATE_DRIVERS) |\
                                     PIN_OTYPE_PUSHPULL(GPIOG_PIN15))
#define VAL_GPIOG_OSPEEDR           (PIN_OSPEED_VERYLOW(GPIOG_FAULT_DRIVER_1_n) |\
                                     PIN_OSPEED_VERYLOW(GPIOG_FAULT_DRIVER_2_n) |\
                                     PIN_OSPEED_VERYLOW(GPIOG_FAULT_DRIVER_4_n) |\
                                     PIN_OSPEED_VERYLOW(GPIOG_FAULT_DRIVER_3_n) |\
                                     PIN_OSPEED_VERYLOW(GPIOG_VBUS_HOST) |  \
                                     PIN_OSPEED_VERYLOW(GPIOG_INT_PD_CTRL_n) |\
                                     PIN_OSPEED_VERYLOW(GPIOG_VBUS_DEVICES) |\
                                     PIN_OSPEED_HIGH(GPIOG_USB_GPIO_IN) |   \
                                     PIN_OSPEED_VERYLOW(GPIOG_BYPASS_HUB_n) |\
                                     PIN_OSPEED_VERYLOW(GPIOG_EN_EXTENSION_BOTTOM) |\
                                     PIN_OSPEED_VERYLOW(GPIOG_PWR_ON_BTN_STATE_n) |\
                                     PIN_OSPEED_VERYLOW(GPIOG_EN_DRIVER_3) |\
                                     PIN_OSPEED_VERYLOW(GPIOG_ENCODERS_GATE_DRIVERS) |\
                                     PIN_OSPEED_VERYLOW(GPIOG_ENCODERS_GATE_DRIVERS) |\
                                     PIN_OSPEED_VERYLOW(GPIOG_ENCODERS_GATE_DRIVERS) |\
                                     PIN_OSPEED_VERYLOW(GPIOG_PIN15))
#define VAL_GPIOG_PUPDR             (PIN_PUPDR_FLOATING(GPIOG_FAULT_DRIVER_1_n) |\
                                     PIN_PUPDR_FLOATING(GPIOG_FAULT_DRIVER_2_n) |\
                                     PIN_PUPDR_FLOATING(GPIOG_FAULT_DRIVER_4_n) |\
                                     PIN_PUPDR_FLOATING(GPIOG_FAULT_DRIVER_3_n) |\
                                     PIN_PUPDR_FLOATING(GPIOG_VBUS_HOST) |  \
                                     PIN_PUPDR_FLOATING(GPIOG_INT_PD_CTRL_n) |\
                                     PIN_PUPDR_FLOATING(GPIOG_VBUS_DEVICES) |\
                                     PIN_PUPDR_PULLUP(GPIOG_USB_GPIO_IN) |  \
                                     PIN_PUPDR_FLOATING(GPIOG_BYPASS_HUB_n) |\
                                     PIN_PUPDR_FLOATING(GPIOG_EN_EXTENSION_BOTTOM) |\
                                     PIN_PUPDR_FLOATING(GPIOG_PWR_ON_BTN_STATE_n) |\
                                     PIN_PUPDR_FLOATING(GPIOG_EN_DRIVER_3) |\
                                     PIN_PUPDR_FLOATING(GPIOG_ENCODERS_GATE_DRIVERS) |\
                                     PIN_PUPDR_FLOATING(GPIOG_ENCODERS_GATE_DRIVERS) |\
                                     PIN_PUPDR_FLOATING(GPIOG_ENCODERS_GATE_DRIVERS) |\
                                     PIN_PUPDR_PULLUP(GPIOG_PIN15))
#define VAL_GPIOG_ODR               (PIN_ODR_LOW(GPIOG_FAULT_DRIVER_1_n) |  \
                                     PIN_ODR_LOW(GPIOG_FAULT_DRIVER_2_n) |  \
                                     PIN_ODR_LOW(GPIOG_FAULT_DRIVER_4_n) |  \
                                     PIN_ODR_LOW(GPIOG_FAULT_DRIVER_3_n) |  \
                                     PIN_ODR_LOW(GPIOG_VBUS_HOST) |         \
                                     PIN_ODR_LOW(GPIOG_INT_PD_CTRL_n) |     \
                                     PIN_ODR_LOW(GPIOG_VBUS_DEVICES) |      \
                                     PIN_ODR_HIGH(GPIOG_USB_GPIO_IN) |      \
                                     PIN_ODR_LOW(GPIOG_BYPASS_HUB_n) |      \
                                     PIN_ODR_LOW(GPIOG_EN_EXTENSION_BOTTOM) |\
                                     PIN_ODR_LOW(GPIOG_PWR_ON_BTN_STATE_n) |\
                                     PIN_ODR_LOW(GPIOG_EN_DRIVER_3) |       \
                                     PIN_ODR_LOW(GPIOG_ENCODERS_GATE_DRIVERS) |\
                                     PIN_ODR_LOW(GPIOG_ENCODERS_GATE_DRIVERS) |\
                                     PIN_ODR_LOW(GPIOG_ENCODERS_GATE_DRIVERS) |\
                                     PIN_ODR_HIGH(GPIOG_PIN15))
#define VAL_GPIOG_AFRL              (PIN_AFIO_AF(GPIOG_FAULT_DRIVER_1_n, 0U) |\
                                     PIN_AFIO_AF(GPIOG_FAULT_DRIVER_2_n, 0U) |\
                                     PIN_AFIO_AF(GPIOG_FAULT_DRIVER_4_n, 0U) |\
                                     PIN_AFIO_AF(GPIOG_FAULT_DRIVER_3_n, 0U) |\
                                     PIN_AFIO_AF(GPIOG_VBUS_HOST, 0U) |     \
                                     PIN_AFIO_AF(GPIOG_INT_PD_CTRL_n, 0U) | \
                                     PIN_AFIO_AF(GPIOG_VBUS_DEVICES, 0U) |  \
                                     PIN_AFIO_AF(GPIOG_USB_GPIO_IN, 0U))
#define VAL_GPIOG_AFRH              (PIN_AFIO_AF(GPIOG_BYPASS_HUB_n, 0U) |  \
                                     PIN_AFIO_AF(GPIOG_EN_EXTENSION_BOTTOM, 0U) |\
                                     PIN_AFIO_AF(GPIOG_PWR_ON_BTN_STATE_n, 0U) |\
                                     PIN_AFIO_AF(GPIOG_EN_DRIVER_3, 0U) |   \
                                     PIN_AFIO_AF(GPIOG_ENCODERS_GATE_DRIVERS, 5U) |\
                                     PIN_AFIO_AF(GPIOG_ENCODERS_GATE_DRIVERS, 5U) |\
                                     PIN_AFIO_AF(GPIOG_ENCODERS_GATE_DRIVERS, 5U) |\
                                     PIN_AFIO_AF(GPIOG_PIN15, 0U))

/*
 * GPIOH setup:
 *
 * PH0  - OSC_IN                    (input floating).
 * PH1  - OSC_OUT                   (input floating).
 * PH2  - PIN2                      (input pullup).
 * PH3  - PIN3                      (input pullup).
 * PH4  - PIN4                      (input pullup).
 * PH5  - PIN5                      (input pullup).
 * PH6  - PIN6                      (input pullup).
 * PH7  - PIN7                      (input pullup).
 * PH8  - PIN8                      (input pullup).
 * PH9  - PIN9                      (input pullup).
 * PH10 - PIN10                     (input pullup).
 * PH11 - PIN11                     (input pullup).
 * PH12 - PIN12                     (input pullup).
 * PH13 - PIN13                     (input pullup).
 * PH14 - PIN14                     (input pullup).
 * PH15 - PIN15                     (input pullup).
 */
#define VAL_GPIOH_MODER             (PIN_MODE_INPUT(GPIOH_OSC_IN) |         \
                                     PIN_MODE_INPUT(GPIOH_OSC_OUT) |        \
                                     PIN_MODE_INPUT(GPIOH_PIN2) |           \
                                     PIN_MODE_INPUT(GPIOH_PIN3) |           \
                                     PIN_MODE_INPUT(GPIOH_PIN4) |           \
                                     PIN_MODE_INPUT(GPIOH_PIN5) |           \
                                     PIN_MODE_INPUT(GPIOH_PIN6) |           \
                                     PIN_MODE_INPUT(GPIOH_PIN7) |           \
                                     PIN_MODE_INPUT(GPIOH_PIN8) |           \
                                     PIN_MODE_INPUT(GPIOH_PIN9) |           \
                                     PIN_MODE_INPUT(GPIOH_PIN10) |          \
                                     PIN_MODE_INPUT(GPIOH_PIN11) |          \
                                     PIN_MODE_INPUT(GPIOH_PIN12) |          \
                                     PIN_MODE_INPUT(GPIOH_PIN13) |          \
                                     PIN_MODE_INPUT(GPIOH_PIN14) |          \
                                     PIN_MODE_INPUT(GPIOH_PIN15))
#define VAL_GPIOH_OTYPER            (PIN_OTYPE_PUSHPULL(GPIOH_OSC_IN) |     \
                                     PIN_OTYPE_PUSHPULL(GPIOH_OSC_OUT) |    \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PIN2) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PIN3) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PIN4) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PIN5) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PIN6) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PIN7) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PIN8) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PIN9) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PIN10) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PIN11) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PIN12) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PIN13) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PIN14) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOH_PIN15))
#define VAL_GPIOH_OSPEEDR           (PIN_OSPEED_HIGH(GPIOH_OSC_IN) |        \
                                     PIN_OSPEED_HIGH(GPIOH_OSC_OUT) |       \
                                     PIN_OSPEED_VERYLOW(GPIOH_PIN2) |       \
                                     PIN_OSPEED_VERYLOW(GPIOH_PIN3) |       \
                                     PIN_OSPEED_VERYLOW(GPIOH_PIN4) |       \
                                     PIN_OSPEED_VERYLOW(GPIOH_PIN5) |       \
                                     PIN_OSPEED_VERYLOW(GPIOH_PIN6) |       \
                                     PIN_OSPEED_VERYLOW(GPIOH_PIN7) |       \
                                     PIN_OSPEED_VERYLOW(GPIOH_PIN8) |       \
                                     PIN_OSPEED_VERYLOW(GPIOH_PIN9) |       \
                                     PIN_OSPEED_VERYLOW(GPIOH_PIN10) |      \
                                     PIN_OSPEED_VERYLOW(GPIOH_PIN11) |      \
                                     PIN_OSPEED_VERYLOW(GPIOH_PIN12) |      \
                                     PIN_OSPEED_VERYLOW(GPIOH_PIN13) |      \
                                     PIN_OSPEED_VERYLOW(GPIOH_PIN14) |      \
                                     PIN_OSPEED_VERYLOW(GPIOH_PIN15))
#define VAL_GPIOH_PUPDR             (PIN_PUPDR_FLOATING(GPIOH_OSC_IN) |     \
                                     PIN_PUPDR_FLOATING(GPIOH_OSC_OUT) |    \
                                     PIN_PUPDR_PULLUP(GPIOH_PIN2) |         \
                                     PIN_PUPDR_PULLUP(GPIOH_PIN3) |         \
                                     PIN_PUPDR_PULLUP(GPIOH_PIN4) |         \
                                     PIN_PUPDR_PULLUP(GPIOH_PIN5) |         \
                                     PIN_PUPDR_PULLUP(GPIOH_PIN6) |         \
                                     PIN_PUPDR_PULLUP(GPIOH_PIN7) |         \
                                     PIN_PUPDR_PULLUP(GPIOH_PIN8) |         \
                                     PIN_PUPDR_PULLUP(GPIOH_PIN9) |         \
                                     PIN_PUPDR_PULLUP(GPIOH_PIN10) |        \
                                     PIN_PUPDR_PULLUP(GPIOH_PIN11) |        \
                                     PIN_PUPDR_PULLUP(GPIOH_PIN12) |        \
                                     PIN_PUPDR_PULLUP(GPIOH_PIN13) |        \
                                     PIN_PUPDR_PULLUP(GPIOH_PIN14) |        \
                                     PIN_PUPDR_PULLUP(GPIOH_PIN15))
#define VAL_GPIOH_ODR               (PIN_ODR_HIGH(GPIOH_OSC_IN) |           \
                                     PIN_ODR_HIGH(GPIOH_OSC_OUT) |          \
                                     PIN_ODR_HIGH(GPIOH_PIN2) |             \
                                     PIN_ODR_HIGH(GPIOH_PIN3) |             \
                                     PIN_ODR_HIGH(GPIOH_PIN4) |             \
                                     PIN_ODR_HIGH(GPIOH_PIN5) |             \
                                     PIN_ODR_HIGH(GPIOH_PIN6) |             \
                                     PIN_ODR_HIGH(GPIOH_PIN7) |             \
                                     PIN_ODR_HIGH(GPIOH_PIN8) |             \
                                     PIN_ODR_HIGH(GPIOH_PIN9) |             \
                                     PIN_ODR_HIGH(GPIOH_PIN10) |            \
                                     PIN_ODR_HIGH(GPIOH_PIN11) |            \
                                     PIN_ODR_HIGH(GPIOH_PIN12) |            \
                                     PIN_ODR_HIGH(GPIOH_PIN13) |            \
                                     PIN_ODR_HIGH(GPIOH_PIN14) |            \
                                     PIN_ODR_HIGH(GPIOH_PIN15))
#define VAL_GPIOH_AFRL              (PIN_AFIO_AF(GPIOH_OSC_IN, 0U) |        \
                                     PIN_AFIO_AF(GPIOH_OSC_OUT, 0U) |       \
                                     PIN_AFIO_AF(GPIOH_PIN2, 0U) |          \
                                     PIN_AFIO_AF(GPIOH_PIN3, 0U) |          \
                                     PIN_AFIO_AF(GPIOH_PIN4, 0U) |          \
                                     PIN_AFIO_AF(GPIOH_PIN5, 0U) |          \
                                     PIN_AFIO_AF(GPIOH_PIN6, 0U) |          \
                                     PIN_AFIO_AF(GPIOH_PIN7, 0U))
#define VAL_GPIOH_AFRH              (PIN_AFIO_AF(GPIOH_PIN8, 0U) |          \
                                     PIN_AFIO_AF(GPIOH_PIN9, 0U) |          \
                                     PIN_AFIO_AF(GPIOH_PIN10, 0U) |         \
                                     PIN_AFIO_AF(GPIOH_PIN11, 0U) |         \
                                     PIN_AFIO_AF(GPIOH_PIN12, 0U) |         \
                                     PIN_AFIO_AF(GPIOH_PIN13, 0U) |         \
                                     PIN_AFIO_AF(GPIOH_PIN14, 0U) |         \
                                     PIN_AFIO_AF(GPIOH_PIN15, 0U))

/*===========================================================================*/
/* External declarations.                                                    */
/*===========================================================================*/

#if !defined(_FROM_ASM_)
#ifdef __cplusplus
extern "C" {
#endif
  void boardInit(void);
#ifdef __cplusplus
}
#endif
#endif /* _FROM_ASM_ */

#endif /* BOARD_H */
