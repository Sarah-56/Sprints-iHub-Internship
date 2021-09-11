/*
 * main.c
 *
 *  Created on: Sep 9, 2021
 *      Author: Sarah
 */

#include <avr/io.h>
#include <avr/interrupt.h>

/* global variable contain the ticks count of the timer */
unsigned char g_tick = 0;

void Timer1_Init(void)
{
	TCNT1 = 0;		/* Set timer1 initial count to zero */

	OCR1A = 300;

	/* Configure timer control register TCCR1A
	 * 1. Disconnect OC1A and OC1B  COM1A1=0 COM1A0=0 COM1B0=0 COM1B1=0
	 * 2. FOC1A=1 FOC1B=0
	 * 3. CTC Mode WGM10=0 WGM11=0 (Mode Number 4)
	 */
	TCCR1A = (1<<FOC1A);

	/* Configure timer control register TCCR1B
	 * 1. CTC Mode WGM12=1 WGM13=0 (Mode Number 4)
	 * 2. Prescaler = F_CPU/1024 CS10=1 CS11=0 CS12=1
	 */
	TCCR1B = (1<<WGM12) | (1<<CS12) | (1<<CS10);
}

int main(void)
{
	DDRC |= 0x01;   /* Configure PC0 as output pin */
	PORTC &= 0xFE;  /* Clear PC0 pin */

	SREG |= (1<<7); /* Enable global interrupts in MC */

	Timer1_Init();

    while(1)
    {
    	while(!TIFR & (1<<OCF1A));
		TIFR |= 1<<OCF1A;
		g_tick++;
		if(g_tick == 1)
		{
			PORTC ^= (1<<PC0);     /* Toggle PC0 Pin */
			OCR1A = 300;
		}
		else if(g_tick == 2)
		{
			PORTC ^= (1<<PC0);     /* Toggle PC0 Pin */
			OCR1A = 500;
			g_tick = 0;
		}

    }
}


