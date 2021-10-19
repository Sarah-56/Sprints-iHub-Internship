/*
 * main.c
 * Description: Source file for main app
 * Created on: Sep 14, 2021
 * Author    : Sarah
 */

/*****************************************************
 *                   INCLUDES
 *****************************************************/
#include "Application/app.h"

/*****************************************************
 *                   MAIN FUNCTION
 *****************************************************/
int main(void){
	APP_init();
	app();
	LCD_displayString("Please guess the number: ");
	while(1)
	{
		APP_update();
	}
	return 0;
}
