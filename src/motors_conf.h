/**
 * @file	motors_conf.h
 * @brief  	Configuration file for the motors library
 * 
 * @written by  	Eliot Ferragni
 * @creation date	29.07.2019
 */

#define NB_OF_HALF_BRIDGES 		12

#define NB_OF_BRUSHLESS_MOTOR	4

/********************                  MOTORS CONFIG                ********************/

#if (NB_OF_BRUSHLESS_MOTOR > 0)
#define BRUSHLESS_MOTOR_1_PHASE1		HALF_BRIDGE_1
#define BRUSHLESS_MOTOR_1_PHASE2		HALF_BRIDGE_2
#define BRUSHLESS_MOTOR_1_PHASE3		HALF_BRIDGE_3
#define BRUSHLESS_MOTOR_1_COMMUTATION	DOUBLE_PWM
#define BRUSHLESS_MOTOR_1_DIRECTION		CW
#endif

#if (NB_OF_BRUSHLESS_MOTOR > 1)
#define BRUSHLESS_MOTOR_2_PHASE1		HALF_BRIDGE_4
#define BRUSHLESS_MOTOR_2_PHASE2		HALF_BRIDGE_5
#define BRUSHLESS_MOTOR_2_PHASE3		HALF_BRIDGE_6
#define BRUSHLESS_MOTOR_2_COMMUTATION	DOUBLE_PWM
#define BRUSHLESS_MOTOR_2_DIRECTION		CW
#endif

#if (NB_OF_BRUSHLESS_MOTOR > 2)
#define BRUSHLESS_MOTOR_3_PHASE1		HALF_BRIDGE_7
#define BRUSHLESS_MOTOR_3_PHASE2		HALF_BRIDGE_8
#define BRUSHLESS_MOTOR_3_PHASE3		HALF_BRIDGE_9
#define BRUSHLESS_MOTOR_3_COMMUTATION	DOUBLE_PWM
#define BRUSHLESS_MOTOR_3_DIRECTION		CW
#endif

#if (NB_OF_BRUSHLESS_MOTOR > 3)
#define BRUSHLESS_MOTOR_4_PHASE1		HALF_BRIDGE_10
#define BRUSHLESS_MOTOR_4_PHASE2		HALF_BRIDGE_11
#define BRUSHLESS_MOTOR_4_PHASE3		HALF_BRIDGE_12
#define BRUSHLESS_MOTOR_4_COMMUTATION	DOUBLE_PWM
#define BRUSHLESS_MOTOR_4_DIRECTION		CW
#endif

/********************              BOARD SPECIFIC CONFIG            ********************/

/* Voltage measurement must be on ADC3 and Current measurement on ADC1 without confilct */

/* The pins should be configured accordingly to the following config in the board config file
 * in order to be controllable by the timers (correct alternate function selected and highest speed) */

#if (NB_OF_HALF_BRIDGES > 0)
#define P_CONTROL_LINE_1			LINE_OUT_MOT1_PH1_P
#define N_CONTROL_LINE_1			LINE_OUT_MOT1_PH1_N
#define PWM_DRIVER_1				&PWMD1
#define PWM_P_CHANNEL_1				TIM_CHANNEL_1
#define PWM_N_CHANNEL_1				TIM_CHANNEL_1
#define ADC3_VOLTAGE_CHANNEL_1		ADC_CHANNEL_IN4
#define ADC1_CURRENT_CHANNEL_1		ADC_CHANNEL_IN4
#endif /* (NB_OF_HALF_BRIDGES > 0) */

#if (NB_OF_HALF_BRIDGES > 1)
#define P_CONTROL_LINE_2			LINE_OUT_MOT1_PH2_P
#define N_CONTROL_LINE_2			LINE_OUT_MOT1_PH2_N
#define PWM_DRIVER_2				&PWMD1
#define PWM_P_CHANNEL_2				TIM_CHANNEL_2
#define PWM_N_CHANNEL_2				TIM_CHANNEL_2
#define ADC3_VOLTAGE_CHANNEL_2		ADC_CHANNEL_IN5
#define ADC1_CURRENT_CHANNEL_2		ADC_CHANNEL_IN5
#endif /* (NB_OF_HALF_BRIDGES > 1) */

#if (NB_OF_HALF_BRIDGES > 2)
#define P_CONTROL_LINE_3			LINE_OUT_MOT1_PH3_P
#define N_CONTROL_LINE_3			LINE_OUT_MOT1_PH3_N
#define PWM_DRIVER_3				&PWMD1
#define PWM_P_CHANNEL_3				TIM_CHANNEL_3
#define PWM_N_CHANNEL_3				TIM_CHANNEL_3
#define ADC3_VOLTAGE_CHANNEL_3		ADC_CHANNEL_IN6
#define ADC1_CURRENT_CHANNEL_3		ADC_CHANNEL_IN6
#endif /* (NB_OF_HALF_BRIDGES > 2) */

#if (NB_OF_HALF_BRIDGES > 3)
#define P_CONTROL_LINE_4			LINE_OUT_MOT2_PH1_P
#define N_CONTROL_LINE_4			LINE_OUT_MOT2_PH1_N
#define PWM_DRIVER_4				&PWMD2
#define PWM_P_CHANNEL_4				TIM_CHANNEL_1
#define PWM_N_CHANNEL_4				TIM_CHANNEL_2
#define ADC3_VOLTAGE_CHANNEL_4		ADC_CHANNEL_IN0
#define ADC1_CURRENT_CHANNEL_4		ADC_CHANNEL_IN4
#endif /* (NB_OF_HALF_BRIDGES > 3) */

