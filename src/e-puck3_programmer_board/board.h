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
#define GPIOA_VBUS_SENSE            0U
#define GPIOA_BRUSHLESS_SENSE_MOT4A 1U
#define GPIOA_BRUSHLESS_SENSE_MOT4B 2U
#define GPIOA_BRUSHLESS_SENSE_MOT4C 3U
#define GPIOA_CURRENT_SENSE_MOT2A   4U
#define GPIOA_CURRENT_SENSE_MOT2B   5U
#define GPIOA_CURRENT_SENSE_MOT3A   6U
#define GPIOA_H_BRIDGE_MOT4AN       7U
#define GPIOA_RESET_HUB_N           8U
#define GPIOA_USB_VBUS              9U
#define GPIOA_UART_PROG_ESP_RX      10U
#define GPIOA_USB_DM                11U
#define GPIOA_USB_DP                12U
#define GPIOA_SWDIO                 13U
#define GPIOA_SWCLK                 14U
#define GPIOA_H_BRIDGE_MOT2AP       15U

#define GPIOB_H_BRIDGE_MOT3AP       0U
#define GPIOB_CURRENT_SENSE_MOT4A   1U
#define GPIOB_BAT_PLUS_INRUSH_LIMIT_n 2U
#define GPIOB_H_BRIDGE_MOT2AN       3U
#define GPIOB_H_BRIDGE_MOT2CP       4U
#define GPIOB_H_BRIDGE_MOT2CN       5U
#define GPIOB_UART_PROG_ESP_TX      6U
#define GPIOB_H_BRIDGE_MOT3BN       7U
#define GPIOB_EN_ESP32              8U
#define GPIOB_GPIO0_ESP32           9U
#define GPIOB_H_BRIDGE_MOT2BP       10U
#define GPIOB_H_BRIDGE_MOT2BN       11U
#define GPIOB_PWR_ON                12U
#define GPIOB_EN_CAN_PROG_n         13U
#define GPIOB_H_BRIDGE_MOT4BN       14U
#define GPIOB_H_BRIDGE_MOT4CN       15U

#define GPIOC_BRUSHLESS_SENSE_MOT2C 0U
#define GPIOC_BAT_PLUS_SENSE        1U
#define GPIOC_CURRENT_SENSE_MOT1A   2U
#define GPIOC_CURRENT_SENSE_MOT1B   3U
#define GPIOC_CURRENT_SENSE_MOT4B   4U
#define GPIOC_CURRENT_SENSE_MOT3B   5U
#define GPIOC_H_BRIDGE_MOT4AP       6U
#define GPIOC_H_BRIDGE_MOT4BP       7U
#define GPIOC_H_BRIDGE_MOT4CP       8U
#define GPIOC_H_BRIDGE_MOT3AN       9U
#define GPIOC_UART_UC_ESP_TX        10U
#define GPIOC_UART_UC_ESP_RX        11U
#define GPIOC_EN_EXTENSION_TOP      12U
#define GPIOC_PIN13                 13U
#define GPIOC_OSC32_IN              14U
#define GPIOC_OSC32_OUT             15U

#define GPIOD_CAN1_RX               0U
#define GPIOD_CAN1_TX               1U
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
#define GPIOD_H_BRIDGE_MOT3BP       12U
#define GPIOD_I2C_SDA_PD_CONTROLLER 13U
#define GPIOD_H_BRIDGE_MOT3CP       14U
#define GPIOD_H_BRIDGE_MOT3CN       15U

#define GPIOE_UART_CMD_RX           0U
#define GPIOE_UART_CMD_TX           1U
#define GPIOE_EN_DRIVER_4           2U
#define GPIOE_GPIO4_ESP32           3U
#define GPIOE_PIN4                  4U
#define GPIOE_SWD_UC_SWCLK          5U
#define GPIOE_SWD_UC_SWDIO          6U
#define GPIOE_CS_ENCODER2_N         7U
#define GPIOE_H_BRIDGE_MOT1AN       8U
#define GPIOE_H_BRIDGE_MOT1AP       9U
#define GPIOE_H_BRIDGE_MOT1BN       10U
#define GPIOE_H_BRIDGE_MOT1BP       11U
#define GPIOE_H_BRIDGE_MOT1CN       12U
#define GPIOE_H_BRIDGE_MOT1CP       13U
#define GPIOE_CS_ENCODER3_N         14U
#define GPIOE_RESET_UC              15U

#define GPIOF_GPIO13_ESP32          0U
#define GPIOF_HUB_CONNECT           1U
#define GPIOF_EN_DRIVER_2           2U
#define GPIOF_BRUSHLESS_SENSE_MOT3C 3U
#define GPIOF_BRUSHLESS_SENSE_MOT1B 4U
#define GPIOF_BRUSHLESS_SENSE_MOT1C 5U
#define GPIOF_BRUSHLESS_SENSE_MOT3A 6U
#define GPIOF_BRUSHLESS_SENSE_MOT1A 7U
#define GPIOF_BRUSHLESS_SENSE_MOT3B 8U
#define GPIOF_BRUSHLESS_SENSE_MOT2A 9U
#define GPIOF_BRUSHLESS_SENSE_MOT2B 10U
#define GPIOF_PRIORITY_TO_VBUS      11U
#define GPIOF_PIN12                 12U
#define GPIOF_CS_ENCODER4_N         13U
#define GPIOF_I2C_SCL_PD_CONTROLLER 14U
#define GPIOF_EN_DRIVER_1           15U

#define GPIOG_FAULT_DRIVER_1_n      0U
#define GPIOG_FAULT_DRIVER_2_N      1U
#define GPIOG_FAULT_DRIVER_4_N      2U
#define GPIOG_FAULT_DRIVER_3_N      3U
#define GPIOG_VBUS_HOST             4U
#define GPIOG_INT_PD_CTRL_N         5U
#define GPIOG_VBUS_DEVICES          6U
#define GPIOG_PIN7                  7U
#define GPIOG_BYPASS_HUB_N          8U
#define GPIOG_EN_EXTENSION_BOTTOM   9U
#define GPIOG_PWR_ON_BTN_STATE_N    10U
#define GPIOG_EN_DRIVER_3           11U
#define GPIOG_ENCODERS_GATE_DRIVERS_SPI6_MISO 12U
#define GPIOG_ENCODERS_GATE_DRIVERS_SPI6_SCK 13U
#define GPIOG_ENCODERS_GATE_DRIVERS_SPI6_MOSI 14U
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

#define GPIOI_PIN0                  0U
#define GPIOI_PIN1                  1U
#define GPIOI_PIN2                  2U
#define GPIOI_PIN3                  3U
#define GPIOI_PIN4                  4U
#define GPIOI_PIN5                  5U
#define GPIOI_PIN6                  6U
#define GPIOI_PIN7                  7U
#define GPIOI_PIN8                  8U
#define GPIOI_PIN9                  9U
#define GPIOI_PIN10                 10U
#define GPIOI_PIN11                 11U
#define GPIOI_PIN12                 12U
#define GPIOI_PIN13                 13U
#define GPIOI_PIN14                 14U
#define GPIOI_PIN15                 15U

#define GPIOJ_PIN0                  0U
#define GPIOJ_PIN1                  1U
#define GPIOJ_PIN2                  2U
#define GPIOJ_PIN3                  3U
#define GPIOJ_PIN4                  4U
#define GPIOJ_PIN5                  5U
#define GPIOJ_PIN6                  6U
#define GPIOJ_PIN7                  7U
#define GPIOJ_PIN8                  8U
#define GPIOJ_PIN9                  9U
#define GPIOJ_PIN10                 10U
#define GPIOJ_PIN11                 11U
#define GPIOJ_PIN12                 12U
#define GPIOJ_PIN13                 13U
#define GPIOJ_PIN14                 14U
#define GPIOJ_PIN15                 15U

#define GPIOK_PIN0                  0U
#define GPIOK_PIN1                  1U
#define GPIOK_PIN2                  2U
#define GPIOK_PIN3                  3U
#define GPIOK_PIN4                  4U
#define GPIOK_PIN5                  5U
#define GPIOK_PIN6                  6U
#define GPIOK_PIN7                  7U
#define GPIOK_PIN8                  8U
#define GPIOK_PIN9                  9U
#define GPIOK_PIN10                 10U
#define GPIOK_PIN11                 11U
#define GPIOK_PIN12                 12U
#define GPIOK_PIN13                 13U
#define GPIOK_PIN14                 14U
#define GPIOK_PIN15                 15U

/*
 * IO lines assignments.
 */
#define LINE_VBUS_SENSE             PAL_LINE(GPIOA, 0U)
#define LINE_BRUSHLESS_SENSE_MOT4A  PAL_LINE(GPIOA, 1U)
#define LINE_BRUSHLESS_SENSE_MOT4B  PAL_LINE(GPIOA, 2U)
#define LINE_BRUSHLESS_SENSE_MOT4C  PAL_LINE(GPIOA, 3U)
#define LINE_CURRENT_SENSE_MOT2A    PAL_LINE(GPIOA, 4U)
#define LINE_CURRENT_SENSE_MOT2B    PAL_LINE(GPIOA, 5U)
#define LINE_CURRENT_SENSE_MOT3A    PAL_LINE(GPIOA, 6U)
#define LINE_H_BRIDGE_MOT4AN        PAL_LINE(GPIOA, 7U)
#define LINE_RESET_HUB_N            PAL_LINE(GPIOA, 8U)
#define LINE_USB_VBUS               PAL_LINE(GPIOA, 9U)
#define LINE_UART_PROG_ESP_RX       PAL_LINE(GPIOA, 10U)
#define LINE_USB_DM                 PAL_LINE(GPIOA, 11U)
#define LINE_USB_DP                 PAL_LINE(GPIOA, 12U)
#define LINE_SWDIO                  PAL_LINE(GPIOA, 13U)
#define LINE_SWCLK                  PAL_LINE(GPIOA, 14U)
#define LINE_H_BRIDGE_MOT2AP        PAL_LINE(GPIOA, 15U)
#define LINE_H_BRIDGE_MOT3AP        PAL_LINE(GPIOB, 0U)
#define LINE_CURRENT_SENSE_MOT4A    PAL_LINE(GPIOB, 1U)
#define LINE_BAT_PLUS_INRUSH_LIMIT_n PAL_LINE(GPIOB, 2U)
#define LINE_H_BRIDGE_MOT2AN        PAL_LINE(GPIOB, 3U)
#define LINE_H_BRIDGE_MOT2CP        PAL_LINE(GPIOB, 4U)
#define LINE_H_BRIDGE_MOT2CN        PAL_LINE(GPIOB, 5U)
#define LINE_UART_PROG_ESP_TX       PAL_LINE(GPIOB, 6U)
#define LINE_H_BRIDGE_MOT3BN        PAL_LINE(GPIOB, 7U)
#define LINE_EN_ESP32               PAL_LINE(GPIOB, 8U)
#define LINE_GPIO0_ESP32            PAL_LINE(GPIOB, 9U)
#define LINE_H_BRIDGE_MOT2BP        PAL_LINE(GPIOB, 10U)
#define LINE_H_BRIDGE_MOT2BN        PAL_LINE(GPIOB, 11U)
#define LINE_PWR_ON                 PAL_LINE(GPIOB, 12U)
#define LINE_EN_CAN_PROG_n          PAL_LINE(GPIOB, 13U)
#define LINE_H_BRIDGE_MOT4BN        PAL_LINE(GPIOB, 14U)
#define LINE_H_BRIDGE_MOT4CN        PAL_LINE(GPIOB, 15U)
#define LINE_BRUSHLESS_SENSE_MOT2C  PAL_LINE(GPIOC, 0U)
#define LINE_BAT_PLUS_SENSE         PAL_LINE(GPIOC, 1U)
#define LINE_CURRENT_SENSE_MOT1A    PAL_LINE(GPIOC, 2U)
#define LINE_CURRENT_SENSE_MOT1B    PAL_LINE(GPIOC, 3U)
#define LINE_CURRENT_SENSE_MOT4B    PAL_LINE(GPIOC, 4U)
#define LINE_CURRENT_SENSE_MOT3B    PAL_LINE(GPIOC, 5U)
#define LINE_H_BRIDGE_MOT4AP        PAL_LINE(GPIOC, 6U)
#define LINE_H_BRIDGE_MOT4BP        PAL_LINE(GPIOC, 7U)
#define LINE_H_BRIDGE_MOT4CP        PAL_LINE(GPIOC, 8U)
#define LINE_H_BRIDGE_MOT3AN        PAL_LINE(GPIOC, 9U)
#define LINE_UART_UC_ESP_TX         PAL_LINE(GPIOC, 10U)
#define LINE_UART_UC_ESP_RX         PAL_LINE(GPIOC, 11U)
#define LINE_EN_EXTENSION_TOP       PAL_LINE(GPIOC, 12U)
#define LINE_OSC32_IN               PAL_LINE(GPIOC, 14U)
#define LINE_OSC32_OUT              PAL_LINE(GPIOC, 15U)
#define LINE_CAN1_RX                PAL_LINE(GPIOD, 0U)
#define LINE_CAN1_TX                PAL_LINE(GPIOD, 1U)
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
#define LINE_H_BRIDGE_MOT3BP        PAL_LINE(GPIOD, 12U)
#define LINE_I2C_SDA_PD_CONTROLLER  PAL_LINE(GPIOD, 13U)
#define LINE_H_BRIDGE_MOT3CP        PAL_LINE(GPIOD, 14U)
#define LINE_H_BRIDGE_MOT3CN        PAL_LINE(GPIOD, 15U)
#define LINE_UART_CMD_RX            PAL_LINE(GPIOE, 0U)
#define LINE_UART_CMD_TX            PAL_LINE(GPIOE, 1U)
#define LINE_EN_DRIVER_4            PAL_LINE(GPIOE, 2U)
#define LINE_GPIO4_ESP32            PAL_LINE(GPIOE, 3U)
#define LINE_SWD_UC_SWCLK           PAL_LINE(GPIOE, 5U)
#define LINE_SWD_UC_SWDIO           PAL_LINE(GPIOE, 6U)
#define LINE_CS_ENCODER2_N          PAL_LINE(GPIOE, 7U)
#define LINE_H_BRIDGE_MOT1AN        PAL_LINE(GPIOE, 8U)
#define LINE_H_BRIDGE_MOT1AP        PAL_LINE(GPIOE, 9U)
#define LINE_H_BRIDGE_MOT1BN        PAL_LINE(GPIOE, 10U)
#define LINE_H_BRIDGE_MOT1BP        PAL_LINE(GPIOE, 11U)
#define LINE_H_BRIDGE_MOT1CN        PAL_LINE(GPIOE, 12U)
#define LINE_H_BRIDGE_MOT1CP        PAL_LINE(GPIOE, 13U)
#define LINE_CS_ENCODER3_N          PAL_LINE(GPIOE, 14U)
#define LINE_RESET_UC               PAL_LINE(GPIOE, 15U)
#define LINE_GPIO13_ESP32           PAL_LINE(GPIOF, 0U)
#define LINE_HUB_CONNECT            PAL_LINE(GPIOF, 1U)
#define LINE_EN_DRIVER_2            PAL_LINE(GPIOF, 2U)
#define LINE_BRUSHLESS_SENSE_MOT3C  PAL_LINE(GPIOF, 3U)
#define LINE_BRUSHLESS_SENSE_MOT1B  PAL_LINE(GPIOF, 4U)
#define LINE_BRUSHLESS_SENSE_MOT1C  PAL_LINE(GPIOF, 5U)
#define LINE_BRUSHLESS_SENSE_MOT3A  PAL_LINE(GPIOF, 6U)
#define LINE_BRUSHLESS_SENSE_MOT1A  PAL_LINE(GPIOF, 7U)
#define LINE_BRUSHLESS_SENSE_MOT3B  PAL_LINE(GPIOF, 8U)
#define LINE_BRUSHLESS_SENSE_MOT2A  PAL_LINE(GPIOF, 9U)
#define LINE_BRUSHLESS_SENSE_MOT2B  PAL_LINE(GPIOF, 10U)
#define LINE_PRIORITY_TO_VBUS       PAL_LINE(GPIOF, 11U)
#define LINE_CS_ENCODER4_N          PAL_LINE(GPIOF, 13U)
#define LINE_I2C_SCL_PD_CONTROLLER  PAL_LINE(GPIOF, 14U)
#define LINE_EN_DRIVER_1            PAL_LINE(GPIOF, 15U)
#define LINE_FAULT_DRIVER_1_n       PAL_LINE(GPIOG, 0U)
#define LINE_FAULT_DRIVER_2_N       PAL_LINE(GPIOG, 1U)
#define LINE_FAULT_DRIVER_4_N       PAL_LINE(GPIOG, 2U)
#define LINE_FAULT_DRIVER_3_N       PAL_LINE(GPIOG, 3U)
#define LINE_VBUS_HOST              PAL_LINE(GPIOG, 4U)
#define LINE_INT_PD_CTRL_N          PAL_LINE(GPIOG, 5U)
#define LINE_VBUS_DEVICES           PAL_LINE(GPIOG, 6U)
#define LINE_BYPASS_HUB_N           PAL_LINE(GPIOG, 8U)
#define LINE_EN_EXTENSION_BOTTOM    PAL_LINE(GPIOG, 9U)
#define LINE_PWR_ON_BTN_STATE_N     PAL_LINE(GPIOG, 10U)
#define LINE_EN_DRIVER_3            PAL_LINE(GPIOG, 11U)
#define LINE_ENCODERS_GATE_DRIVERS_SPI6_MISO PAL_LINE(GPIOG, 12U)
#define LINE_ENCODERS_GATE_DRIVERS_SPI6_SCK PAL_LINE(GPIOG, 13U)
#define LINE_ENCODERS_GATE_DRIVERS_SPI6_MOSI PAL_LINE(GPIOG, 14U)
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
 * PA0  - VBUS_SENSE                (analog).
 * PA1  - BRUSHLESS_SENSE_MOT4A     (analog).
 * PA2  - BRUSHLESS_SENSE_MOT4B     (analog).
 * PA3  - BRUSHLESS_SENSE_MOT4C     (analog).
 * PA4  - CURRENT_SENSE_MOT2A       (analog).
 * PA5  - CURRENT_SENSE_MOT2B       (analog).
 * PA6  - CURRENT_SENSE_MOT3A       (analog).
 * PA7  - H_BRIDGE_MOT4AN           (alternate 3).
 * PA8  - RESET_HUB_N               (output pushpull minimum).
 * PA9  - USB_VBUS                  (input floating).
 * PA10 - UART_PROG_ESP_RX          (alternate 7).
 * PA11 - USB_DM                    (alternate 10).
 * PA12 - USB_DP                    (alternate 10).
 * PA13 - SWDIO                     (alternate 0).
 * PA14 - SWCLK                     (alternate 0).
 * PA15 - H_BRIDGE_MOT2AP           (alternate 1).
 */
