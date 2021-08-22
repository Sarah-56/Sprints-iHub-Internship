/*
 * main.c
 * Created on: Aug 22, 2021
 * Author    : Sarah Mohamed
 */

#include <stdio.h>
#include "services.h"

uint8_t state = 'y';

int main(void){

	while(state == 'y'){
		app();
		printf("Do you want to continue (y/n)?: ");
		fflush(stdout);
		fflush(stdin);
		scanf("%c", &state);
		system("CLS");
	}
	system("pause");
	return 0;
}
