/*
 * app.c
 */

/*****************************************************
 *                   INCLUDES
 *****************************************************/
#include "app.h"
#include <string.h>

/*****************************************************
 *                   Global Variables
 *****************************************************/
static uint8_t number;
Timer_ConfigType timer_config;
uint8_t num;

void Timer1_INT(){

	timer_config.initial			= 0;
	timer_config.top_count			= 6000;
	/* Timer 1 Initialization */
	TIMER1_init(&timer_config);

	if(num == number){
		LCD_clearScreen();
		LCD_displayString("You win!");
		app();
	}
	else if(num == 0){
		LCD_clearScreen();
		LCD_displayString("You didn't choose a number !");
		app();
	}
	else if(num > 15){
		LCD_clearScreen();
		LCD_displayString("The valid range is between 1 and 15.");
		app();
	}
}
void APP_init(void){
	/*Initializations*/
	LCD_init();
	/* Enable Global Interrupt */
	SREG |= (1<<7);

	timer_config.mode				= CTC_MODE;
	timer_config.clock				= F_CPU_1024;
	timer_config.PWM				= PWM_0;
	timer_config.initial			= 0;
	timer_config.top_count			= 60000;
	timer_config.interrupt			= TRUE;
}
void app(void){
	number = (rand() % (UPPER - LOWER + 1)) + LOWER;

	LCD_clearScreen();
	LCD_displayCharacter(number);
	_delay_ms(500);
	LCD_clearScreen();
	LCD_displayString("Please guess the number: ");
}
void APP_update(void){
	LCD_clearScreen();
	uint8_t key = '#';
	TIMER1_init(&timer_config);
	do{
		key = KeyPad_getPressedKey(); /*get the pressed key*/
		if((key <= 9) && (key >= 0))
		{
			LCD_displayCharacter(key); /* display the pressed keypad switch */
			//num = atoi(strcat(num, key));
		}
		_delay_ms(500); /* Press time */
	}while(key != '=');
	_delay_ms(500);
	if(key != '#'){
		Timer1_Stop();
		Timer1_INT();
	}

}