#define VAL_GPIOA_MODER             (PIN_MODE_ANALOG(GPIOA_VBUS_SENSE) |    \
                                     PIN_MODE_ANALOG(GPIOA_BRUSHLESS_SENSE_MOT4A) |\
                                     PIN_MODE_ANALOG(GPIOA_BRUSHLESS_SENSE_MOT4B) |\
                                     PIN_MODE_ANALOG(GPIOA_BRUSHLESS_SENSE_MOT4C) |\
                                     PIN_MODE_ANALOG(GPIOA_CURRENT_SENSE_MOT2A) |\
                                     PIN_MODE_ANALOG(GPIOA_CURRENT_SENSE_MOT2B) |\
                                     PIN_MODE_ANALOG(GPIOA_CURRENT_SENSE_MOT3A) |\
                                     PIN_MODE_ALTERNATE(GPIOA_H_BRIDGE_MOT4AN) |\
                                     PIN_MODE_OUTPUT(GPIOA_RESET_HUB_N) |   \
                                     PIN_MODE_INPUT(GPIOA_USB_VBUS) |       \
                                     PIN_MODE_ALTERNATE(GPIOA_UART_PROG_ESP_RX) |\
                                     PIN_MODE_ALTERNATE(GPIOA_USB_DM) |     \
                                     PIN_MODE_ALTERNATE(GPIOA_USB_DP) |     \
                                     PIN_MODE_ALTERNATE(GPIOA_SWDIO) |      \
                                     PIN_MODE_ALTERNATE(GPIOA_SWCLK) |      \
                                     PIN_MODE_ALTERNATE(GPIOA_H_BRIDGE_MOT2AP))
#define VAL_GPIOA_OTYPER            (PIN_OTYPE_PUSHPULL(GPIOA_VBUS_SENSE) | \
                                     PIN_OTYPE_PUSHPULL(GPIOA_BRUSHLESS_SENSE_MOT4A) |\
                                     PIN_OTYPE_PUSHPULL(GPIOA_BRUSHLESS_SENSE_MOT4B) |\
                                     PIN_OTYPE_PUSHPULL(GPIOA_BRUSHLESS_SENSE_MOT4C) |\
                                     PIN_OTYPE_PUSHPULL(GPIOA_CURRENT_SENSE_MOT2A) |\
                                     PIN_OTYPE_PUSHPULL(GPIOA_CURRENT_SENSE_MOT2B) |\
                                     PIN_OTYPE_PUSHPULL(GPIOA_CURRENT_SENSE_MOT3A) |\
                                     PIN_OTYPE_PUSHPULL(GPIOA_H_BRIDGE_MOT4AN) |\
                                     PIN_OTYPE_PUSHPULL(GPIOA_RESET_HUB_N) |\
                                     PIN_OTYPE_PUSHPULL(GPIOA_USB_VBUS) |   \
                                     PIN_OTYPE_PUSHPULL(GPIOA_UART_PROG_ESP_RX) |\
                                     PIN_OTYPE_PUSHPULL(GPIOA_USB_DM) |     \
                                     PIN_OTYPE_PUSHPULL(GPIOA_USB_DP) |     \
                                     PIN_OTYPE_PUSHPULL(GPIOA_SWDIO) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOA_SWCLK) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOA_H_BRIDGE_MOT2AP))
#define VAL_GPIOA_OSPEEDR           (PIN_OSPEED_VERYLOW(GPIOA_VBUS_SENSE) | \
                                     PIN_OSPEED_VERYLOW(GPIOA_BRUSHLESS_SENSE_MOT4A) |\
                                     PIN_OSPEED_VERYLOW(GPIOA_BRUSHLESS_SENSE_MOT4B) |\
                                     PIN_OSPEED_VERYLOW(GPIOA_BRUSHLESS_SENSE_MOT4C) |\
                                     PIN_OSPEED_VERYLOW(GPIOA_CURRENT_SENSE_MOT2A) |\
                                     PIN_OSPEED_VERYLOW(GPIOA_CURRENT_SENSE_MOT2B) |\
                                     PIN_OSPEED_VERYLOW(GPIOA_CURRENT_SENSE_MOT3A) |\
                                     PIN_OSPEED_VERYLOW(GPIOA_H_BRIDGE_MOT4AN) |\
                                     PIN_OSPEED_VERYLOW(GPIOA_RESET_HUB_N) |\
                                     PIN_OSPEED_VERYLOW(GPIOA_USB_VBUS) |   \
                                     PIN_OSPEED_VERYLOW(GPIOA_UART_PROG_ESP_RX) |\
                                     PIN_OSPEED_VERYLOW(GPIOA_USB_DM) |     \
                                     PIN_OSPEED_VERYLOW(GPIOA_USB_DP) |     \
                                     PIN_OSPEED_VERYLOW(GPIOA_SWDIO) |      \
                                     PIN_OSPEED_VERYLOW(GPIOA_SWCLK) |      \
                                     PIN_OSPEED_VERYLOW(GPIOA_H_BRIDGE_MOT2AP))
#define VAL_GPIOA_PUPDR             (PIN_PUPDR_FLOATING(GPIOA_VBUS_SENSE) | \
                                     PIN_PUPDR_FLOATING(GPIOA_BRUSHLESS_SENSE_MOT4A) |\
                                     PIN_PUPDR_FLOATING(GPIOA_BRUSHLESS_SENSE_MOT4B) |\
                                     PIN_PUPDR_FLOATING(GPIOA_BRUSHLESS_SENSE_MOT4C) |\
                                     PIN_PUPDR_FLOATING(GPIOA_CURRENT_SENSE_MOT2A) |\
                                     PIN_PUPDR_FLOATING(GPIOA_CURRENT_SENSE_MOT2B) |\
                                     PIN_PUPDR_FLOATING(GPIOA_CURRENT_SENSE_MOT3A) |\
                                     PIN_PUPDR_FLOATING(GPIOA_H_BRIDGE_MOT4AN) |\
                                     PIN_PUPDR_FLOATING(GPIOA_RESET_HUB_N) |\
                                     PIN_PUPDR_FLOATING(GPIOA_USB_VBUS) |   \
                                     PIN_PUPDR_FLOATING(GPIOA_UART_PROG_ESP_RX) |\
                                     PIN_PUPDR_FLOATING(GPIOA_USB_DM) |     \
                                     PIN_PUPDR_FLOATING(GPIOA_USB_DP) |     \
                                     PIN_PUPDR_FLOATING(GPIOA_SWDIO) |      \
                                     PIN_PUPDR_FLOATING(GPIOA_SWCLK) |      \
                                     PIN_PUPDR_FLOATING(GPIOA_H_BRIDGE_MOT2AP))
#define VAL_GPIOA_ODR               (PIN_ODR_LOW(GPIOA_VBUS_SENSE) |        \
                                     PIN_ODR_LOW(GPIOA_BRUSHLESS_SENSE_MOT4A) |\
                                     PIN_ODR_LOW(GPIOA_BRUSHLESS_SENSE_MOT4B) |\
                                     PIN_ODR_LOW(GPIOA_BRUSHLESS_SENSE_MOT4C) |\
                                     PIN_ODR_LOW(GPIOA_CURRENT_SENSE_MOT2A) |\
                                     PIN_ODR_LOW(GPIOA_CURRENT_SENSE_MOT2B) |\
                                     PIN_ODR_LOW(GPIOA_CURRENT_SENSE_MOT3A) |\
                                     PIN_ODR_LOW(GPIOA_H_BRIDGE_MOT4AN) |   \
                                     PIN_ODR_HIGH(GPIOA_RESET_HUB_N) |      \
                                     PIN_ODR_LOW(GPIOA_USB_VBUS) |          \
                                     PIN_ODR_LOW(GPIOA_UART_PROG_ESP_RX) |  \
                                     PIN_ODR_LOW(GPIOA_USB_DM) |            \
                                     PIN_ODR_LOW(GPIOA_USB_DP) |            \
                                     PIN_ODR_LOW(GPIOA_SWDIO) |             \
                                     PIN_ODR_LOW(GPIOA_SWCLK) |             \
                                     PIN_ODR_LOW(GPIOA_H_BRIDGE_MOT2AP))
#define VAL_GPIOA_AFRL              (PIN_AFIO_AF(GPIOA_VBUS_SENSE, 0U) |    \
                                     PIN_AFIO_AF(GPIOA_BRUSHLESS_SENSE_MOT4A, 0U) |\
                                     PIN_AFIO_AF(GPIOA_BRUSHLESS_SENSE_MOT4B, 0U) |\
                                     PIN_AFIO_AF(GPIOA_BRUSHLESS_SENSE_MOT4C, 0U) |\
                                     PIN_AFIO_AF(GPIOA_CURRENT_SENSE_MOT2A, 0U) |\
                                     PIN_AFIO_AF(GPIOA_CURRENT_SENSE_MOT2B, 0U) |\
                                     PIN_AFIO_AF(GPIOA_CURRENT_SENSE_MOT3A, 0U) |\
                                     PIN_AFIO_AF(GPIOA_H_BRIDGE_MOT4AN, 3U))
#define VAL_GPIOA_AFRH              (PIN_AFIO_AF(GPIOA_RESET_HUB_N, 0U) |   \
                                     PIN_AFIO_AF(GPIOA_USB_VBUS, 0U) |      \
                                     PIN_AFIO_AF(GPIOA_UART_PROG_ESP_RX, 7U) |\
                                     PIN_AFIO_AF(GPIOA_USB_DM, 10U) |       \
                                     PIN_AFIO_AF(GPIOA_USB_DP, 10U) |       \
                                     PIN_AFIO_AF(GPIOA_SWDIO, 0U) |         \
                                     PIN_AFIO_AF(GPIOA_SWCLK, 0U) |         \
                                     PIN_AFIO_AF(GPIOA_H_BRIDGE_MOT2AP, 1U))

/*
 * GPIOB setup:
 *
 * PB0  - H_BRIDGE_MOT3AP           (alternate 2).
 * PB1  - CURRENT_SENSE_MOT4A       (analog).
 * PB2  - BAT_PLUS_INRUSH_LIMIT_n   (output pushpull minimum).
 * PB3  - H_BRIDGE_MOT2AN           (alternate 1).
 * PB4  - H_BRIDGE_MOT2CP           (alternate 2).
 * PB5  - H_BRIDGE_MOT2CN           (alternate 2).
 * PB6  - UART_PROG_ESP_TX          (alternate 7).
 * PB7  - H_BRIDGE_MOT3BN           (alternate 2).
 * PB8  - EN_ESP32                  (output pushpull minimum).
 * PB9  - GPIO0_ESP32               (output pushpull minimum).
 * PB10 - H_BRIDGE_MOT2BP           (alternate 1).
 * PB11 - H_BRIDGE_MOT2BN           (alternate 1).
 * PB12 - PWR_ON                    (output pushpull minimum).
 * PB13 - EN_CAN_PROG_n             (output pushpull minimum).
 * PB14 - H_BRIDGE_MOT4BN           (alternate 3).
 * PB15 - H_BRIDGE_MOT4CN           (alternate 3).
 */
