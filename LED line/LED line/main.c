/*
 * LED line.c
 *
 * Created: 11-07-2018 17:22:17
 * Author : rajde
 */ 

#define F_CPU 16000000
#include <avr/io.h>
#include <util/delay.h>


int main(void)
{
	DDRB = 0b11111111;
	PORTB = 0b00000001;
	_delay_ms(1000);
	
	while(1)
	    {
			for(i=0 ; i<=8 ; i++)
			   {
				   
				   
			   }
		}

