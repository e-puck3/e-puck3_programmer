/**
 * @file	motors.h
 * @brief  	Library to control motors
 * 
 * @written by  	Eliot Ferragni
 * @creation date	29.07.2019
 */

#ifndef MOTORS_H
#define MOTORS_H


// uncomment only one at a time to log what you want
// Only for debug purpose. Works with adc_datalogger.c/.h
// #define LOG_ADC_VOLTAGE_ON
// #define LOG_ADC_VOLTAGE_OFF
// #define LOG_ADC_CURRENT  

/**
 * Timer's channels list
 */
typedef enum{
    TIM_CHANNEL_1 = 0,
    TIM_CHANNEL_2,
    TIM_CHANNEL_3,
    TIM_CHANNEL_4,
    TIM_CHANNEL_5,
    TIM_CHANNEL_6
}tim_channel_t;

/**
 * Brushless motors list
 */
typedef enum
{
    BRUSHLESS_MOTOR_1 = 0,
    BRUSHLESS_MOTOR_2,
    BRUSHLESS_MOTOR_3,
    BRUSHLESS_MOTOR_4,
}brushless_motors_names_t;

/**
 * Half Bridges list
 */
typedef enum{
    HALF_BRIDGE_1 = 0,
    HALF_BRIDGE_2,
    HALF_BRIDGE_3,
    HALF_BRIDGE_4,
    HALF_BRIDGE_5,
    HALF_BRIDGE_6,
    HALF_BRIDGE_7,
    HALF_BRIDGE_8,
    HALF_BRIDGE_9,
    HALF_BRIDGE_10,
    HALF_BRIDGE_11,
    HALF_BRIDGE_12,
}half_bridges_names_t;

#define MAX_NB_OF_HALF_BRIDGES      12

#define MAX_NB_OF_BRUSHLESS_MOTOR   4

/**
 * Possible rotation directions
 */
typedef enum{
    CCW = -1,
    CW  = 1,
}rotation_dir_t;

/**
 * Commutation's scheme list
 */
typedef enum{
    DOUBLE_PWM = 0,
    SIMPLE_PWM,
    NB_OF_COMMUTATION_SCHEME
}commutation_schemes_t;

/**
 * @brief Does all the initializations related to the motor control module and starts it.
 * 
 * Uses Timers 1, 2, 3, 4, 8 and ADC 2 and 3.
 */
void motorsStart(void);

/**
 * @brief Stops the motors module.
 * 
 * Uses Timers 1, 2, 3, 4, 8, 10 and ADC 2 and 3.
 */
void motorsStop(void);

/**
 * @brief               Changes the duty cycle of the given motor. The duty cycle is internally
 *                      changed with a ramp.
 * 
 * @param motor_name    Motor to change the duty cycle. See brushless_motors_names_t
 * @param duty_cycle    Duty cycle to apply. Between 0 and 100.
 */
void motorSetDutyCycle(brushless_motors_names_t motor_name, uint8_t duty_cycle);

/**
 * @brief               Gets the actual duty cycle of the given motor
 * 
 * @param motor_name    Motor from which to get the duty cycle. See brushless_motors_names_t
 * @return              The duty cycle in percent from 0 to 100
 */
float motorGetDutyCycle(brushless_motors_names_t motor_name);

/**
 * @brief               Changes the advance of the given motor.
 * 
 * @param motor_name    Motor to change the advance. See brushless_motors_names_t
 * @param advance       Advance to apply. Between -1 and 1. Corresponds to 30° to -30° 
 */
void motorSetAdvance(brushless_motors_names_t motor_name, float advance);

/**
 * @brief               Gets the advance of the given motor.
 * 
 * @param motor_name    Motor from which to get the advance. See brushless_motors_names_t
 * @return              Advance. Between -1 and 1. Corresponds to 30° to -30° 
 */
float motorGetAdvance(brushless_motors_names_t motor_name);

/**
 * @brief               Sets the bus voltage
 * 
 * @param bus_voltage   Voltage powering the motors. Used to compute the half bus voltage to detect
 *                      properly the zero crossing event
 * 
 */
void motorSetBusVoltage(float bus_voltage);

/**
 * @brief               Gets the actual average current consummed by the given motor
 * 
 * @param motor_name    Motor from which to get the current. See brushless_motors_names_t
 * @return              The current in A.
 */
float motorsGetCurrent(brushless_motors_names_t motor_name);

/**
 * @brief               Gets the actual RPM of the given motor
 * 
 * @param motor_name    Motor from which to get the RPM. See brushless_motors_names_t
 * @return              The RPM in rpm...
 */
float motorsGetRPM(brushless_motors_names_t motor_name);

#include "motors_conf.h"

#endif /* MOTORS_H */