#define VAL_GPIOB_MODER             (PIN_MODE_ALTERNATE(GPIOB_H_BRIDGE_MOT3AP) |\
                                     PIN_MODE_ANALOG(GPIOB_CURRENT_SENSE_MOT4A) |\
                                     PIN_MODE_OUTPUT(GPIOB_BAT_PLUS_INRUSH_LIMIT_n) |\
                                     PIN_MODE_ALTERNATE(GPIOB_H_BRIDGE_MOT2AN) |\
                                     PIN_MODE_ALTERNATE(GPIOB_H_BRIDGE_MOT2CP) |\
                                     PIN_MODE_ALTERNATE(GPIOB_H_BRIDGE_MOT2CN) |\
                                     PIN_MODE_ALTERNATE(GPIOB_UART_PROG_ESP_TX) |\
                                     PIN_MODE_ALTERNATE(GPIOB_H_BRIDGE_MOT3BN) |\
                                     PIN_MODE_OUTPUT(GPIOB_EN_ESP32) |      \
                                     PIN_MODE_OUTPUT(GPIOB_GPIO0_ESP32) |   \
                                     PIN_MODE_ALTERNATE(GPIOB_H_BRIDGE_MOT2BP) |\
                                     PIN_MODE_ALTERNATE(GPIOB_H_BRIDGE_MOT2BN) |\
                                     PIN_MODE_OUTPUT(GPIOB_PWR_ON) |        \
                                     PIN_MODE_OUTPUT(GPIOB_EN_CAN_PROG_n) | \
                                     PIN_MODE_ALTERNATE(GPIOB_H_BRIDGE_MOT4BN) |\
                                     PIN_MODE_ALTERNATE(GPIOB_H_BRIDGE_MOT4CN))
#define VAL_GPIOB_OTYPER            (PIN_OTYPE_PUSHPULL(GPIOB_H_BRIDGE_MOT3AP) |\
                                     PIN_OTYPE_PUSHPULL(GPIOB_CURRENT_SENSE_MOT4A) |\
                                     PIN_OTYPE_PUSHPULL(GPIOB_BAT_PLUS_INRUSH_LIMIT_n) |\
                                     PIN_OTYPE_PUSHPULL(GPIOB_H_BRIDGE_MOT2AN) |\
                                     PIN_OTYPE_PUSHPULL(GPIOB_H_BRIDGE_MOT2CP) |\
                                     PIN_OTYPE_PUSHPULL(GPIOB_H_BRIDGE_MOT2CN) |\
                                     PIN_OTYPE_PUSHPULL(GPIOB_UART_PROG_ESP_TX) |\
                                     PIN_OTYPE_PUSHPULL(GPIOB_H_BRIDGE_MOT3BN) |\
                                     PIN_OTYPE_PUSHPULL(GPIOB_EN_ESP32) |   \
                                     PIN_OTYPE_OPENDRAIN(GPIOB_GPIO0_ESP32) |\
                                     PIN_OTYPE_PUSHPULL(GPIOB_H_BRIDGE_MOT2BP) |\
                                     PIN_OTYPE_PUSHPULL(GPIOB_H_BRIDGE_MOT2BN) |\
                                     PIN_OTYPE_PUSHPULL(GPIOB_PWR_ON) |     \
                                     PIN_OTYPE_PUSHPULL(GPIOB_EN_CAN_PROG_n) |\
                                     PIN_OTYPE_PUSHPULL(GPIOB_H_BRIDGE_MOT4BN) |\
                                     PIN_OTYPE_PUSHPULL(GPIOB_H_BRIDGE_MOT4CN))
#define VAL_GPIOB_OSPEEDR           (PIN_OSPEED_VERYLOW(GPIOB_H_BRIDGE_MOT3AP) |\
                                     PIN_OSPEED_VERYLOW(GPIOB_CURRENT_SENSE_MOT4A) |\
                                     PIN_OSPEED_VERYLOW(GPIOB_BAT_PLUS_INRUSH_LIMIT_n) |\
                                     PIN_OSPEED_VERYLOW(GPIOB_H_BRIDGE_MOT2AN) |\
                                     PIN_OSPEED_VERYLOW(GPIOB_H_BRIDGE_MOT2CP) |\
                                     PIN_OSPEED_VERYLOW(GPIOB_H_BRIDGE_MOT2CN) |\
                                     PIN_OSPEED_VERYLOW(GPIOB_UART_PROG_ESP_TX) |\
                                     PIN_OSPEED_VERYLOW(GPIOB_H_BRIDGE_MOT3BN) |\
                                     PIN_OSPEED_VERYLOW(GPIOB_EN_ESP32) |   \
                                     PIN_OSPEED_VERYLOW(GPIOB_GPIO0_ESP32) |\
                                     PIN_OSPEED_VERYLOW(GPIOB_H_BRIDGE_MOT2BP) |\
                                     PIN_OSPEED_VERYLOW(GPIOB_H_BRIDGE_MOT2BN) |\
                                     PIN_OSPEED_VERYLOW(GPIOB_PWR_ON) |     \
                                     PIN_OSPEED_VERYLOW(GPIOB_EN_CAN_PROG_n) |\
                                     PIN_OSPEED_VERYLOW(GPIOB_H_BRIDGE_MOT4BN) |\
                                     PIN_OSPEED_VERYLOW(GPIOB_H_BRIDGE_MOT4CN))
#define VAL_GPIOB_PUPDR             (PIN_PUPDR_FLOATING(GPIOB_H_BRIDGE_MOT3AP) |\
                                     PIN_PUPDR_FLOATING(GPIOB_CURRENT_SENSE_MOT4A) |\
                                     PIN_PUPDR_FLOATING(GPIOB_BAT_PLUS_INRUSH_LIMIT_n) |\
                                     PIN_PUPDR_FLOATING(GPIOB_H_BRIDGE_MOT2AN) |\
                                     PIN_PUPDR_FLOATING(GPIOB_H_BRIDGE_MOT2CP) |\
                                     PIN_PUPDR_FLOATING(GPIOB_H_BRIDGE_MOT2CN) |\
                                     PIN_PUPDR_FLOATING(GPIOB_UART_PROG_ESP_TX) |\
                                     PIN_PUPDR_FLOATING(GPIOB_H_BRIDGE_MOT3BN) |\
                                     PIN_PUPDR_FLOATING(GPIOB_EN_ESP32) |   \
                                     PIN_PUPDR_PULLUP(GPIOB_GPIO0_ESP32) |\
                                     PIN_PUPDR_FLOATING(GPIOB_H_BRIDGE_MOT2BP) |\
                                     PIN_PUPDR_FLOATING(GPIOB_H_BRIDGE_MOT2BN) |\
                                     PIN_PUPDR_FLOATING(GPIOB_PWR_ON) |     \
                                     PIN_PUPDR_FLOATING(GPIOB_EN_CAN_PROG_n) |\
                                     PIN_PUPDR_FLOATING(GPIOB_H_BRIDGE_MOT4BN) |\
                                     PIN_PUPDR_FLOATING(GPIOB_H_BRIDGE_MOT4CN))
#define VAL_GPIOB_ODR               (PIN_ODR_LOW(GPIOB_H_BRIDGE_MOT3AP) |   \
                                     PIN_ODR_LOW(GPIOB_CURRENT_SENSE_MOT4A) |\
                                     PIN_ODR_LOW(GPIOB_BAT_PLUS_INRUSH_LIMIT_n) |\
                                     PIN_ODR_LOW(GPIOB_H_BRIDGE_MOT2AN) |   \
                                     PIN_ODR_LOW(GPIOB_H_BRIDGE_MOT2CP) |   \
                                     PIN_ODR_LOW(GPIOB_H_BRIDGE_MOT2CN) |   \
                                     PIN_ODR_LOW(GPIOB_UART_PROG_ESP_TX) |  \
                                     PIN_ODR_LOW(GPIOB_H_BRIDGE_MOT3BN) |   \
                                     PIN_ODR_HIGH(GPIOB_EN_ESP32) |          \
                                     PIN_ODR_HIGH(GPIOB_GPIO0_ESP32) |       \
                                     PIN_ODR_LOW(GPIOB_H_BRIDGE_MOT2BP) |   \
                                     PIN_ODR_LOW(GPIOB_H_BRIDGE_MOT2BN) |   \
                                     PIN_ODR_LOW(GPIOB_PWR_ON) |            \
                                     PIN_ODR_HIGH(GPIOB_EN_CAN_PROG_n) |    \
                                     PIN_ODR_LOW(GPIOB_H_BRIDGE_MOT4BN) |   \
                                     PIN_ODR_LOW(GPIOB_H_BRIDGE_MOT4CN))
#define VAL_GPIOB_AFRL              (PIN_AFIO_AF(GPIOB_H_BRIDGE_MOT3AP, 2U) |\
                                     PIN_AFIO_AF(GPIOB_CURRENT_SENSE_MOT4A, 0U) |\
                                     PIN_AFIO_AF(GPIOB_BAT_PLUS_INRUSH_LIMIT_n, 0U) |\
                                     PIN_AFIO_AF(GPIOB_H_BRIDGE_MOT2AN, 1U) |\
                                     PIN_AFIO_AF(GPIOB_H_BRIDGE_MOT2CP, 2U) |\
                                     PIN_AFIO_AF(GPIOB_H_BRIDGE_MOT2CN, 2U) |\
                                     PIN_AFIO_AF(GPIOB_UART_PROG_ESP_TX, 7U) |\
                                     PIN_AFIO_AF(GPIOB_H_BRIDGE_MOT3BN, 2U))
#define VAL_GPIOB_AFRH              (PIN_AFIO_AF(GPIOB_EN_ESP32, 0U) |      \
                                     PIN_AFIO_AF(GPIOB_GPIO0_ESP32, 0U) |   \
                                     PIN_AFIO_AF(GPIOB_H_BRIDGE_MOT2BP, 1U) |\
                                     PIN_AFIO_AF(GPIOB_H_BRIDGE_MOT2BN, 1U) |\
                                     PIN_AFIO_AF(GPIOB_PWR_ON, 0U) |        \
                                     PIN_AFIO_AF(GPIOB_EN_CAN_PROG_n, 0U) | \
                                     PIN_AFIO_AF(GPIOB_H_BRIDGE_MOT4BN, 3U) |\
                                     PIN_AFIO_AF(GPIOB_H_BRIDGE_MOT4CN, 3U))

/*
 * GPIOC setup:
 *
 * PC0  - BRUSHLESS_SENSE_MOT2C     (analog).
 * PC1  - BAT_PLUS_SENSE            (analog).
 * PC2  - CURRENT_SENSE_MOT1A       (analog).
 * PC3  - CURRENT_SENSE_MOT1B       (analog).
 * PC4  - CURRENT_SENSE_MOT4B       (analog).
 * PC5  - CURRENT_SENSE_MOT3B       (analog).
 * PC6  - H_BRIDGE_MOT4AP           (alternate 3).
 * PC7  - H_BRIDGE_MOT4BP           (alternate 3).
 * PC8  - H_BRIDGE_MOT4CP           (alternate 3).
 * PC9  - H_BRIDGE_MOT3AN           (alternate 2).
 * PC10 - UART_UC_ESP_TX            (alternate 7).
 * PC11 - UART_UC_ESP_RX            (alternate 7).
 * PC12 - EN_EXTENSION_TOP          (output pushpull minimum).
 * PC13 - PIN13                     (input pulldown).
 * PC14 - OSC32_IN                  (input floating).
 * PC15 - OSC32_OUT                 (input floating).
 */
#define VAL_GPIOC_MODER             (PIN_MODE_ANALOG(GPIOC_BRUSHLESS_SENSE_MOT2C) |\
                                     PIN_MODE_ANALOG(GPIOC_BAT_PLUS_SENSE) |\
                                     PIN_MODE_ANALOG(GPIOC_CURRENT_SENSE_MOT1A) |\
                                     PIN_MODE_ANALOG(GPIOC_CURRENT_SENSE_MOT1B) |\
                                     PIN_MODE_ANALOG(GPIOC_CURRENT_SENSE_MOT4B) |\
                                     PIN_MODE_ANALOG(GPIOC_CURRENT_SENSE_MOT3B) |\
                                     PIN_MODE_ALTERNATE(GPIOC_H_BRIDGE_MOT4AP) |\
                                     PIN_MODE_ALTERNATE(GPIOC_H_BRIDGE_MOT4BP) |\
                                     PIN_MODE_ALTERNATE(GPIOC_H_BRIDGE_MOT4CP) |\
                                     PIN_MODE_ALTERNATE(GPIOC_H_BRIDGE_MOT3AN) |\
                                     PIN_MODE_ALTERNATE(GPIOC_UART_UC_ESP_TX) |\
                                     PIN_MODE_ALTERNATE(GPIOC_UART_UC_ESP_RX) |\
                                     PIN_MODE_OUTPUT(GPIOC_EN_EXTENSION_TOP) |\
                                     PIN_MODE_INPUT(GPIOC_PIN13) |          \
                                     PIN_MODE_INPUT(GPIOC_OSC32_IN) |       \
                                     PIN_MODE_INPUT(GPIOC_OSC32_OUT))
#define VAL_GPIOC_OTYPER            (PIN_OTYPE_PUSHPULL(GPIOC_BRUSHLESS_SENSE_MOT2C) |\
                                     PIN_OTYPE_PUSHPULL(GPIOC_BAT_PLUS_SENSE) |\
                                     PIN_OTYPE_PUSHPULL(GPIOC_CURRENT_SENSE_MOT1A) |\
                                     PIN_OTYPE_PUSHPULL(GPIOC_CURRENT_SENSE_MOT1B) |\
                                     PIN_OTYPE_PUSHPULL(GPIOC_CURRENT_SENSE_MOT4B) |\
                                     PIN_OTYPE_PUSHPULL(GPIOC_CURRENT_SENSE_MOT3B) |\
                                     PIN_OTYPE_PUSHPULL(GPIOC_H_BRIDGE_MOT4AP) |\
                                     PIN_OTYPE_PUSHPULL(GPIOC_H_BRIDGE_MOT4BP) |\
                                     PIN_OTYPE_PUSHPULL(GPIOC_H_BRIDGE_MOT4CP) |\
                                     PIN_OTYPE_PUSHPULL(GPIOC_H_BRIDGE_MOT3AN) |\
                                     PIN_OTYPE_PUSHPULL(GPIOC_UART_UC_ESP_TX) |\
                                     PIN_OTYPE_PUSHPULL(GPIOC_UART_UC_ESP_RX) |\
                                     PIN_OTYPE_PUSHPULL(GPIOC_EN_EXTENSION_TOP) |\
                                     PIN_OTYPE_PUSHPULL(GPIOC_PIN13) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOC_OSC32_IN) |   \
                                     PIN_OTYPE_PUSHPULL(GPIOC_OSC32_OUT))
