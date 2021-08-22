/*
 * main.c
 * Created on: Aug 19, 2021
 * Author    : Sarah Mohamed
 */

#include <stdio.h>
#include "types.h"

#define SIZE 100
#define EMPTY -1

char stack[SIZE];
char str[SIZE];
sint8_t top = EMPTY;

void push(uint8_t u8_data);
uint8_t pop();
void printStack();
int isBalanced();
void app(void);

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	app();
	return 0;
}


void push(uint8_t u8_data){
	if(top != SIZE)
	{
		top++;
		stack[top] = u8_data;
	}
	else
	{
		printf("Stack is full");
	}
}
uint8_t pop()
{
	char ch;
	if(top != EMPTY)
	{
		ch = stack[top];
		top--;
		return ch;
	}
	else
	{
		printf("\n stack is empty");
		return 0;
	}
}
void printStack()
{
	uint8_t ch = pop();
	while(ch)
	{
		printf("%c", ch);
		ch = pop();
	}
}
int isBalanced()
{
	char bracket;
	char ch;
	int i = 0;
	while(str[i] != '\0')
	{
		if(str[i] == '(' || str[i] == '{' || str[i] == '<' || str[i] == '['){
			push(str[i]);
			i++;
			continue;
		}
		if(top == -1){
			return 0;
		}
		switch (str[i]) {
		case ')':
			i++;
			bracket = stack[top];
			ch = pop();
			if (bracket == '{' ||bracket == '<' || bracket == '[')
				return 0;
			break;

		case '}':
			i++;
			bracket = stack[top];
			ch = pop();
			if (bracket == '(' || bracket == '<' || bracket == '[')
				return 0;
			break;
		case '>':
			i++;
			bracket = stack[top];
			ch = pop();
			if (bracket == '(' || bracket == '[' || bracket == '{')
				return 0;
			break;
		case ']':
			i++;
			bracket = stack[top];
			ch = pop();
			if (bracket == '(' || bracket == '{' || bracket == '<')
				return 0;
			break;
		}
	}
	if(top == -1){
		return 1;
	}
	else{
		return 0;
	}
}
void app(void){
	printf("Enter the sentence: ");
	scanf("%s", str);
	switch(isBalanced()){
	case 1:
		printf("Balanced");
		break;
	case 0:
		printf("Not balanced");
		break;
	}
}
