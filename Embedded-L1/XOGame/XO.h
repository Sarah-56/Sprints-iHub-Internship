/*
 * XO.h
 * Created on: Aug 19, 2021
 * Author    : Sarah Mohamed
 */

#ifndef XO_H_
#define XO_H_

extern char board[3][3];
extern int choice;
extern int player;

void game(void);
void boardInit(void);
void displayBoard(void);
void saveChoice(int choice, char xoro);
char checkWin(void);


#endif /* XO_H_ */