#define VAL_GPIOC_OSPEEDR           (PIN_OSPEED_VERYLOW(GPIOC_BRUSHLESS_SENSE_MOT2C) |\
                                     PIN_OSPEED_VERYLOW(GPIOC_BAT_PLUS_SENSE) |\
                                     PIN_OSPEED_VERYLOW(GPIOC_CURRENT_SENSE_MOT1A) |\
                                     PIN_OSPEED_VERYLOW(GPIOC_CURRENT_SENSE_MOT1B) |\
                                     PIN_OSPEED_VERYLOW(GPIOC_CURRENT_SENSE_MOT4B) |\
                                     PIN_OSPEED_VERYLOW(GPIOC_CURRENT_SENSE_MOT3B) |\
                                     PIN_OSPEED_VERYLOW(GPIOC_H_BRIDGE_MOT4AP) |\
                                     PIN_OSPEED_VERYLOW(GPIOC_H_BRIDGE_MOT4BP) |\
                                     PIN_OSPEED_VERYLOW(GPIOC_H_BRIDGE_MOT4CP) |\
                                     PIN_OSPEED_VERYLOW(GPIOC_H_BRIDGE_MOT3AN) |\
                                     PIN_OSPEED_VERYLOW(GPIOC_UART_UC_ESP_TX) |\
                                     PIN_OSPEED_VERYLOW(GPIOC_UART_UC_ESP_RX) |\
                                     PIN_OSPEED_VERYLOW(GPIOC_EN_EXTENSION_TOP) |\
                                     PIN_OSPEED_VERYLOW(GPIOC_PIN13) |      \
                                     PIN_OSPEED_VERYLOW(GPIOC_OSC32_IN) |   \
                                     PIN_OSPEED_VERYLOW(GPIOC_OSC32_OUT))
#define VAL_GPIOC_PUPDR             (PIN_PUPDR_FLOATING(GPIOC_BRUSHLESS_SENSE_MOT2C) |\
                                     PIN_PUPDR_FLOATING(GPIOC_BAT_PLUS_SENSE) |\
                                     PIN_PUPDR_FLOATING(GPIOC_CURRENT_SENSE_MOT1A) |\
                                     PIN_PUPDR_FLOATING(GPIOC_CURRENT_SENSE_MOT1B) |\
                                     PIN_PUPDR_FLOATING(GPIOC_CURRENT_SENSE_MOT4B) |\
                                     PIN_PUPDR_FLOATING(GPIOC_CURRENT_SENSE_MOT3B) |\
                                     PIN_PUPDR_FLOATING(GPIOC_H_BRIDGE_MOT4AP) |\
                                     PIN_PUPDR_FLOATING(GPIOC_H_BRIDGE_MOT4BP) |\
                                     PIN_PUPDR_FLOATING(GPIOC_H_BRIDGE_MOT4CP) |\
                                     PIN_PUPDR_FLOATING(GPIOC_H_BRIDGE_MOT3AN) |\
                                     PIN_PUPDR_FLOATING(GPIOC_UART_UC_ESP_TX) |\
                                     PIN_PUPDR_FLOATING(GPIOC_UART_UC_ESP_RX) |\
                                     PIN_PUPDR_FLOATING(GPIOC_EN_EXTENSION_TOP) |\
                                     PIN_PUPDR_PULLDOWN(GPIOC_PIN13) |      \
                                     PIN_PUPDR_FLOATING(GPIOC_OSC32_IN) |   \
                                     PIN_PUPDR_FLOATING(GPIOC_OSC32_OUT))
#define VAL_GPIOC_ODR               (PIN_ODR_LOW(GPIOC_BRUSHLESS_SENSE_MOT2C) |\
                                     PIN_ODR_LOW(GPIOC_BAT_PLUS_SENSE) |    \
                                     PIN_ODR_LOW(GPIOC_CURRENT_SENSE_MOT1A) |\
                                     PIN_ODR_LOW(GPIOC_CURRENT_SENSE_MOT1B) |\
                                     PIN_ODR_LOW(GPIOC_CURRENT_SENSE_MOT4B) |\
                                     PIN_ODR_LOW(GPIOC_CURRENT_SENSE_MOT3B) |\
                                     PIN_ODR_LOW(GPIOC_H_BRIDGE_MOT4AP) |   \
                                     PIN_ODR_LOW(GPIOC_H_BRIDGE_MOT4BP) |   \
                                     PIN_ODR_LOW(GPIOC_H_BRIDGE_MOT4CP) |   \
                                     PIN_ODR_LOW(GPIOC_H_BRIDGE_MOT3AN) |   \
                                     PIN_ODR_LOW(GPIOC_UART_UC_ESP_TX) |    \
                                     PIN_ODR_LOW(GPIOC_UART_UC_ESP_RX) |    \
                                     PIN_ODR_LOW(GPIOC_EN_EXTENSION_TOP) |  \
                                     PIN_ODR_LOW(GPIOC_PIN13) |             \
                                     PIN_ODR_LOW(GPIOC_OSC32_IN) |          \
                                     PIN_ODR_LOW(GPIOC_OSC32_OUT))
#define VAL_GPIOC_AFRL              (PIN_AFIO_AF(GPIOC_BRUSHLESS_SENSE_MOT2C, 0U) |\
                                     PIN_AFIO_AF(GPIOC_BAT_PLUS_SENSE, 0U) |\
                                     PIN_AFIO_AF(GPIOC_CURRENT_SENSE_MOT1A, 0U) |\
                                     PIN_AFIO_AF(GPIOC_CURRENT_SENSE_MOT1B, 0U) |\
                                     PIN_AFIO_AF(GPIOC_CURRENT_SENSE_MOT4B, 0U) |\
                                     PIN_AFIO_AF(GPIOC_CURRENT_SENSE_MOT3B, 0U) |\
                                     PIN_AFIO_AF(GPIOC_H_BRIDGE_MOT4AP, 3U) |\
                                     PIN_AFIO_AF(GPIOC_H_BRIDGE_MOT4BP, 3U))
#define VAL_GPIOC_AFRH              (PIN_AFIO_AF(GPIOC_H_BRIDGE_MOT4CP, 3U) |\
                                     PIN_AFIO_AF(GPIOC_H_BRIDGE_MOT3AN, 2U) |\
                                     PIN_AFIO_AF(GPIOC_UART_UC_ESP_TX, 7U) |\
                                     PIN_AFIO_AF(GPIOC_UART_UC_ESP_RX, 7U) |\
                                     PIN_AFIO_AF(GPIOC_EN_EXTENSION_TOP, 0U) |\
                                     PIN_AFIO_AF(GPIOC_PIN13, 0U) |         \
                                     PIN_AFIO_AF(GPIOC_OSC32_IN, 0U) |      \
                                     PIN_AFIO_AF(GPIOC_OSC32_OUT, 0U))

/*
 * GPIOD setup:
 *
 * PD0  - CAN1_RX                   (alternate 9).
 * PD1  - CAN1_TX                   (alternate 9).
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
 * PD12 - H_BRIDGE_MOT3BP           (alternate 2).
 * PD13 - I2C_SDA_PD_CONTROLLER     (alternate 4).
 * PD14 - H_BRIDGE_MOT3CP           (alternate 2).
 * PD15 - H_BRIDGE_MOT3CN           (alternate 2).
 */
#define VAL_GPIOD_MODER             (PIN_MODE_ALTERNATE(GPIOD_CAN1_RX) |    \
                                     PIN_MODE_ALTERNATE(GPIOD_CAN1_TX) |    \
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
                                     PIN_MODE_ALTERNATE(GPIOD_H_BRIDGE_MOT3BP) |\
                                     PIN_MODE_ALTERNATE(GPIOD_I2C_SDA_PD_CONTROLLER) |\
                                     PIN_MODE_ALTERNATE(GPIOD_H_BRIDGE_MOT3CP) |\
                                     PIN_MODE_ALTERNATE(GPIOD_H_BRIDGE_MOT3CN))
#define VAL_GPIOD_OTYPER            (PIN_OTYPE_PUSHPULL(GPIOD_CAN1_RX) |    \
                                     PIN_OTYPE_PUSHPULL(GPIOD_CAN1_TX) |    \
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
                                     PIN_OTYPE_PUSHPULL(GPIOD_H_BRIDGE_MOT3BP) |\
                                     PIN_OTYPE_OPENDRAIN(GPIOD_I2C_SDA_PD_CONTROLLER) |\
                                     PIN_OTYPE_PUSHPULL(GPIOD_H_BRIDGE_MOT3CP) |\
                                     PIN_OTYPE_PUSHPULL(GPIOD_H_BRIDGE_MOT3CN))
#define VAL_GPIOD_OSPEEDR           (PIN_OSPEED_VERYLOW(GPIOD_CAN1_RX) |    \
                                     PIN_OSPEED_VERYLOW(GPIOD_CAN1_TX) |    \
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
                                     PIN_OSPEED_VERYLOW(GPIOD_H_BRIDGE_MOT3BP) |\
                                     PIN_OSPEED_HIGH(GPIOD_I2C_SDA_PD_CONTROLLER) |\
                                     PIN_OSPEED_VERYLOW(GPIOD_H_BRIDGE_MOT3CP) |\
                                     PIN_OSPEED_VERYLOW(GPIOD_H_BRIDGE_MOT3CN))
#define VAL_GPIOD_PUPDR             (PIN_PUPDR_PULLDOWN(GPIOD_CAN1_RX) |    \
                                     PIN_PUPDR_FLOATING(GPIOD_CAN1_TX) |    \
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
                                     PIN_PUPDR_FLOATING(GPIOD_H_BRIDGE_MOT3BP) |\
                                     PIN_PUPDR_FLOATING(GPIOD_I2C_SDA_PD_CONTROLLER) |\
                                     PIN_PUPDR_FLOATING(GPIOD_H_BRIDGE_MOT3CP) |\
                                     PIN_PUPDR_FLOATING(GPIOD_H_BRIDGE_MOT3CN))
#define VAL_GPIOD_ODR               (PIN_ODR_LOW(GPIOD_CAN1_RX) |           \
                                     PIN_ODR_LOW(GPIOD_CAN1_TX) |           \
                                     PIN_ODR_HIGH(GPIOD_STATUS_LED1_R) |    \
                                     PIN_ODR_HIGH(GPIOD_STATUS_LED1_G) |    \
                                     PIN_ODR_HIGH(GPIOD_STATUS_LED1_B) |    \
                                     PIN_ODR_HIGH(GPIOD_STATUS_LED2_R) |    \
                                     PIN_ODR_HIGH(GPIOD_STATUS_LED2_G) |    \
                                     PIN_ODR_HIGH(GPIOD_STATUS_LED2_B) |    \
                                     PIN_ODR_HIGH(GPIOD_STATUS_LED3_R) |    \
                                     PIN_ODR_HIGH(GPIOD_STATUS_LED3_G) |    \
                                     PIN_ODR_HIGH(GPIOD_STATUS_LED3_B) |    \
                                     PIN_ODR_HIGH(GPIOD_CS_ENCODER1_n) |    \
                                     PIN_ODR_LOW(GPIOD_H_BRIDGE_MOT3BP) |   \
                                     PIN_ODR_LOW(GPIOD_I2C_SDA_PD_CONTROLLER) |\
                                     PIN_ODR_LOW(GPIOD_H_BRIDGE_MOT3CP) |   \
                                     PIN_ODR_LOW(GPIOD_H_BRIDGE_MOT3CN))
#define VAL_GPIOD_AFRL              (PIN_AFIO_AF(GPIOD_CAN1_RX, 9U) |       \
                                     PIN_AFIO_AF(GPIOD_CAN1_TX, 9U) |       \
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
                                     PIN_AFIO_AF(GPIOD_H_BRIDGE_MOT3BP, 2U) |\
                                     PIN_AFIO_AF(GPIOD_I2C_SDA_PD_CONTROLLER, 4U) |\
                                     PIN_AFIO_AF(GPIOD_H_BRIDGE_MOT3CP, 2U) |\
                                     PIN_AFIO_AF(GPIOD_H_BRIDGE_MOT3CN, 2U))

/*
 * GPIOE setup:
 *
 * PE0  - UART_CMD_RX               (alternate 8).
 * PE1  - UART_CMD_TX               (alternate 8).
 * PE2  - EN_DRIVER_4               (output pushpull minimum).
 * PE3  - GPIO4_ESP32               (output pushpull minimum).
 * PE4  - PIN4                      (input pulldown).
 * PE5  - SWD_UC_SWCLK              (output pushpull minimum).
 * PE6  - SWD_UC_SWDIO              (output pushpull minimum).
 * PE7  - CS_ENCODER2_N             (output pushpull minimum).
 * PE8  - H_BRIDGE_MOT1AN           (alternate 1).
 * PE9  - H_BRIDGE_MOT1AP           (alternate 1).
 * PE10 - H_BRIDGE_MOT1BN           (alternate 1).
 * PE11 - H_BRIDGE_MOT1BP           (alternate 1).
 * PE12 - H_BRIDGE_MOT1CN           (alternate 1).
 * PE13 - H_BRIDGE_MOT1CP           (alternate 1).
 * PE14 - CS_ENCODER3_N             (output pushpull minimum).
 * PE15 - RESET_UC                  (output pushpull minimum).
 */
#define VAL_GPIOE_MODER             (PIN_MODE_ALTERNATE(GPIOE_UART_CMD_RX) |\
                                     PIN_MODE_ALTERNATE(GPIOE_UART_CMD_TX) |\
                                     PIN_MODE_OUTPUT(GPIOE_EN_DRIVER_4) |   \
                                     PIN_MODE_OUTPUT(GPIOE_GPIO4_ESP32) |   \
                                     PIN_MODE_INPUT(GPIOE_PIN4) |           \
                                     PIN_MODE_OUTPUT(GPIOE_SWD_UC_SWCLK) |  \
                                     PIN_MODE_OUTPUT(GPIOE_SWD_UC_SWDIO) |  \
                                     PIN_MODE_OUTPUT(GPIOE_CS_ENCODER2_N) | \
                                     PIN_MODE_ALTERNATE(GPIOE_H_BRIDGE_MOT1AN) |\
                                     PIN_MODE_ALTERNATE(GPIOE_H_BRIDGE_MOT1AP) |\
                                     PIN_MODE_ALTERNATE(GPIOE_H_BRIDGE_MOT1BN) |\
                                     PIN_MODE_ALTERNATE(GPIOE_H_BRIDGE_MOT1BP) |\
                                     PIN_MODE_ALTERNATE(GPIOE_H_BRIDGE_MOT1CN) |\
                                     PIN_MODE_ALTERNATE(GPIOE_H_BRIDGE_MOT1CP) |\
                                     PIN_MODE_OUTPUT(GPIOE_CS_ENCODER3_N) | \
                                     PIN_MODE_OUTPUT(GPIOE_RESET_UC))
