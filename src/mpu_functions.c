/**
 * @file	mpu_functions.c
 * @brief  	Contains funcitons related to the MPU
 * 
 * @written by  	Eliot Ferragni
 * @creation date	15.07.2020
 */
 

#include "hal.h"
#include "mpu_functions.h"


void mpuDisableSRAMCacheF746(void){
	
	/* The SRAM banks can optionallybe made as non cache-able area for use by
    DMA engines.*/
	mpuDisable();
	mpuConfigureRegion(MPU_REGION_7,
	                   SRAM1_BASE,
	                   MPU_RASR_ATTR_AP_RW_RW |
	                   MPU_RASR_ATTR_NON_CACHEABLE |
	                   MPU_RASR_SIZE_256K |
	                   MPU_RASR_ENABLE);
	mpuEnable(MPU_CTRL_PRIVDEFENA);

	/* Invalidating data cache to make sure that the MPU settings are taken
    immediately.*/
  	SCB_CleanInvalidateDCache();
}