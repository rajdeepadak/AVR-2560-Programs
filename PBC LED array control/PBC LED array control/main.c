/*
* PBC LED array control.c
*
* Created: 12-07-2018 21:03:29
* Author : rajdeep
*/

#define F_CPU 14765400
#include <avr/io.h>
#include <util/delay.h>
 
int i, k, m;

//int flag = 0;

void glowLED()
{
  int state = 0;
  
  for(i=0 ; i <= 8 ; i = i+1)
  {
    k = pow(2,i);
    if(PINC &= k)
    {
      state = 1 - state;
      m = k;
      break;
    }
  }
  
  if(state == 1)
  {
    PORTB = PORTB|m;
  }
  
  if(state == 0)
  {
    PORTB = 0b00000000;
  }
}

int main(void)
{
  DDRB = 0b11111111;
  PORTB = 0b00000000;
  
  while (1)
  {
    glowLED() ;
  }   
    /*int k = PINC;
    if(k)
    {
      if(flag == 1)
      {
        flag = 0;
      }
      else if(flag == 0)
      {
        m = k;
        flag = 1;
      }
    }
    if(flag)
      {
        PORTB ^= (1<<m);
      }
    else
      {
        PORTB = 0;
      }
    }*/

}

