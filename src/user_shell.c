/**
 * @file	user_shell.c
 * @brief  	File containing functions and definitions to handle the shell provided by ChibiOS
 * 
 * @written by  	Eliot Ferragni
 * @creation date	12.03.2019
 */

#include "ch.h"
#include "hal.h"
#include "shell.h"
#include <stdlib.h>
#include <string.h>

#include "chprintf.h"
#include "usbcfg.h"
#include "user_shell.h"
#include "usb_pd_controller.h"
#include "threads_utilities.h"
#include "motors.h"


static THD_WORKING_AREA(waShell,2048);

static char sc_histbuf[SHELL_MAX_HIST_BUFF];
static char* completion_buffer[SHELL_MAX_COMPLETIONS];

static void cmd_set_vbus_priority(BaseSequentialStream *chp, int argc, char *argv[]){
	if(argc == 1){
		char *endptr;
    uint8_t enabled = strtol(argv[0], &endptr, 0);

    if(enabled){
    	palSetLine(LINE_PRIORITY_TO_VBUS);
    	chprintf(chp, "vbus_priority enabled\r\n");
    }else{
    	palClearLine(LINE_PRIORITY_TO_VBUS);
    	chprintf(chp, "vbus_priority disabled\r\n");
    }
	}else{
		chprintf(chp, "USAGE: set_vbus_priority 1|0\r\n");
		chprintf(chp, "actual state: %d\r\n", palReadLine(LINE_PRIORITY_TO_VBUS));
	}
}

static void cmd_set_inrush_limit(BaseSequentialStream *chp, int argc, char *argv[]){
	if(argc == 1){
		char *endptr;
    uint8_t enabled = strtol(argv[0], &endptr, 0);

    if(enabled){
    	palClearLine(LINE_BAT_PLUS_INRUSH_LIMIT_n);
    	chprintf(chp, "inrush_limit enabled\r\n");
    }else{
    	palSetLine(LINE_BAT_PLUS_INRUSH_LIMIT_n);
    	chprintf(chp, "inrush_limit disabled\r\n");
    }
	}else{
		chprintf(chp, "USAGE: set_inrush_limit 1|0\r\n");
		chprintf(chp, "actual state: %d\r\n", !palReadLine(LINE_BAT_PLUS_INRUSH_LIMIT_n));
	}
}

static void cmd_motor_set_speed(BaseSequentialStream *chp, int argc, char *argv[])
{
  (void)argv;
  if(argc == 2)
  {
    char *endptr;
    uint8_t motNumber = strtol(argv[0], &endptr, 0);
    float speed = strtol(argv[1], &endptr, 0);

    brushless_motors_names_t motor_id;
    if(motNumber == 1){
      motor_id = 0;
    }else if(motNumber == 2){
      motor_id = 1;
    }else if(motNumber == 3){
      motor_id = 2;
    }else if(motNumber == 4){
      motor_id = 3;
    }else{
      return;
    }
    motorSetDutyCycle(motor_id, speed);

  }
  else
  {
      chprintf(chp, "motor_set_speed motNumber speed (0-100)" SHELL_NEWLINE_STR);
  }
}

static void cmd_motor_set_advance(BaseSequentialStream *chp, int argc, char *argv[]){
{
  (void)argv;
  if(argc == 2)
  {
    char *endptr;

    uint8_t motNumber = strtol(argv[0], &endptr, 0);
    float advance = strtol(argv[1], &endptr, 0);

    brushless_motors_names_t motor_id;
    if(motNumber == 1){
      motor_id = 0;
    }else if(motNumber == 2){
      motor_id = 1;
    }else if(motNumber == 3){
      motor_id = 2;
    }else if(motNumber == 4){
      motor_id = 3;
    }else{
      return;
    }

    advance /= 30;
    motorSetAdvance(motor_id, advance);


  }
  else
  {
      shellUsage(chp, "motor_set_advance motNumber advance (-30 to 30)");
      chprintf(chp, "actual advances : %f° %f° %f° %f° \r\n", 30*motorGetAdvance(0), 30*motorGetAdvance(1), 30*motorGetAdvance(2), 30*motorGetAdvance(3));
  }
}
}

static const ShellCommand commands[] = {
	{"set_vbus_priority", cmd_set_vbus_priority},
	{"set_inrush_limit", cmd_set_inrush_limit},
	{"motor_set_speed", cmd_motor_set_speed},
  {"motor_set_advance", cmd_motor_set_advance},
  USB_PD_CONTROLLER_SHELL_CMD
  THREADS_UTILITIES_SHELL_CMD
  {NULL, NULL}
};

static const ShellConfig shell_cfg = {
	(BaseSequentialStream *)&SHELL_PORT,
	commands,
	sc_histbuf,
	sizeof(sc_histbuf),
	completion_buffer,
};

void spawn_shell(void){
	static thread_t *shellTh = NULL;
	if(shellTh == NULL){
		shellTh = chThdCreateStatic(waShell, sizeof(waShell), NORMALPRIO + 1, shellThread, (void *)&shell_cfg);
	}	
}