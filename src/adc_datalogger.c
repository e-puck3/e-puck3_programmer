/*
 *  adc_datalogger.c
 *
 *  Created on: 4 juin 2019
 *      Author: Ismail-P51
 */

#include "adc_datalogger.h"

BSEMAPHORE_DECL(dtx_ready, true);


static AdcDataTx gADT= {
   // VAR
   .data_full = 0,
   .data_idx  = 0,
   .data_lock = 0,
   .data_left = DTX_NB_POINTS,
   // CST
   .nb_channels = 4,
   .nb_points   = DTX_NB_POINTS,
};

static void Adt_Reset_Struct(AdcDataTx* adt)
{
  adt->data_full = 0;
  adt->data_idx  = 0;
  adt->data_left = adt->nb_points;
  adt->data_lock = 0;
}

static void Send_ADT_Uart(AdcDataTx* adt)
{

  streamWrite((BaseSequentialStream *) &DTX_PORT, (uint8_t*)"START", 5);

  streamWrite((BaseSequentialStream *) &DTX_PORT, (uint8_t*)"CH0", 3);
  streamWrite((BaseSequentialStream *) &DTX_PORT, (uint8_t*)&(adt->nb_points), sizeof(uint16_t));
  streamWrite((BaseSequentialStream *) &DTX_PORT, (uint8_t*)&(adt->data[0]), sizeof(uint16_t) * adt->nb_points);

  streamWrite((BaseSequentialStream *) &DTX_PORT, (uint8_t*)"CH1", 3);
  streamWrite((BaseSequentialStream *) &DTX_PORT, (uint8_t*)&adt->nb_points, sizeof(uint16_t));
  streamWrite((BaseSequentialStream *) &DTX_PORT, (uint8_t*)&adt->data[1], sizeof(uint16_t) * adt->nb_points);

  streamWrite((BaseSequentialStream *) &DTX_PORT, (uint8_t*)"CH2", 3);
  streamWrite((BaseSequentialStream *) &DTX_PORT, (uint8_t*)&adt->nb_points, sizeof(uint16_t));
  streamWrite((BaseSequentialStream *) &DTX_PORT, (uint8_t*)&adt->data[2], sizeof(uint16_t) * adt->nb_points);

  streamWrite((BaseSequentialStream *) &DTX_PORT, (uint8_t*)"CH3", 3);
  streamWrite((BaseSequentialStream *) &DTX_PORT, (uint8_t*)&adt->nb_points, sizeof(uint16_t));
  streamWrite((BaseSequentialStream *) &DTX_PORT, (uint8_t*)&adt->data[3], sizeof(uint16_t) * adt->nb_points);

}

static THD_WORKING_AREA(waAdtThread,128);
static THD_FUNCTION(AdtThread,arg) {
  (void)arg;
  chRegSetThreadName("ADC datalogger");
  while(true){

    chBSemWait(&dtx_ready);
    Send_ADT_Uart(&gADT);
    Adt_Reset_Struct(&gADT);
  }
}

/*===========================================================================*/
/* Data management                                                           */
/*===========================================================================*/

void Adt_start(void){
  chThdCreateStatic(waAdtThread, sizeof(waAdtThread), NORMALPRIO + 10, AdtThread, NULL);
}

void Adt_Insert_Data(uint16_t* input_data,size_t size,uint8_t zc)
{
  (void) zc; // COULD BE USED FOR DEBUGGING PURPOSE
  (void) size;
  //
  if(0==gADT.data_full)
  {

    gADT.data[0][gADT.data_idx] = input_data[0];
    gADT.data[1][gADT.data_idx] = input_data[1];
    gADT.data[2][gADT.data_idx] = input_data[2];
    gADT.data[3][gADT.data_idx] = input_data[3];
   
    gADT.data_idx += 1;
    gADT.data_left -=1;

  }

  // Check if full
  if(0 == gADT.data_left || 1 == gADT.data_full)
  {
    gADT.data_full = 1;
    gADT.data_lock = 1;
    chSysLockFromISR();
    chBSemSignalI(&dtx_ready);
    chSysUnlockFromISR();
  }

}
