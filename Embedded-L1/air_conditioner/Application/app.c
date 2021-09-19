/*
 * app.c
 */

/*****************************************************
 *                   INCLUDES
 *****************************************************/
#include "app.h"
/*****************************************************
 *                   Global Variables
 *****************************************************/
uint8 key;
uint32 temp;
uint32 keypad_temp;

void APP_init(void){
	LCD_init(); /* initialize LCD driver */
	ADC_init(); /* initialize ADC driver */
	motor_init();
}

void APP_update(void){
	keypad_temp = 0;
	LCD_clearScreen(); /* clear LCD at the beginning */
	/* display this string "Temp =    " only once at LCD */
	LCD_displayString("Set Temp: ");
	LCD_goToRowColumn(0,10);

	do{
		key = KeyPad_getPressedKey(); /* get the pressed button from keypad */
		if((key >= 0) && (key <= 9))
		{
			keypad_temp *= 10;
			keypad_temp += key;
			LCD_intgerToString(key);
		}
		_delay_ms(500); /* Press time */
	}while(key != '=');


	LCD_goToRowColumn(0,12);
	/* display character 'C' on the screen "Temp =   C" */
	LCD_displayCharacter('C');
	_delay_ms(500);

	temp = ADC_readChannel(2); /* read channel two where the temp sensor is connect */
	temp = (temp*150*5)/(1023*1.5); /* calculate the temp from the ADC value*/

	if(temp >= keypad_temp){
		motor_CW();
	}
	else{
		motor_stop();
	}

}

