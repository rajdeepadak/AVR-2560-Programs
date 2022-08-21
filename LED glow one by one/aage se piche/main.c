/*
 * aage se piche.c
 *
 * Created: 11-07-2018 16:48:51
 * Author : rajdeep
 */ 

#define F_CPU 16000000
#include <avr/io.h>
#include <util/delay.h>


int main(void)
{
    DDRB = 0b11111111;
	PORTB = 0b00000001;
	_delay_ms(1000);
	
    while (1) 
    {
		PORTB = PORTB ^ 0b00000010;
		_delay_ms(1000);
		PORTB = PORTB ^ 0b00000100;
		_delay_ms(1000);
		PORTB = PORTB ^ 0b00001000;
		_delay_ms(1000);
		PORTB = PORTB ^ 0b00010000;
		_delay_ms(1000);
		PORTB = PORTB ^ 0b00100000;
		_delay_ms(1000);
		PORTB = PORTB ^ 0b01000000;
		_delay_ms(1000);
		PORTB = PORTB ^ 0b10000000;
		_delay_ms(1000);
		
    }
}

