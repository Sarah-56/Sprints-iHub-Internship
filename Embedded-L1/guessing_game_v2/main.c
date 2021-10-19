/*
 * File Name: main.c
 * Description: Source file for main app
 * Created on: Sep 5, 2021
 * Author: Sarah
 */

/*****************************************************
 *                   INCLUDES
 *****************************************************/
#include "Application/App.h"

/*****************************************************
 *                   MAIN FUNCTION
 *****************************************************/
int main(void){
	APP_init();
	app();
	while(1)
	{
		APP_update();
	}
	return 0;
}