#if (NB_OF_HALF_BRIDGES > 4)
#define P_CONTROL_LINE_5			LINE_OUT_MOT2_PH2_P
#define N_CONTROL_LINE_5			LINE_OUT_MOT2_PH2_N
#define PWM_DRIVER_5				&PWMD2
#define PWM_P_CHANNEL_5				TIM_CHANNEL_3
#define PWM_N_CHANNEL_5				TIM_CHANNEL_4
#define ADC3_VOLTAGE_CHANNEL_5		ADC_CHANNEL_IN1
#define ADC1_CURRENT_CHANNEL_5		ADC_CHANNEL_IN5
#endif /* (NB_OF_HALF_BRIDGES > 4) */

#if (NB_OF_HALF_BRIDGES > 5)
#define P_CONTROL_LINE_6			LINE_OUT_MOT2_PH3_P
#define N_CONTROL_LINE_6			LINE_OUT_MOT2_PH3_N
#define PWM_DRIVER_6				&PWMD3
#define PWM_P_CHANNEL_6				TIM_CHANNEL_1
#define PWM_N_CHANNEL_6				TIM_CHANNEL_2
#define ADC3_VOLTAGE_CHANNEL_6		ADC_CHANNEL_IN2
#define ADC1_CURRENT_CHANNEL_6		ADC_CHANNEL_IN6
#endif /* (NB_OF_HALF_BRIDGES > 5) */

#if (NB_OF_HALF_BRIDGES > 6)
#define P_CONTROL_LINE_7			LINE_OUT_MOT3_PH1_P
#define N_CONTROL_LINE_7			LINE_OUT_MOT3_PH1_N
#define PWM_DRIVER_7				&PWMD3
#define PWM_P_CHANNEL_7				TIM_CHANNEL_3
#define PWM_N_CHANNEL_7				TIM_CHANNEL_4
#define ADC3_VOLTAGE_CHANNEL_7		ADC_CHANNEL_IN8
#define ADC1_CURRENT_CHANNEL_7		ADC_CHANNEL_IN4
#endif /* (NB_OF_HALF_BRIDGES > 6) */

#if (NB_OF_HALF_BRIDGES > 7)
#define P_CONTROL_LINE_8			LINE_OUT_MOT3_PH2_P
#define N_CONTROL_LINE_8			LINE_OUT_MOT3_PH2_N
#define PWM_DRIVER_8				&PWMD4
#define PWM_P_CHANNEL_8				TIM_CHANNEL_1
#define PWM_N_CHANNEL_8				TIM_CHANNEL_2
#define ADC3_VOLTAGE_CHANNEL_8		ADC_CHANNEL_IN9
#define ADC1_CURRENT_CHANNEL_8		ADC_CHANNEL_IN5
#endif /* (NB_OF_HALF_BRIDGES > 7) */

#if (NB_OF_HALF_BRIDGES > 8)
#define P_CONTROL_LINE_9			LINE_OUT_MOT3_PH3_P
#define N_CONTROL_LINE_9			LINE_OUT_MOT3_PH3_N
#define PWM_DRIVER_9				&PWMD4
#define PWM_P_CHANNEL_9				TIM_CHANNEL_3
#define PWM_N_CHANNEL_9				TIM_CHANNEL_4
#define ADC3_VOLTAGE_CHANNEL_9		ADC_CHANNEL_IN10
#define ADC1_CURRENT_CHANNEL_9		ADC_CHANNEL_IN6
#endif /* (NB_OF_HALF_BRIDGES > 8) */

#if (NB_OF_HALF_BRIDGES > 9)
#define P_CONTROL_LINE_10			LINE_OUT_MOT4_PH1_P
#define N_CONTROL_LINE_10			LINE_OUT_MOT4_PH1_N
#define PWM_DRIVER_10				&PWMD8
#define PWM_P_CHANNEL_10			TIM_CHANNEL_1
#define PWM_N_CHANNEL_10			TIM_CHANNEL_1
#define ADC3_VOLTAGE_CHANNEL_10		ADC_CHANNEL_IN12
#define ADC1_CURRENT_CHANNEL_10		ADC_CHANNEL_IN9
#endif /* (NB_OF_HALF_BRIDGES > 9) */

#if (NB_OF_HALF_BRIDGES > 10)
#define P_CONTROL_LINE_11			LINE_OUT_MOT4_PH2_P
#define N_CONTROL_LINE_11			LINE_OUT_MOT4_PH2_N
#define PWM_DRIVER_11				&PWMD8
#define PWM_P_CHANNEL_11			TIM_CHANNEL_2
#define PWM_N_CHANNEL_11			TIM_CHANNEL_2
#define ADC3_VOLTAGE_CHANNEL_11		ADC_CHANNEL_IN13
#define ADC1_CURRENT_CHANNEL_11		ADC_CHANNEL_IN14
#endif /* (NB_OF_HALF_BRIDGES > 10) */

#if (NB_OF_HALF_BRIDGES > 11)
#define P_CONTROL_LINE_12			LINE_OUT_MOT4_PH3_P
#define N_CONTROL_LINE_12			LINE_OUT_MOT4_PH3_N
#define PWM_DRIVER_12				&PWMD8
#define PWM_P_CHANNEL_12			TIM_CHANNEL_3
#define PWM_N_CHANNEL_12			TIM_CHANNEL_3
#define ADC3_VOLTAGE_CHANNEL_12		ADC_CHANNEL_IN14
#define ADC1_CURRENT_CHANNEL_12		ADC_CHANNEL_IN15
#endif /* (NB_OF_HALF_BRIDGES > 11) */


