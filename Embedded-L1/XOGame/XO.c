/*
 * XO.c
 * Created on: Aug 19, 2021
 * Author    : Lenovo
 */

#include <stdio.h>
#include "xo.h"



void displayBoard(void){
    for(int t=0; t<3; t++) {
	  printf(" %c | %c | %c ",board[t][0], board[t][1], board [t][2]);
	  if(t!=2) printf("\n---|---|---\n");
    }
    printf("\n");
}

void boardInit(void){
	char k = '0';
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			board[i][j] = k;
			k++;
		}
	}
}

void saveChoice(int choice, char xoro){
	switch(choice){
	case 0:
		board[0][0] = xoro;
		break;
	case 1:
		board[0][1] = xoro;
		break;
	case 2:
		board[0][2] = xoro;
		break;
	case 3:
		board[1][0] = xoro;
		break;
	case 4:
		board[1][1] = xoro;
		break;
	case 5:
		board[1][2] = xoro;
		break;
	case 6:
		board[2][0] = xoro;
		break;
	case 7:
		board[2][1] = xoro;
		break;
	case 8:
		board[2][2] = xoro;
		break;
	default:
		printf("Invalid move");
		printf("Player %d, enter a number:  ", player);
		scanf("%d", &choice);
		break;
	}
}

char checkWin(void){
	int i;
	/* check rows */
    for(i=0; i<3; i++) {
		if(board[i][0] == board[i][1] && board[i][0] == board[i][2]){
			return board[i][0];
		  }
	}
	/* check columns */
	for(i=0; i<3; i++) {
		if(board[0][i] == board[1][i] && board[0][i] == board[2][i]){
			return board[0][i];
		    }
	}
	/* test diagonals */
	if(board[0][0] == board[1][1] && board[1][1] == board[2][2]){
		 return board[0][0];
	}
	if(board[0][2] == board[1][1] && board[1][1] == board[2][0]){
		return board[0][2];
	}
	return ' ';
}

void game(void){
	boardInit();
	int count = 0;
	char result = ' ';
	char xoro;

	printf("X O GAME\n");
	printf("Player 1 (X) - Player 2 (O)\n");
	do{
		displayBoard();

		player = (player % 2) ? 1 : 2;
		printf("Player %d, enter a number: ", player);
		scanf("%d", &choice);

		xoro = (player == 1) ? 'X' : 'O';

		saveChoice(choice, xoro);

		//check winner
		result = checkWin();

		//switch player
		if(player == 1){
			player++;
		}
		else{
			player--;
		}
		if(count == 8 && result == ' '){
			break;
		}
		else{
			count++;
		}
	}while(result == ' ');
	displayBoard();
	if(result == 'X'){
		printf("Player 1 won!\n");
	}
	else if(result == 'O'){
		printf("Player 2 won!\n");
	}
	else{
		printf("GAME OVER\n");
	}
}



