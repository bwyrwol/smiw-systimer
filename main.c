
#include <avr/io.h>
#define F_CPU 14745600UL
#include "systimer.h"

void systimer_callback(void)
{
  PORTA ^= 0b11000000;
}

int main(void)
{

  DDRA |= 0b11000000;
  PORTA |= 0b11000000;

  systimer_init(100); // in ms
  
  while (1) 
  {
  }
}