#define VAL_GPIOE_OTYPER            (PIN_OTYPE_PUSHPULL(GPIOE_UART_CMD_RX) |\
                                     PIN_OTYPE_PUSHPULL(GPIOE_UART_CMD_TX) |\
                                     PIN_OTYPE_PUSHPULL(GPIOE_EN_DRIVER_4) |\
                                     PIN_OTYPE_PUSHPULL(GPIOE_GPIO4_ESP32) |\
                                     PIN_OTYPE_PUSHPULL(GPIOE_PIN4) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOE_SWD_UC_SWCLK) |\
                                     PIN_OTYPE_PUSHPULL(GPIOE_SWD_UC_SWDIO) |\
                                     PIN_OTYPE_PUSHPULL(GPIOE_CS_ENCODER2_N) |\
                                     PIN_OTYPE_PUSHPULL(GPIOE_H_BRIDGE_MOT1AN) |\
                                     PIN_OTYPE_PUSHPULL(GPIOE_H_BRIDGE_MOT1AP) |\
                                     PIN_OTYPE_PUSHPULL(GPIOE_H_BRIDGE_MOT1BN) |\
                                     PIN_OTYPE_PUSHPULL(GPIOE_H_BRIDGE_MOT1BP) |\
                                     PIN_OTYPE_PUSHPULL(GPIOE_H_BRIDGE_MOT1CN) |\
                                     PIN_OTYPE_PUSHPULL(GPIOE_H_BRIDGE_MOT1CP) |\
                                     PIN_OTYPE_PUSHPULL(GPIOE_CS_ENCODER3_N) |\
                                     PIN_OTYPE_PUSHPULL(GPIOE_RESET_UC))
#define VAL_GPIOE_OSPEEDR           (PIN_OSPEED_VERYLOW(GPIOE_UART_CMD_RX) |\
                                     PIN_OSPEED_VERYLOW(GPIOE_UART_CMD_TX) |\
                                     PIN_OSPEED_VERYLOW(GPIOE_EN_DRIVER_4) |\
                                     PIN_OSPEED_VERYLOW(GPIOE_GPIO4_ESP32) |\
                                     PIN_OSPEED_VERYLOW(GPIOE_PIN4) |       \
                                     PIN_OSPEED_HIGH(GPIOE_SWD_UC_SWCLK) |\
                                     PIN_OSPEED_HIGH(GPIOE_SWD_UC_SWDIO) |\
                                     PIN_OSPEED_VERYLOW(GPIOE_CS_ENCODER2_N) |\
                                     PIN_OSPEED_VERYLOW(GPIOE_H_BRIDGE_MOT1AN) |\
                                     PIN_OSPEED_VERYLOW(GPIOE_H_BRIDGE_MOT1AP) |\
                                     PIN_OSPEED_VERYLOW(GPIOE_H_BRIDGE_MOT1BN) |\
                                     PIN_OSPEED_VERYLOW(GPIOE_H_BRIDGE_MOT1BP) |\
                                     PIN_OSPEED_VERYLOW(GPIOE_H_BRIDGE_MOT1CN) |\
                                     PIN_OSPEED_VERYLOW(GPIOE_H_BRIDGE_MOT1CP) |\
                                     PIN_OSPEED_VERYLOW(GPIOE_CS_ENCODER3_N) |\
                                     PIN_OSPEED_VERYLOW(GPIOE_RESET_UC))
#define VAL_GPIOE_PUPDR             (PIN_PUPDR_FLOATING(GPIOE_UART_CMD_RX) |\
                                     PIN_PUPDR_FLOATING(GPIOE_UART_CMD_TX) |\
                                     PIN_PUPDR_FLOATING(GPIOE_EN_DRIVER_4) |\
                                     PIN_PUPDR_FLOATING(GPIOE_GPIO4_ESP32) |\
                                     PIN_PUPDR_PULLDOWN(GPIOE_PIN4) |       \
                                     PIN_PUPDR_FLOATING(GPIOE_SWD_UC_SWCLK) |\
                                     PIN_PUPDR_FLOATING(GPIOE_SWD_UC_SWDIO) |\
                                     PIN_PUPDR_FLOATING(GPIOE_CS_ENCODER2_N) |\
                                     PIN_PUPDR_FLOATING(GPIOE_H_BRIDGE_MOT1AN) |\
                                     PIN_PUPDR_FLOATING(GPIOE_H_BRIDGE_MOT1AP) |\
                                     PIN_PUPDR_FLOATING(GPIOE_H_BRIDGE_MOT1BN) |\
                                     PIN_PUPDR_FLOATING(GPIOE_H_BRIDGE_MOT1BP) |\
                                     PIN_PUPDR_FLOATING(GPIOE_H_BRIDGE_MOT1CN) |\
                                     PIN_PUPDR_FLOATING(GPIOE_H_BRIDGE_MOT1CP) |\
                                     PIN_PUPDR_FLOATING(GPIOE_CS_ENCODER3_N) |\
                                     PIN_PUPDR_FLOATING(GPIOE_RESET_UC))
#define VAL_GPIOE_ODR               (PIN_ODR_LOW(GPIOE_UART_CMD_RX) |       \
                                     PIN_ODR_LOW(GPIOE_UART_CMD_TX) |       \
                                     PIN_ODR_LOW(GPIOE_EN_DRIVER_4) |       \
                                     PIN_ODR_LOW(GPIOE_GPIO4_ESP32) |       \
                                     PIN_ODR_LOW(GPIOE_PIN4) |              \
                                     PIN_ODR_LOW(GPIOE_SWD_UC_SWCLK) |      \
                                     PIN_ODR_LOW(GPIOE_SWD_UC_SWDIO) |      \
                                     PIN_ODR_HIGH(GPIOE_CS_ENCODER2_N) |    \
                                     PIN_ODR_LOW(GPIOE_H_BRIDGE_MOT1AN) |   \
                                     PIN_ODR_LOW(GPIOE_H_BRIDGE_MOT1AP) |   \
                                     PIN_ODR_LOW(GPIOE_H_BRIDGE_MOT1BN) |   \
                                     PIN_ODR_LOW(GPIOE_H_BRIDGE_MOT1BP) |   \
                                     PIN_ODR_LOW(GPIOE_H_BRIDGE_MOT1CN) |   \
                                     PIN_ODR_LOW(GPIOE_H_BRIDGE_MOT1CP) |   \
                                     PIN_ODR_HIGH(GPIOE_CS_ENCODER3_N) |    \
                                     PIN_ODR_LOW(GPIOE_RESET_UC))
#define VAL_GPIOE_AFRL              (PIN_AFIO_AF(GPIOE_UART_CMD_RX, 8U) |   \
                                     PIN_AFIO_AF(GPIOE_UART_CMD_TX, 8U) |   \
                                     PIN_AFIO_AF(GPIOE_EN_DRIVER_4, 0U) |   \
                                     PIN_AFIO_AF(GPIOE_GPIO4_ESP32, 0U) |   \
                                     PIN_AFIO_AF(GPIOE_PIN4, 0U) |          \
                                     PIN_AFIO_AF(GPIOE_SWD_UC_SWCLK, 0U) |  \
                                     PIN_AFIO_AF(GPIOE_SWD_UC_SWDIO, 0U) |  \
                                     PIN_AFIO_AF(GPIOE_CS_ENCODER2_N, 0U))
#define VAL_GPIOE_AFRH              (PIN_AFIO_AF(GPIOE_H_BRIDGE_MOT1AN, 1U) |\
                                     PIN_AFIO_AF(GPIOE_H_BRIDGE_MOT1AP, 1U) |\
                                     PIN_AFIO_AF(GPIOE_H_BRIDGE_MOT1BN, 1U) |\
                                     PIN_AFIO_AF(GPIOE_H_BRIDGE_MOT1BP, 1U) |\
                                     PIN_AFIO_AF(GPIOE_H_BRIDGE_MOT1CN, 1U) |\
                                     PIN_AFIO_AF(GPIOE_H_BRIDGE_MOT1CP, 1U) |\
                                     PIN_AFIO_AF(GPIOE_CS_ENCODER3_N, 0U) | \
                                     PIN_AFIO_AF(GPIOE_RESET_UC, 0U))

/*
 * GPIOF setup:
 *
 * PF0  - GPIO13_ESP32              (output pushpull minimum).
 * PF1  - HUB_CONNECT               (output pushpull minimum).
 * PF2  - EN_DRIVER_2               (output pushpull minimum).
 * PF3  - BRUSHLESS_SENSE_MOT3C     (analog).
 * PF4  - BRUSHLESS_SENSE_MOT1B     (analog).
 * PF5  - BRUSHLESS_SENSE_MOT1C     (analog).
 * PF6  - BRUSHLESS_SENSE_MOT3A     (analog).
 * PF7  - BRUSHLESS_SENSE_MOT1A     (analog).
 * PF8  - BRUSHLESS_SENSE_MOT3B     (analog).
 * PF9  - BRUSHLESS_SENSE_MOT2A     (analog).
 * PF10 - BRUSHLESS_SENSE_MOT2B     (analog).
 * PF11 - PRIORITY_TO_VBUS          (output pushpull minimum).
 * PF12 - PIN12                     (input pulldown).
 * PF13 - CS_ENCODER4_N             (output pushpull minimum).
 * PF14 - I2C_SCL_PD_CONTROLLER     (alternate 4).
 * PF15 - EN_DRIVER_1               (output pushpull minimum).
 */
#define VAL_GPIOF_MODER             (PIN_MODE_OUTPUT(GPIOF_GPIO13_ESP32) |  \
                                     PIN_MODE_OUTPUT(GPIOF_HUB_CONNECT) |   \
                                     PIN_MODE_OUTPUT(GPIOF_EN_DRIVER_2) |   \
                                     PIN_MODE_ANALOG(GPIOF_BRUSHLESS_SENSE_MOT3C) |\
                                     PIN_MODE_ANALOG(GPIOF_BRUSHLESS_SENSE_MOT1B) |\
                                     PIN_MODE_ANALOG(GPIOF_BRUSHLESS_SENSE_MOT1C) |\
                                     PIN_MODE_ANALOG(GPIOF_BRUSHLESS_SENSE_MOT3A) |\
                                     PIN_MODE_ANALOG(GPIOF_BRUSHLESS_SENSE_MOT1A) |\
                                     PIN_MODE_ANALOG(GPIOF_BRUSHLESS_SENSE_MOT3B) |\
                                     PIN_MODE_ANALOG(GPIOF_BRUSHLESS_SENSE_MOT2A) |\
                                     PIN_MODE_ANALOG(GPIOF_BRUSHLESS_SENSE_MOT2B) |\
                                     PIN_MODE_OUTPUT(GPIOF_PRIORITY_TO_VBUS) |\
                                     PIN_MODE_INPUT(GPIOF_PIN12) |          \
                                     PIN_MODE_OUTPUT(GPIOF_CS_ENCODER4_N) | \
                                     PIN_MODE_ALTERNATE(GPIOF_I2C_SCL_PD_CONTROLLER) |\
                                     PIN_MODE_OUTPUT(GPIOF_EN_DRIVER_1))
#define VAL_GPIOF_OTYPER            (PIN_OTYPE_PUSHPULL(GPIOF_GPIO13_ESP32) |\
                                     PIN_OTYPE_PUSHPULL(GPIOF_HUB_CONNECT) |\
                                     PIN_OTYPE_PUSHPULL(GPIOF_EN_DRIVER_2) |\
                                     PIN_OTYPE_PUSHPULL(GPIOF_BRUSHLESS_SENSE_MOT3C) |\
                                     PIN_OTYPE_PUSHPULL(GPIOF_BRUSHLESS_SENSE_MOT1B) |\
                                     PIN_OTYPE_PUSHPULL(GPIOF_BRUSHLESS_SENSE_MOT1C) |\
                                     PIN_OTYPE_PUSHPULL(GPIOF_BRUSHLESS_SENSE_MOT3A) |\
                                     PIN_OTYPE_PUSHPULL(GPIOF_BRUSHLESS_SENSE_MOT1A) |\
                                     PIN_OTYPE_PUSHPULL(GPIOF_BRUSHLESS_SENSE_MOT3B) |\
                                     PIN_OTYPE_PUSHPULL(GPIOF_BRUSHLESS_SENSE_MOT2A) |\
                                     PIN_OTYPE_PUSHPULL(GPIOF_BRUSHLESS_SENSE_MOT2B) |\
                                     PIN_OTYPE_PUSHPULL(GPIOF_PRIORITY_TO_VBUS) |\
                                     PIN_OTYPE_PUSHPULL(GPIOF_PIN12) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOF_CS_ENCODER4_N) |\
                                     PIN_OTYPE_OPENDRAIN(GPIOF_I2C_SCL_PD_CONTROLLER) |\
                                     PIN_OTYPE_PUSHPULL(GPIOF_EN_DRIVER_1))
#define VAL_GPIOF_OSPEEDR           (PIN_OSPEED_VERYLOW(GPIOF_GPIO13_ESP32) |\
                                     PIN_OSPEED_VERYLOW(GPIOF_HUB_CONNECT) |\
                                     PIN_OSPEED_VERYLOW(GPIOF_EN_DRIVER_2) |\
                                     PIN_OSPEED_VERYLOW(GPIOF_BRUSHLESS_SENSE_MOT3C) |\
                                     PIN_OSPEED_VERYLOW(GPIOF_BRUSHLESS_SENSE_MOT1B) |\
                                     PIN_OSPEED_VERYLOW(GPIOF_BRUSHLESS_SENSE_MOT1C) |\
                                     PIN_OSPEED_VERYLOW(GPIOF_BRUSHLESS_SENSE_MOT3A) |\
                                     PIN_OSPEED_VERYLOW(GPIOF_BRUSHLESS_SENSE_MOT1A) |\
                                     PIN_OSPEED_VERYLOW(GPIOF_BRUSHLESS_SENSE_MOT3B) |\
                                     PIN_OSPEED_VERYLOW(GPIOF_BRUSHLESS_SENSE_MOT2A) |\
                                     PIN_OSPEED_VERYLOW(GPIOF_BRUSHLESS_SENSE_MOT2B) |\
                                     PIN_OSPEED_VERYLOW(GPIOF_PRIORITY_TO_VBUS) |\
                                     PIN_OSPEED_VERYLOW(GPIOF_PIN12) |      \
                                     PIN_OSPEED_VERYLOW(GPIOF_CS_ENCODER4_N) |\
                                     PIN_OSPEED_HIGH(GPIOF_I2C_SCL_PD_CONTROLLER) |\
                                     PIN_OSPEED_VERYLOW(GPIOF_EN_DRIVER_1))
