/*
 * File Name: main.c
 * Description: Source file for main app
 * Created on: Sep 5, 2021
 * Author: Sarah
 */

/*****************************************************
 *                   INCLUDES
 *****************************************************/
#include "LCD_driver/lcd.h"
/*****************************************************
 *                   MAIN FUNCTION
 *****************************************************/
int main(void){
	LCD_init();
	LCD_displayStringRowColumn(0,0,"Challenge");

	return 0;
}

