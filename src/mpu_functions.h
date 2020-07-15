/**
 * @file	mpu_functions.h
 * @brief  	Contains funcitons related to the MPU
 * 
 * @written by  	Eliot Ferragni
 * @creation date	15.07.2020
 */
 

#ifndef MPU_FUNCTIONS_H
#define MPU_FUNCTIONS_H


/**
 * @brief Set the whole SRAM of a F746 to non-cachable zone
 * 
 * 		  STM32_SRAM2_NOCACHE should not be used in mcuconf.h,
 * 		  otherwise it can overide this function. Or use this function after 
 * 		  halInit()
 */
void mpuDisableSRAMCacheF746(void);

#endif  /* MPU_FUNCTIONS_H */