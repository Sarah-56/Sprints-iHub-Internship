/*
 ============================================================================
 Name        : XOGame.c
 Author      : Sarah Mohamed
 Description : XO Game in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "xo.h"

char board[3][3] = {{'0', '1', '2'}, {'3', '4', '5'}, {'6', '7', '8'}};
int player = 1, choice;
char state = 'Y';

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	while(state == 'Y'){
		game();
		printf("Do you want to play again? Y/N ");
		fflush(stdout);
		fflush(stdin);
		scanf("%c", &state);
		system("CLS");
	}
	system("pause");
	return 0;
}
