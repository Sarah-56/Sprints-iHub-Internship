/*
 * services.h
 * Created on: Aug 22, 2021
 * Author    : Sarah Mohamed
 */

#ifndef SERVICES_H_
#define SERVICES_H_

#include "types.h"

/*********************CARD DATA**********************/
typedef struct ST_cardData_t{
	uint8_t cardHolderName[25];
	uint8_t primaryAccountNumber[20];
	uint8_t cardExpirationDate[6];
}ST_cardData_t;

/*******************TERMINAL DATA********************/
typedef struct ST_terminalData_t{
	unsigned float transAmount;
	unsigned float maxTransAmount;
	uint8_t transactionDate[11];
}ST_terminalData_t;

/******************TRANSACTION DATA*****************/
typedef enum EN_transStat_t{
	DECLINED,APPROVED
}EN_transStat_t;

typedef struct ST_transaction_t{
	ST_cardData_t cardHolderData;
	ST_terminalData_t transData;
	EN_transStat_t transStat;
}ST_transaction;

/*****************SERVER DATA************************/
typedef struct ST_accountBalance_t{
	unsigned float balance;
	uint8_t primaryAccountNumber[20];
}ST_accountBalance_t;

/****************FUNCTIONS PROTOTYPES***************/

void app(void);








#endif /* SERVICES_H_ */
