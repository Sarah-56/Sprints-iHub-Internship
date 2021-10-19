/*
 * app.c
 *
 *  Created on: Sep 14, 2021
 *      Author: Sarah
 */

/*****************************************************
 *                   INCLUDES
 *****************************************************/
#include "app.h"
/*****************************************************
 *                   Global Variables
 *****************************************************/
static uint8_t count = 0;
static uint8_t flag = 0;
static uint8_t num;
Timer_ConfigType timer_config;
void Timer1_INT(){

	timer_config.initial			= 0;
	timer_config.top_count			= 3000;
	/* Timer 1 Initialization */
	TIMER1_init(&timer_config);
	if(count == num){
		LCD_clearScreen();
		LCD_displayString("You win!");
		app();
	}
	else if(count == 0){
		LCD_clearScreen();
		LCD_displayString("You didn't choose a number !");
		app();
	}
	else if(count > 15){
		LCD_clearScreen();
		LCD_displayString("The valid range is between 1 and 15.");
		app();
	}
}
void APP_init(void){
	/*Initializations*/
	LCD_init();
	button_init();
	/* Enable Global Interrupt */
	SREG |= (1<<7);

	timer_config.mode				= CTC_MODE;
	timer_config.clock				= F_CPU_1024;
	timer_config.PWM				= PWM_0;
	timer_config.initial			= 0;
	timer_config.top_count			= 3000;
	timer_config.interrupt			= TRUE;
	TIMER1_init(&timer_config);
	/* CallBack Function for timer 1 CTC Channel A Interrupt Function */
	Timer1_setCallBack(Timer1_INT);
}
void app(void){
	num = (rand() % (UPPER - LOWER + 1)) + LOWER;

	LCD_clearScreen();
	LCD_displayCharacter(num);
	LCD_clearScreen();
	LCD_displayString("Please guess the number: ");
}
void APP_update(void){
	if(button_read() == 1 ){
		_delay_ms(30);
		if(button_read() == 1){
			if(flag == 0){
				LCD_clearScreen();
				count++;
				LCD_displayCharacter(count);
				flag = 1;
			}
		}
	}
	else{
		flag = 0;
	}

}
