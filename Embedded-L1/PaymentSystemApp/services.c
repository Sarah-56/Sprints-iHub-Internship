/*
 * services.c
 * Created on: Aug 22, 2021
 * Author    : Sarah Mohamed
 */

#include <stdio.h>
#include "services.h"

ST_accountBalance_t serverData[] = {{.primaryAccountNumber = "123456789", .balance = 100.00},
								    {.primaryAccountNumber = "234567891", .balance = 6000.00},
								    {.primaryAccountNumber = "567891234", .balance = 3250.25},
								    {.primaryAccountNumber = "456789123", .balance = 1500.12},
								    {.primaryAccountNumber = "258649173", .balance = 500.00},
								    {.primaryAccountNumber = "654823719", .balance = 2100.00},
								    {.primaryAccountNumber = "971362485", .balance = 0.00},
								    {.primaryAccountNumber = "793148625", .balance = 1.00},
								    {.primaryAccountNumber = "123123456", .balance = 10.12},
								    {.primaryAccountNumber = "456789321", .balance = 0.55}};

void app(void){
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	printf("Please Enter Card Data: \nPlease Enter the Card Holder Name: \n");
	//scanf
	printf("Please Enter the Primary Account Number: \n");
	//scanf
	printf("Please card Expire Date: \n");
	//scanf
	printf("Please Enter Terminal Data: \nPlease Enter the transaction Amount: \n");
	//scanf
	printf("Please Enter transaction Date: \n");
	//scanf
	printf("Verifying Data from the server...\n");
	printf("The Transaction is APPROVED.\n");
	printf("The Transaction is DECLINED.\n");
}
