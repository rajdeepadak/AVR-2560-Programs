/*
 * Three wheel Driver.c
 *
 * Created: 17-07-2018 18:27:53
 * Author : rajdeep
 */ 

#define F_CPU 16000000
#include <avr/io.h>
#include <util/delay.h>

void forward(void)
{
	PORTC = 0b10101010;
}

void backward(void)
{
	PORTC = 0b01010101;
}

void motorstop(void)
{
	PORTC = 0b00000000;
}

int main(void)
{
    DDRB = 0xFF;
	DDRC = 0xFF;
	PORTC = 0x00;
    PORTB = 0b00111000;
    while (1) 
    {
		forward();
		_delay_ms(5000);
		motorstop();
		_delay_ms(2000);
		backward();
		_delay_ms(5000);
		motorstop();
		_delay_ms(1000);
    }
}