#define VAL_GPIOF_PUPDR             (PIN_PUPDR_FLOATING(GPIOF_GPIO13_ESP32) |\
                                     PIN_PUPDR_FLOATING(GPIOF_HUB_CONNECT) |\
                                     PIN_PUPDR_FLOATING(GPIOF_EN_DRIVER_2) |\
                                     PIN_PUPDR_FLOATING(GPIOF_BRUSHLESS_SENSE_MOT3C) |\
                                     PIN_PUPDR_FLOATING(GPIOF_BRUSHLESS_SENSE_MOT1B) |\
                                     PIN_PUPDR_FLOATING(GPIOF_BRUSHLESS_SENSE_MOT1C) |\
                                     PIN_PUPDR_FLOATING(GPIOF_BRUSHLESS_SENSE_MOT3A) |\
                                     PIN_PUPDR_FLOATING(GPIOF_BRUSHLESS_SENSE_MOT1A) |\
                                     PIN_PUPDR_FLOATING(GPIOF_BRUSHLESS_SENSE_MOT3B) |\
                                     PIN_PUPDR_FLOATING(GPIOF_BRUSHLESS_SENSE_MOT2A) |\
                                     PIN_PUPDR_FLOATING(GPIOF_BRUSHLESS_SENSE_MOT2B) |\
                                     PIN_PUPDR_FLOATING(GPIOF_PRIORITY_TO_VBUS) |\
                                     PIN_PUPDR_PULLDOWN(GPIOF_PIN12) |      \
                                     PIN_PUPDR_FLOATING(GPIOF_CS_ENCODER4_N) |\
                                     PIN_PUPDR_FLOATING(GPIOF_I2C_SCL_PD_CONTROLLER) |\
                                     PIN_PUPDR_FLOATING(GPIOF_EN_DRIVER_1))
#define VAL_GPIOF_ODR               (PIN_ODR_LOW(GPIOF_GPIO13_ESP32) |      \
                                     PIN_ODR_LOW(GPIOF_HUB_CONNECT) |       \
                                     PIN_ODR_LOW(GPIOF_EN_DRIVER_2) |       \
                                     PIN_ODR_LOW(GPIOF_BRUSHLESS_SENSE_MOT3C) |\
                                     PIN_ODR_LOW(GPIOF_BRUSHLESS_SENSE_MOT1B) |\
                                     PIN_ODR_LOW(GPIOF_BRUSHLESS_SENSE_MOT1C) |\
                                     PIN_ODR_LOW(GPIOF_BRUSHLESS_SENSE_MOT3A) |\
                                     PIN_ODR_LOW(GPIOF_BRUSHLESS_SENSE_MOT1A) |\
                                     PIN_ODR_LOW(GPIOF_BRUSHLESS_SENSE_MOT3B) |\
                                     PIN_ODR_LOW(GPIOF_BRUSHLESS_SENSE_MOT2A) |\
                                     PIN_ODR_LOW(GPIOF_BRUSHLESS_SENSE_MOT2B) |\
                                     PIN_ODR_HIGH(GPIOF_PRIORITY_TO_VBUS) | \
                                     PIN_ODR_LOW(GPIOF_PIN12) |             \
                                     PIN_ODR_HIGH(GPIOF_CS_ENCODER4_N) |    \
                                     PIN_ODR_LOW(GPIOF_I2C_SCL_PD_CONTROLLER) |\
                                     PIN_ODR_LOW(GPIOF_EN_DRIVER_1))
#define VAL_GPIOF_AFRL              (PIN_AFIO_AF(GPIOF_GPIO13_ESP32, 0U) |  \
                                     PIN_AFIO_AF(GPIOF_HUB_CONNECT, 0U) |   \
                                     PIN_AFIO_AF(GPIOF_EN_DRIVER_2, 0U) |   \
                                     PIN_AFIO_AF(GPIOF_BRUSHLESS_SENSE_MOT3C, 0U) |\
                                     PIN_AFIO_AF(GPIOF_BRUSHLESS_SENSE_MOT1B, 0U) |\
                                     PIN_AFIO_AF(GPIOF_BRUSHLESS_SENSE_MOT1C, 0U) |\
                                     PIN_AFIO_AF(GPIOF_BRUSHLESS_SENSE_MOT3A, 0U) |\
                                     PIN_AFIO_AF(GPIOF_BRUSHLESS_SENSE_MOT1A, 0U))
#define VAL_GPIOF_AFRH              (PIN_AFIO_AF(GPIOF_BRUSHLESS_SENSE_MOT3B, 0U) |\
                                     PIN_AFIO_AF(GPIOF_BRUSHLESS_SENSE_MOT2A, 0U) |\
                                     PIN_AFIO_AF(GPIOF_BRUSHLESS_SENSE_MOT2B, 0U) |\
                                     PIN_AFIO_AF(GPIOF_PRIORITY_TO_VBUS, 0U) |\
                                     PIN_AFIO_AF(GPIOF_PIN12, 0U) |         \
                                     PIN_AFIO_AF(GPIOF_CS_ENCODER4_N, 0U) | \
                                     PIN_AFIO_AF(GPIOF_I2C_SCL_PD_CONTROLLER, 4U) |\
                                     PIN_AFIO_AF(GPIOF_EN_DRIVER_1, 0U))

/*
 * GPIOG setup:
 *
 * PG0  - FAULT_DRIVER_1_n          (input pullup).
 * PG1  - FAULT_DRIVER_2_N          (input pullup).
 * PG2  - FAULT_DRIVER_4_N          (input pullup).
 * PG3  - FAULT_DRIVER_3_N          (input pullup).
 * PG4  - VBUS_HOST                 (input floating).
 * PG5  - INT_PD_CTRL_N             (input pullup).
 * PG6  - VBUS_DEVICES              (output pushpull minimum).
 * PG7  - PIN7                      (input floating).
 * PG8  - BYPASS_HUB_N              (output pushpull minimum).
 * PG9  - EN_EXTENSION_BOTTOM       (output pushpull minimum).
 * PG10 - PWR_ON_BTN_STATE_N        (input pullup).
 * PG11 - EN_DRIVER_3               (output pushpull minimum).
 * PG12 - ENCODERS_GATE_DRIVERS_SPI6_MISO(alternate 5).
 * PG13 - ENCODERS_GATE_DRIVERS_SPI6_SCK(alternate 5).
 * PG14 - ENCODERS_GATE_DRIVERS_SPI6_MOSI(alternate 5).
 * PG15 - PIN15                     (input pulldown).
 */
#define VAL_GPIOG_MODER             (PIN_MODE_INPUT(GPIOG_FAULT_DRIVER_1_n) |\
                                     PIN_MODE_INPUT(GPIOG_FAULT_DRIVER_2_N) |\
                                     PIN_MODE_INPUT(GPIOG_FAULT_DRIVER_4_N) |\
                                     PIN_MODE_INPUT(GPIOG_FAULT_DRIVER_3_N) |\
                                     PIN_MODE_INPUT(GPIOG_VBUS_HOST) |      \
                                     PIN_MODE_INPUT(GPIOG_INT_PD_CTRL_N) |  \
                                     PIN_MODE_OUTPUT(GPIOG_VBUS_DEVICES) |  \
                                     PIN_MODE_INPUT(GPIOG_PIN7) |           \
                                     PIN_MODE_OUTPUT(GPIOG_BYPASS_HUB_N) |  \
                                     PIN_MODE_OUTPUT(GPIOG_EN_EXTENSION_BOTTOM) |\
                                     PIN_MODE_INPUT(GPIOG_PWR_ON_BTN_STATE_N) |\
                                     PIN_MODE_OUTPUT(GPIOG_EN_DRIVER_3) |   \
                                     PIN_MODE_ALTERNATE(GPIOG_ENCODERS_GATE_DRIVERS_SPI6_MISO) |\
                                     PIN_MODE_ALTERNATE(GPIOG_ENCODERS_GATE_DRIVERS_SPI6_SCK) |\
                                     PIN_MODE_ALTERNATE(GPIOG_ENCODERS_GATE_DRIVERS_SPI6_MOSI) |\
                                     PIN_MODE_INPUT(GPIOG_PIN15))
#define VAL_GPIOG_OTYPER            (PIN_OTYPE_PUSHPULL(GPIOG_FAULT_DRIVER_1_n) |\
                                     PIN_OTYPE_PUSHPULL(GPIOG_FAULT_DRIVER_2_N) |\
                                     PIN_OTYPE_PUSHPULL(GPIOG_FAULT_DRIVER_4_N) |\
                                     PIN_OTYPE_PUSHPULL(GPIOG_FAULT_DRIVER_3_N) |\
                                     PIN_OTYPE_PUSHPULL(GPIOG_VBUS_HOST) |  \
                                     PIN_OTYPE_PUSHPULL(GPIOG_INT_PD_CTRL_N) |\
                                     PIN_OTYPE_PUSHPULL(GPIOG_VBUS_DEVICES) |\
                                     PIN_OTYPE_PUSHPULL(GPIOG_PIN7) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOG_BYPASS_HUB_N) |\
                                     PIN_OTYPE_PUSHPULL(GPIOG_EN_EXTENSION_BOTTOM) |\
                                     PIN_OTYPE_PUSHPULL(GPIOG_PWR_ON_BTN_STATE_N) |\
                                     PIN_OTYPE_PUSHPULL(GPIOG_EN_DRIVER_3) |\
                                     PIN_OTYPE_PUSHPULL(GPIOG_ENCODERS_GATE_DRIVERS_SPI6_MISO) |\
                                     PIN_OTYPE_PUSHPULL(GPIOG_ENCODERS_GATE_DRIVERS_SPI6_SCK) |\
                                     PIN_OTYPE_PUSHPULL(GPIOG_ENCODERS_GATE_DRIVERS_SPI6_MOSI) |\
                                     PIN_OTYPE_PUSHPULL(GPIOG_PIN15))
#define VAL_GPIOG_OSPEEDR           (PIN_OSPEED_VERYLOW(GPIOG_FAULT_DRIVER_1_n) |\
                                     PIN_OSPEED_VERYLOW(GPIOG_FAULT_DRIVER_2_N) |\
                                     PIN_OSPEED_VERYLOW(GPIOG_FAULT_DRIVER_4_N) |\
                                     PIN_OSPEED_VERYLOW(GPIOG_FAULT_DRIVER_3_N) |\
                                     PIN_OSPEED_VERYLOW(GPIOG_VBUS_HOST) |  \
                                     PIN_OSPEED_VERYLOW(GPIOG_INT_PD_CTRL_N) |\
                                     PIN_OSPEED_VERYLOW(GPIOG_VBUS_DEVICES) |\
                                     PIN_OSPEED_VERYLOW(GPIOG_PIN7) |       \
                                     PIN_OSPEED_VERYLOW(GPIOG_BYPASS_HUB_N) |\
                                     PIN_OSPEED_VERYLOW(GPIOG_EN_EXTENSION_BOTTOM) |\
                                     PIN_OSPEED_VERYLOW(GPIOG_PWR_ON_BTN_STATE_N) |\
                                     PIN_OSPEED_VERYLOW(GPIOG_EN_DRIVER_3) |\
                                     PIN_OSPEED_VERYLOW(GPIOG_ENCODERS_GATE_DRIVERS_SPI6_MISO) |\
                                     PIN_OSPEED_VERYLOW(GPIOG_ENCODERS_GATE_DRIVERS_SPI6_SCK) |\
                                     PIN_OSPEED_VERYLOW(GPIOG_ENCODERS_GATE_DRIVERS_SPI6_MOSI) |\
                                     PIN_OSPEED_VERYLOW(GPIOG_PIN15))
#define VAL_GPIOG_PUPDR             (PIN_PUPDR_PULLUP(GPIOG_FAULT_DRIVER_1_n) |\
                                     PIN_PUPDR_PULLUP(GPIOG_FAULT_DRIVER_2_N) |\
                                     PIN_PUPDR_PULLUP(GPIOG_FAULT_DRIVER_4_N) |\
                                     PIN_PUPDR_PULLUP(GPIOG_FAULT_DRIVER_3_N) |\
                                     PIN_PUPDR_FLOATING(GPIOG_VBUS_HOST) |  \
                                     PIN_PUPDR_PULLUP(GPIOG_INT_PD_CTRL_N) |\
                                     PIN_PUPDR_FLOATING(GPIOG_VBUS_DEVICES) |\
                                     PIN_PUPDR_FLOATING(GPIOG_PIN7) |       \
                                     PIN_PUPDR_FLOATING(GPIOG_BYPASS_HUB_N) |\
                                     PIN_PUPDR_FLOATING(GPIOG_EN_EXTENSION_BOTTOM) |\
                                     PIN_PUPDR_PULLUP(GPIOG_PWR_ON_BTN_STATE_N) |\
                                     PIN_PUPDR_FLOATING(GPIOG_EN_DRIVER_3) |\
                                     PIN_PUPDR_FLOATING(GPIOG_ENCODERS_GATE_DRIVERS_SPI6_MISO) |\
                                     PIN_PUPDR_FLOATING(GPIOG_ENCODERS_GATE_DRIVERS_SPI6_SCK) |\
                                     PIN_PUPDR_FLOATING(GPIOG_ENCODERS_GATE_DRIVERS_SPI6_MOSI) |\
                                     PIN_PUPDR_PULLDOWN(GPIOG_PIN15))
#define VAL_GPIOG_ODR               (PIN_ODR_LOW(GPIOG_FAULT_DRIVER_1_n) |  \
                                     PIN_ODR_LOW(GPIOG_FAULT_DRIVER_2_N) |  \
                                     PIN_ODR_LOW(GPIOG_FAULT_DRIVER_4_N) |  \
                                     PIN_ODR_LOW(GPIOG_FAULT_DRIVER_3_N) |  \
                                     PIN_ODR_LOW(GPIOG_VBUS_HOST) |         \
                                     PIN_ODR_LOW(GPIOG_INT_PD_CTRL_N) |     \
                                     PIN_ODR_LOW(GPIOG_VBUS_DEVICES) |      \
                                     PIN_ODR_LOW(GPIOG_PIN7) |              \
                                     PIN_ODR_LOW(GPIOG_BYPASS_HUB_N) |      \
                                     PIN_ODR_LOW(GPIOG_EN_EXTENSION_BOTTOM) |\
                                     PIN_ODR_LOW(GPIOG_PWR_ON_BTN_STATE_N) |\
                                     PIN_ODR_LOW(GPIOG_EN_DRIVER_3) |       \
                                     PIN_ODR_LOW(GPIOG_ENCODERS_GATE_DRIVERS_SPI6_MISO) |\
                                     PIN_ODR_LOW(GPIOG_ENCODERS_GATE_DRIVERS_SPI6_SCK) |\
                                     PIN_ODR_LOW(GPIOG_ENCODERS_GATE_DRIVERS_SPI6_MOSI) |\
                                     PIN_ODR_LOW(GPIOG_PIN15))
