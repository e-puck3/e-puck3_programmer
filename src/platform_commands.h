/**
 * @file	platform_commands.h
 * @brief  	Custom GDB commands added to the default ones
 * 
 * @written by  		Daniel Burnier
 * @creation date		11.08.2017
 * @modified by 		Eliot Ferragni
 * last modification	27.02.2019
 */

#if defined(PLATFORM_COMMANDS_DEFINE)
/********************************************/
/* Beginning of platform dedicated commands. */
/********************************************/

static bool cmd_select_mode(target *t, int argc, const char **argv);
static bool cmd_get_mode(target *t, int argc, const char **argv);

/***************************************/
/* End of platform dedicated commands. */
/***************************************/
#undef PLATFORM_COMMANDS_DEFINE
#endif

#if defined(PLATFORM_COMMANDS_LIST)
/****************************************************/
/* Beginning of List of platform dedicated commands. */
/* IMPORTANT : Each line MUST finish with "\"       */
/****************************************************/

	{"select_mode", (cmd_handler)cmd_select_mode, "(1|2|3) Select the use of the second virtual com port over USB :\n\t\t1 = Serial monitor of the main processor and GDB over USB and Bluetooth,\n\t\t2 = Programming/serial monitor of the ESP and GDB over USB,\n\t\t3 = ASEBA CAN-USB translator and GDB over USB and Bluetooth"}, \
	{"get_mode", (cmd_handler)cmd_get_mode, "Return the selected mode for the second virtual com port over USB"},\

/***********************************************/
/* End of List of platform dedicated commands. */
/***********************************************/
#undef PLATFORM_COMMANDS_LIST
#endif

#if defined(PLATFORM_COMMANDS_CODE)
/****************************************************/
/* Beginning of Code of platform dedicated commands. */
/****************************************************/

static bool cmd_select_mode(target *t, int argc, const char **argv){
	(void)t;
	char error_message[] = "You must choose between mode 1, 2 or 3\n";
	if (argc == 1)
		gdb_outf("%s",error_message);
	else if (strcmp(argv[1], "1") == 0){
		communicationsSwitchModeTo(UART_779_PASSTHROUGH, true);
		gdb_outf("Switched to mode 1 : UART_779_PASSTHROUGH\n");
	}else if (strcmp(argv[1], "2") == 0){
 		communicationsSwitchModeTo(UART_ESP_PASSTHROUGH, true);
		gdb_outf("Switched to mode 2 : UART_ESP_PASSTHROUGH\n");
 	}else if (strcmp(argv[1], "3") == 0){
 		communicationsSwitchModeTo(ASEBA_CAN_TRANSLATOR, true);
		gdb_outf("Switched to mode 3 : ASEBA_CAN_TRANSLATOR\n");
 	}else{
 		gdb_outf("%s",error_message);
 	}
 	return true;
}

static bool cmd_get_mode(target *t, int argc, const char **argv)
{
	(void)t;
	(void)argc;
	(void)argv;
	uint8_t mode = communicationGetActiveMode();
	gdb_outf("Current mode : ");
	if(mode == UART_779_PASSTHROUGH){
		gdb_outf("mode 1 : UART_779_PASSTHROUGH\n");
	}else if(mode == UART_ESP_PASSTHROUGH){
		gdb_outf("mode 2 : UART_ESP_PASSTHROUGH\n");
	}else if(mode == ASEBA_CAN_TRANSLATOR){
		gdb_outf("mode 3 :ASEBA_CAN_TRANSLATOR\n");
	}

	return true;
}

/***********************************************/
/* End of Code of platform dedicated commands. */
/***********************************************/
#undef PLATFORM_COMMANDS_CODE
#endif
