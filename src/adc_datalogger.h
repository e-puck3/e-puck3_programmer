/*
 *  adc_datalogger.h
 *
 *  Created on: 4 juin 2019
 *      Author: Ismail-P51
 */

#ifndef ADC_DATALOGGER_H
#define ADC_DATALOGGER_H

#include <ch.h>
#include <hal.h>
#include "usbcfg.h"

/*  DATA TX  */
#define DTX_SIZE_1K             1024
#define DTX_NB_POINTS           6 * DTX_SIZE_1K	// mjst be a multiple of 4

#define DTX_PORT 				SDU2

typedef struct
{
  // DATA
  uint16_t data [4][DTX_NB_POINTS];
  // MGT
  const uint16_t nb_channels;
  const uint16_t nb_points;
  uint16_t data_idx;
  uint8_t data_lock;
}AdcDataTx;


/* Data Transmission */
void Adt_start(void);
void Adt_Insert_Data(uint16_t* input_data,size_t size,uint8_t zc);

#endif /* ADC_DATALOGGER_H */