#define VAL_GPIOG_AFRL              (PIN_AFIO_AF(GPIOG_FAULT_DRIVER_1_n, 0U) |\
                                     PIN_AFIO_AF(GPIOG_FAULT_DRIVER_2_N, 0U) |\
                                     PIN_AFIO_AF(GPIOG_FAULT_DRIVER_4_N, 0U) |\
                                     PIN_AFIO_AF(GPIOG_FAULT_DRIVER_3_N, 0U) |\
                                     PIN_AFIO_AF(GPIOG_VBUS_HOST, 0U) |     \
                                     PIN_AFIO_AF(GPIOG_INT_PD_CTRL_N, 0U) | \
                                     PIN_AFIO_AF(GPIOG_VBUS_DEVICES, 0U) |  \
                                     PIN_AFIO_AF(GPIOG_PIN7, 0U))
#define VAL_GPIOG_AFRH              (PIN_AFIO_AF(GPIOG_BYPASS_HUB_N, 0U) |  \
                                     PIN_AFIO_AF(GPIOG_EN_EXTENSION_BOTTOM, 0U) |\
                                     PIN_AFIO_AF(GPIOG_PWR_ON_BTN_STATE_N, 0U) |\
                                     PIN_AFIO_AF(GPIOG_EN_DRIVER_3, 0U) |   \
                                     PIN_AFIO_AF(GPIOG_ENCODERS_GATE_DRIVERS_SPI6_MISO, 5U) |\
                                     PIN_AFIO_AF(GPIOG_ENCODERS_GATE_DRIVERS_SPI6_SCK, 5U) |\
                                     PIN_AFIO_AF(GPIOG_ENCODERS_GATE_DRIVERS_SPI6_MOSI, 5U) |\
                                     PIN_AFIO_AF(GPIOG_PIN15, 0U))

/*
 * GPIOH setup:
 *
 * PH0  - OSC_IN                    (input floating).
 * PH1  - OSC_OUT                   (input floating).
 * PH2  - PIN2                      (input pulldown).
 * PH3  - PIN3                      (input pulldown).
 * PH4  - PIN4                      (input pulldown).
 * PH5  - PIN5                      (input pulldown).
 * PH6  - PIN6                      (input pulldown).
 * PH7  - PIN7                      (input pulldown).
 * PH8  - PIN8                      (input pulldown).
 * PH9  - PIN9                      (input pulldown).
 * PH10 - PIN10                     (input pulldown).
 * PH11 - PIN11                     (input pulldown).
 * PH12 - PIN12                     (input pulldown).
 * PH13 - PIN13                     (input pulldown).
 * PH14 - PIN14                     (input pulldown).
 * PH15 - PIN15                     (input pulldown).
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
#define VAL_GPIOH_OSPEEDR           (PIN_OSPEED_VERYLOW(GPIOH_OSC_IN) |     \
                                     PIN_OSPEED_VERYLOW(GPIOH_OSC_OUT) |    \
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
                                     PIN_PUPDR_PULLDOWN(GPIOH_PIN2) |       \
                                     PIN_PUPDR_PULLDOWN(GPIOH_PIN3) |       \
                                     PIN_PUPDR_PULLDOWN(GPIOH_PIN4) |       \
                                     PIN_PUPDR_PULLDOWN(GPIOH_PIN5) |       \
                                     PIN_PUPDR_PULLDOWN(GPIOH_PIN6) |       \
                                     PIN_PUPDR_PULLDOWN(GPIOH_PIN7) |       \
                                     PIN_PUPDR_PULLDOWN(GPIOH_PIN8) |       \
                                     PIN_PUPDR_PULLDOWN(GPIOH_PIN9) |       \
                                     PIN_PUPDR_PULLDOWN(GPIOH_PIN10) |      \
                                     PIN_PUPDR_PULLDOWN(GPIOH_PIN11) |      \
                                     PIN_PUPDR_PULLDOWN(GPIOH_PIN12) |      \
                                     PIN_PUPDR_PULLDOWN(GPIOH_PIN13) |      \
                                     PIN_PUPDR_PULLDOWN(GPIOH_PIN14) |      \
                                     PIN_PUPDR_PULLDOWN(GPIOH_PIN15))
#define VAL_GPIOH_ODR               (PIN_ODR_LOW(GPIOH_OSC_IN) |            \
                                     PIN_ODR_LOW(GPIOH_OSC_OUT) |           \
                                     PIN_ODR_LOW(GPIOH_PIN2) |              \
                                     PIN_ODR_LOW(GPIOH_PIN3) |              \
                                     PIN_ODR_LOW(GPIOH_PIN4) |              \
                                     PIN_ODR_LOW(GPIOH_PIN5) |              \
                                     PIN_ODR_LOW(GPIOH_PIN6) |              \
                                     PIN_ODR_LOW(GPIOH_PIN7) |              \
                                     PIN_ODR_LOW(GPIOH_PIN8) |              \
                                     PIN_ODR_LOW(GPIOH_PIN9) |              \
                                     PIN_ODR_LOW(GPIOH_PIN10) |             \
                                     PIN_ODR_LOW(GPIOH_PIN11) |             \
                                     PIN_ODR_LOW(GPIOH_PIN12) |             \
                                     PIN_ODR_LOW(GPIOH_PIN13) |             \
                                     PIN_ODR_LOW(GPIOH_PIN14) |             \
                                     PIN_ODR_LOW(GPIOH_PIN15))
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

/*
 * GPIOI setup:
 *
 * PI0  - PIN0                      (input pulldown).
 * PI1  - PIN1                      (input pulldown).
 * PI2  - PIN2                      (input pulldown).
 * PI3  - PIN3                      (input pulldown).
 * PI4  - PIN4                      (input pulldown).
 * PI5  - PIN5                      (input pulldown).
 * PI6  - PIN6                      (input pulldown).
 * PI7  - PIN7                      (input pulldown).
 * PI8  - PIN8                      (input pulldown).
 * PI9  - PIN9                      (input pulldown).
 * PI10 - PIN10                     (input pulldown).
 * PI11 - PIN11                     (input pulldown).
 * PI12 - PIN12                     (input pulldown).
 * PI13 - PIN13                     (input pulldown).
 * PI14 - PIN14                     (input pulldown).
 * PI15 - PIN15                     (input pulldown).
 */
#define VAL_GPIOI_MODER             (PIN_MODE_INPUT(GPIOI_PIN0) |           \
                                     PIN_MODE_INPUT(GPIOI_PIN1) |           \
                                     PIN_MODE_INPUT(GPIOI_PIN2) |           \
                                     PIN_MODE_INPUT(GPIOI_PIN3) |           \
                                     PIN_MODE_INPUT(GPIOI_PIN4) |           \
                                     PIN_MODE_INPUT(GPIOI_PIN5) |           \
                                     PIN_MODE_INPUT(GPIOI_PIN6) |           \
                                     PIN_MODE_INPUT(GPIOI_PIN7) |           \
                                     PIN_MODE_INPUT(GPIOI_PIN8) |           \
                                     PIN_MODE_INPUT(GPIOI_PIN9) |           \
                                     PIN_MODE_INPUT(GPIOI_PIN10) |          \
                                     PIN_MODE_INPUT(GPIOI_PIN11) |          \
                                     PIN_MODE_INPUT(GPIOI_PIN12) |          \
                                     PIN_MODE_INPUT(GPIOI_PIN13) |          \
                                     PIN_MODE_INPUT(GPIOI_PIN14) |          \
                                     PIN_MODE_INPUT(GPIOI_PIN15))
#define VAL_GPIOI_OTYPER            (PIN_OTYPE_PUSHPULL(GPIOI_PIN0) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOI_PIN1) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOI_PIN2) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOI_PIN3) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOI_PIN4) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOI_PIN5) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOI_PIN6) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOI_PIN7) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOI_PIN8) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOI_PIN9) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOI_PIN10) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOI_PIN11) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOI_PIN12) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOI_PIN13) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOI_PIN14) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOI_PIN15))
#define VAL_GPIOI_OSPEEDR           (PIN_OSPEED_VERYLOW(GPIOI_PIN0) |       \
                                     PIN_OSPEED_VERYLOW(GPIOI_PIN1) |       \
                                     PIN_OSPEED_VERYLOW(GPIOI_PIN2) |       \
                                     PIN_OSPEED_VERYLOW(GPIOI_PIN3) |       \
                                     PIN_OSPEED_VERYLOW(GPIOI_PIN4) |       \
                                     PIN_OSPEED_VERYLOW(GPIOI_PIN5) |       \
                                     PIN_OSPEED_VERYLOW(GPIOI_PIN6) |       \
                                     PIN_OSPEED_VERYLOW(GPIOI_PIN7) |       \
                                     PIN_OSPEED_VERYLOW(GPIOI_PIN8) |       \
                                     PIN_OSPEED_VERYLOW(GPIOI_PIN9) |       \
                                     PIN_OSPEED_VERYLOW(GPIOI_PIN10) |      \
                                     PIN_OSPEED_VERYLOW(GPIOI_PIN11) |      \
                                     PIN_OSPEED_VERYLOW(GPIOI_PIN12) |      \
                                     PIN_OSPEED_VERYLOW(GPIOI_PIN13) |      \
                                     PIN_OSPEED_VERYLOW(GPIOI_PIN14) |      \
                                     PIN_OSPEED_VERYLOW(GPIOI_PIN15))
#define VAL_GPIOI_PUPDR             (PIN_PUPDR_PULLDOWN(GPIOI_PIN0) |       \
                                     PIN_PUPDR_PULLDOWN(GPIOI_PIN1) |       \
                                     PIN_PUPDR_PULLDOWN(GPIOI_PIN2) |       \
                                     PIN_PUPDR_PULLDOWN(GPIOI_PIN3) |       \
                                     PIN_PUPDR_PULLDOWN(GPIOI_PIN4) |       \
                                     PIN_PUPDR_PULLDOWN(GPIOI_PIN5) |       \
                                     PIN_PUPDR_PULLDOWN(GPIOI_PIN6) |       \
                                     PIN_PUPDR_PULLDOWN(GPIOI_PIN7) |       \
                                     PIN_PUPDR_PULLDOWN(GPIOI_PIN8) |       \
                                     PIN_PUPDR_PULLDOWN(GPIOI_PIN9) |       \
                                     PIN_PUPDR_PULLDOWN(GPIOI_PIN10) |      \
                                     PIN_PUPDR_PULLDOWN(GPIOI_PIN11) |      \
                                     PIN_PUPDR_PULLDOWN(GPIOI_PIN12) |      \
                                     PIN_PUPDR_PULLDOWN(GPIOI_PIN13) |      \
                                     PIN_PUPDR_PULLDOWN(GPIOI_PIN14) |      \
                                     PIN_PUPDR_PULLDOWN(GPIOI_PIN15))
#define VAL_GPIOI_ODR               (PIN_ODR_LOW(GPIOI_PIN0) |              \
                                     PIN_ODR_LOW(GPIOI_PIN1) |              \
                                     PIN_ODR_LOW(GPIOI_PIN2) |              \
                                     PIN_ODR_LOW(GPIOI_PIN3) |              \
                                     PIN_ODR_LOW(GPIOI_PIN4) |              \
                                     PIN_ODR_LOW(GPIOI_PIN5) |              \
                                     PIN_ODR_LOW(GPIOI_PIN6) |              \
                                     PIN_ODR_LOW(GPIOI_PIN7) |              \
                                     PIN_ODR_LOW(GPIOI_PIN8) |              \
                                     PIN_ODR_LOW(GPIOI_PIN9) |              \
                                     PIN_ODR_LOW(GPIOI_PIN10) |             \
                                     PIN_ODR_LOW(GPIOI_PIN11) |             \
                                     PIN_ODR_LOW(GPIOI_PIN12) |             \
                                     PIN_ODR_LOW(GPIOI_PIN13) |             \
                                     PIN_ODR_LOW(GPIOI_PIN14) |             \
                                     PIN_ODR_LOW(GPIOI_PIN15))
#define VAL_GPIOI_AFRL              (PIN_AFIO_AF(GPIOI_PIN0, 0U) |          \
                                     PIN_AFIO_AF(GPIOI_PIN1, 0U) |          \
                                     PIN_AFIO_AF(GPIOI_PIN2, 0U) |          \
                                     PIN_AFIO_AF(GPIOI_PIN3, 0U) |          \
                                     PIN_AFIO_AF(GPIOI_PIN4, 0U) |          \
                                     PIN_AFIO_AF(GPIOI_PIN5, 0U) |          \
                                     PIN_AFIO_AF(GPIOI_PIN6, 0U) |          \
                                     PIN_AFIO_AF(GPIOI_PIN7, 0U))
#define VAL_GPIOI_AFRH              (PIN_AFIO_AF(GPIOI_PIN8, 0U) |          \
                                     PIN_AFIO_AF(GPIOI_PIN9, 0U) |          \
                                     PIN_AFIO_AF(GPIOI_PIN10, 0U) |         \
                                     PIN_AFIO_AF(GPIOI_PIN11, 0U) |         \
                                     PIN_AFIO_AF(GPIOI_PIN12, 0U) |         \
                                     PIN_AFIO_AF(GPIOI_PIN13, 0U) |         \
                                     PIN_AFIO_AF(GPIOI_PIN14, 0U) |         \
                                     PIN_AFIO_AF(GPIOI_PIN15, 0U))

/*
 * GPIOJ setup:
 *
 * PJ0  - PIN0                      (input pulldown).
 * PJ1  - PIN1                      (input pulldown).
 * PJ2  - PIN2                      (input pulldown).
 * PJ3  - PIN3                      (input pulldown).
 * PJ4  - PIN4                      (input pulldown).
 * PJ5  - PIN5                      (input pulldown).
 * PJ6  - PIN6                      (input pulldown).
 * PJ7  - PIN7                      (input pulldown).
 * PJ8  - PIN8                      (input pulldown).
 * PJ9  - PIN9                      (input pulldown).
 * PJ10 - PIN10                     (input pulldown).
 * PJ11 - PIN11                     (input pulldown).
 * PJ12 - PIN12                     (input pulldown).
 * PJ13 - PIN13                     (input pulldown).
 * PJ14 - PIN14                     (input pulldown).
 * PJ15 - PIN15                     (input pulldown).
 */
#define VAL_GPIOJ_MODER             (PIN_MODE_INPUT(GPIOJ_PIN0) |           \
                                     PIN_MODE_INPUT(GPIOJ_PIN1) |           \
                                     PIN_MODE_INPUT(GPIOJ_PIN2) |           \
                                     PIN_MODE_INPUT(GPIOJ_PIN3) |           \
                                     PIN_MODE_INPUT(GPIOJ_PIN4) |           \
                                     PIN_MODE_INPUT(GPIOJ_PIN5) |           \
                                     PIN_MODE_INPUT(GPIOJ_PIN6) |           \
                                     PIN_MODE_INPUT(GPIOJ_PIN7) |           \
                                     PIN_MODE_INPUT(GPIOJ_PIN8) |           \
                                     PIN_MODE_INPUT(GPIOJ_PIN9) |           \
                                     PIN_MODE_INPUT(GPIOJ_PIN10) |          \
                                     PIN_MODE_INPUT(GPIOJ_PIN11) |          \
                                     PIN_MODE_INPUT(GPIOJ_PIN12) |          \
                                     PIN_MODE_INPUT(GPIOJ_PIN13) |          \
                                     PIN_MODE_INPUT(GPIOJ_PIN14) |          \
                                     PIN_MODE_INPUT(GPIOJ_PIN15))
#define VAL_GPIOJ_OTYPER            (PIN_OTYPE_PUSHPULL(GPIOJ_PIN0) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOJ_PIN1) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOJ_PIN2) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOJ_PIN3) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOJ_PIN4) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOJ_PIN5) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOJ_PIN6) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOJ_PIN7) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOJ_PIN8) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOJ_PIN9) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOJ_PIN10) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOJ_PIN11) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOJ_PIN12) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOJ_PIN13) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOJ_PIN14) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOJ_PIN15))
#define VAL_GPIOJ_OSPEEDR           (PIN_OSPEED_VERYLOW(GPIOJ_PIN0) |       \
                                     PIN_OSPEED_VERYLOW(GPIOJ_PIN1) |       \
                                     PIN_OSPEED_VERYLOW(GPIOJ_PIN2) |       \
                                     PIN_OSPEED_VERYLOW(GPIOJ_PIN3) |       \
                                     PIN_OSPEED_VERYLOW(GPIOJ_PIN4) |       \
                                     PIN_OSPEED_VERYLOW(GPIOJ_PIN5) |       \
                                     PIN_OSPEED_VERYLOW(GPIOJ_PIN6) |       \
                                     PIN_OSPEED_VERYLOW(GPIOJ_PIN7) |       \
                                     PIN_OSPEED_VERYLOW(GPIOJ_PIN8) |       \
                                     PIN_OSPEED_VERYLOW(GPIOJ_PIN9) |       \
                                     PIN_OSPEED_VERYLOW(GPIOJ_PIN10) |      \
                                     PIN_OSPEED_VERYLOW(GPIOJ_PIN11) |      \
                                     PIN_OSPEED_VERYLOW(GPIOJ_PIN12) |      \
                                     PIN_OSPEED_VERYLOW(GPIOJ_PIN13) |      \
                                     PIN_OSPEED_VERYLOW(GPIOJ_PIN14) |      \
                                     PIN_OSPEED_VERYLOW(GPIOJ_PIN15))
#define VAL_GPIOJ_PUPDR             (PIN_PUPDR_PULLDOWN(GPIOJ_PIN0) |       \
                                     PIN_PUPDR_PULLDOWN(GPIOJ_PIN1) |       \
                                     PIN_PUPDR_PULLDOWN(GPIOJ_PIN2) |       \
                                     PIN_PUPDR_PULLDOWN(GPIOJ_PIN3) |       \
                                     PIN_PUPDR_PULLDOWN(GPIOJ_PIN4) |       \
                                     PIN_PUPDR_PULLDOWN(GPIOJ_PIN5) |       \
                                     PIN_PUPDR_PULLDOWN(GPIOJ_PIN6) |       \
                                     PIN_PUPDR_PULLDOWN(GPIOJ_PIN7) |       \
                                     PIN_PUPDR_PULLDOWN(GPIOJ_PIN8) |       \
                                     PIN_PUPDR_PULLDOWN(GPIOJ_PIN9) |       \
                                     PIN_PUPDR_PULLDOWN(GPIOJ_PIN10) |      \
                                     PIN_PUPDR_PULLDOWN(GPIOJ_PIN11) |      \
                                     PIN_PUPDR_PULLDOWN(GPIOJ_PIN12) |      \
                                     PIN_PUPDR_PULLDOWN(GPIOJ_PIN13) |      \
                                     PIN_PUPDR_PULLDOWN(GPIOJ_PIN14) |      \
                                     PIN_PUPDR_PULLDOWN(GPIOJ_PIN15))
#define VAL_GPIOJ_ODR               (PIN_ODR_LOW(GPIOJ_PIN0) |              \
                                     PIN_ODR_LOW(GPIOJ_PIN1) |              \
                                     PIN_ODR_LOW(GPIOJ_PIN2) |              \
                                     PIN_ODR_LOW(GPIOJ_PIN3) |              \
                                     PIN_ODR_LOW(GPIOJ_PIN4) |              \
                                     PIN_ODR_LOW(GPIOJ_PIN5) |              \
                                     PIN_ODR_LOW(GPIOJ_PIN6) |              \
                                     PIN_ODR_LOW(GPIOJ_PIN7) |              \
                                     PIN_ODR_LOW(GPIOJ_PIN8) |              \
                                     PIN_ODR_LOW(GPIOJ_PIN9) |              \
                                     PIN_ODR_LOW(GPIOJ_PIN10) |             \
                                     PIN_ODR_LOW(GPIOJ_PIN11) |             \
                                     PIN_ODR_LOW(GPIOJ_PIN12) |             \
                                     PIN_ODR_LOW(GPIOJ_PIN13) |             \
                                     PIN_ODR_LOW(GPIOJ_PIN14) |             \
                                     PIN_ODR_LOW(GPIOJ_PIN15))
#define VAL_GPIOJ_AFRL              (PIN_AFIO_AF(GPIOJ_PIN0, 0U) |          \
                                     PIN_AFIO_AF(GPIOJ_PIN1, 0U) |          \
                                     PIN_AFIO_AF(GPIOJ_PIN2, 0U) |          \
                                     PIN_AFIO_AF(GPIOJ_PIN3, 0U) |          \
                                     PIN_AFIO_AF(GPIOJ_PIN4, 0U) |          \
                                     PIN_AFIO_AF(GPIOJ_PIN5, 0U) |          \
                                     PIN_AFIO_AF(GPIOJ_PIN6, 0U) |          \
                                     PIN_AFIO_AF(GPIOJ_PIN7, 0U))
#define VAL_GPIOJ_AFRH              (PIN_AFIO_AF(GPIOJ_PIN8, 0U) |          \
                                     PIN_AFIO_AF(GPIOJ_PIN9, 0U) |          \
                                     PIN_AFIO_AF(GPIOJ_PIN10, 0U) |         \
                                     PIN_AFIO_AF(GPIOJ_PIN11, 0U) |         \
                                     PIN_AFIO_AF(GPIOJ_PIN12, 0U) |         \
                                     PIN_AFIO_AF(GPIOJ_PIN13, 0U) |         \
                                     PIN_AFIO_AF(GPIOJ_PIN14, 0U) |         \
                                     PIN_AFIO_AF(GPIOJ_PIN15, 0U))

/*
 * GPIOK setup:
 *
 * PK0  - PIN0                      (input pulldown).
 * PK1  - PIN1                      (input pulldown).
 * PK2  - PIN2                      (input pulldown).
 * PK3  - PIN3                      (input pulldown).
 * PK4  - PIN4                      (input pulldown).
 * PK5  - PIN5                      (input pulldown).
 * PK6  - PIN6                      (input pulldown).
 * PK7  - PIN7                      (input pulldown).
 * PK8  - PIN8                      (input pulldown).
 * PK9  - PIN9                      (input pulldown).
 * PK10 - PIN10                     (input pulldown).
 * PK11 - PIN11                     (input pulldown).
 * PK12 - PIN12                     (input pulldown).
 * PK13 - PIN13                     (input pulldown).
 * PK14 - PIN14                     (input pulldown).
 * PK15 - PIN15                     (input pulldown).
 */
#define VAL_GPIOK_MODER             (PIN_MODE_INPUT(GPIOK_PIN0) |           \
                                     PIN_MODE_INPUT(GPIOK_PIN1) |           \
                                     PIN_MODE_INPUT(GPIOK_PIN2) |           \
                                     PIN_MODE_INPUT(GPIOK_PIN3) |           \
                                     PIN_MODE_INPUT(GPIOK_PIN4) |           \
                                     PIN_MODE_INPUT(GPIOK_PIN5) |           \
                                     PIN_MODE_INPUT(GPIOK_PIN6) |           \
                                     PIN_MODE_INPUT(GPIOK_PIN7) |           \
                                     PIN_MODE_INPUT(GPIOK_PIN8) |           \
                                     PIN_MODE_INPUT(GPIOK_PIN9) |           \
                                     PIN_MODE_INPUT(GPIOK_PIN10) |          \
                                     PIN_MODE_INPUT(GPIOK_PIN11) |          \
                                     PIN_MODE_INPUT(GPIOK_PIN12) |          \
                                     PIN_MODE_INPUT(GPIOK_PIN13) |          \
                                     PIN_MODE_INPUT(GPIOK_PIN14) |          \
                                     PIN_MODE_INPUT(GPIOK_PIN15))
#define VAL_GPIOK_OTYPER            (PIN_OTYPE_PUSHPULL(GPIOK_PIN0) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOK_PIN1) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOK_PIN2) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOK_PIN3) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOK_PIN4) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOK_PIN5) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOK_PIN6) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOK_PIN7) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOK_PIN8) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOK_PIN9) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOK_PIN10) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOK_PIN11) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOK_PIN12) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOK_PIN13) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOK_PIN14) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOK_PIN15))
#define VAL_GPIOK_OSPEEDR           (PIN_OSPEED_VERYLOW(GPIOK_PIN0) |       \
                                     PIN_OSPEED_VERYLOW(GPIOK_PIN1) |       \
                                     PIN_OSPEED_VERYLOW(GPIOK_PIN2) |       \
                                     PIN_OSPEED_VERYLOW(GPIOK_PIN3) |       \
                                     PIN_OSPEED_VERYLOW(GPIOK_PIN4) |       \
                                     PIN_OSPEED_VERYLOW(GPIOK_PIN5) |       \
                                     PIN_OSPEED_VERYLOW(GPIOK_PIN6) |       \
                                     PIN_OSPEED_VERYLOW(GPIOK_PIN7) |       \
                                     PIN_OSPEED_VERYLOW(GPIOK_PIN8) |       \
                                     PIN_OSPEED_VERYLOW(GPIOK_PIN9) |       \
                                     PIN_OSPEED_VERYLOW(GPIOK_PIN10) |      \
                                     PIN_OSPEED_VERYLOW(GPIOK_PIN11) |      \
                                     PIN_OSPEED_VERYLOW(GPIOK_PIN12) |      \
                                     PIN_OSPEED_VERYLOW(GPIOK_PIN13) |      \
                                     PIN_OSPEED_VERYLOW(GPIOK_PIN14) |      \
                                     PIN_OSPEED_VERYLOW(GPIOK_PIN15))
#define VAL_GPIOK_PUPDR             (PIN_PUPDR_PULLDOWN(GPIOK_PIN0) |       \
                                     PIN_PUPDR_PULLDOWN(GPIOK_PIN1) |       \
                                     PIN_PUPDR_PULLDOWN(GPIOK_PIN2) |       \
                                     PIN_PUPDR_PULLDOWN(GPIOK_PIN3) |       \
                                     PIN_PUPDR_PULLDOWN(GPIOK_PIN4) |       \
                                     PIN_PUPDR_PULLDOWN(GPIOK_PIN5) |       \
                                     PIN_PUPDR_PULLDOWN(GPIOK_PIN6) |       \
                                     PIN_PUPDR_PULLDOWN(GPIOK_PIN7) |       \
                                     PIN_PUPDR_PULLDOWN(GPIOK_PIN8) |       \
                                     PIN_PUPDR_PULLDOWN(GPIOK_PIN9) |       \
                                     PIN_PUPDR_PULLDOWN(GPIOK_PIN10) |      \
                                     PIN_PUPDR_PULLDOWN(GPIOK_PIN11) |      \
                                     PIN_PUPDR_PULLDOWN(GPIOK_PIN12) |      \
                                     PIN_PUPDR_PULLDOWN(GPIOK_PIN13) |      \
                                     PIN_PUPDR_PULLDOWN(GPIOK_PIN14) |      \
                                     PIN_PUPDR_PULLDOWN(GPIOK_PIN15))
#define VAL_GPIOK_ODR               (PIN_ODR_LOW(GPIOK_PIN0) |              \
                                     PIN_ODR_LOW(GPIOK_PIN1) |              \
                                     PIN_ODR_LOW(GPIOK_PIN2) |              \
                                     PIN_ODR_LOW(GPIOK_PIN3) |              \
                                     PIN_ODR_LOW(GPIOK_PIN4) |              \
                                     PIN_ODR_LOW(GPIOK_PIN5) |              \
                                     PIN_ODR_LOW(GPIOK_PIN6) |              \
                                     PIN_ODR_LOW(GPIOK_PIN7) |              \
                                     PIN_ODR_LOW(GPIOK_PIN8) |              \
                                     PIN_ODR_LOW(GPIOK_PIN9) |              \
                                     PIN_ODR_LOW(GPIOK_PIN10) |             \
                                     PIN_ODR_LOW(GPIOK_PIN11) |             \
                                     PIN_ODR_LOW(GPIOK_PIN12) |             \
                                     PIN_ODR_LOW(GPIOK_PIN13) |             \
                                     PIN_ODR_LOW(GPIOK_PIN14) |             \
                                     PIN_ODR_LOW(GPIOK_PIN15))
#define VAL_GPIOK_AFRL              (PIN_AFIO_AF(GPIOK_PIN0, 0U) |          \
                                     PIN_AFIO_AF(GPIOK_PIN1, 0U) |          \
                                     PIN_AFIO_AF(GPIOK_PIN2, 0U) |          \
                                     PIN_AFIO_AF(GPIOK_PIN3, 0U) |          \
                                     PIN_AFIO_AF(GPIOK_PIN4, 0U) |          \
                                     PIN_AFIO_AF(GPIOK_PIN5, 0U) |          \
                                     PIN_AFIO_AF(GPIOK_PIN6, 0U) |          \
                                     PIN_AFIO_AF(GPIOK_PIN7, 0U))
#define VAL_GPIOK_AFRH              (PIN_AFIO_AF(GPIOK_PIN8, 0U) |          \
                                     PIN_AFIO_AF(GPIOK_PIN9, 0U) |          \
                                     PIN_AFIO_AF(GPIOK_PIN10, 0U) |         \
                                     PIN_AFIO_AF(GPIOK_PIN11, 0U) |         \
                                     PIN_AFIO_AF(GPIOK_PIN12, 0U) |         \
                                     PIN_AFIO_AF(GPIOK_PIN13, 0U) |         \
                                     PIN_AFIO_AF(GPIOK_PIN14, 0U) |         \
                                     PIN_AFIO_AF(GPIOK_PIN15, 0U))

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
