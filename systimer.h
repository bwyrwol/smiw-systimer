#ifndef SYSTIMER_H_
#define SYSTIMER_H_

#include <stdint.h>
#include <avr/interrupt.h>
#include <avr/pgmspace.h>

#ifndef F_CPU
#define F_CPU 14745600UL
#warning F_CPU is defined as 14745600UL
#endif

uint8_t systimer_init(uint16_t systick);
void systimer_callback(void) __attribute__((weak));

#endif /* SYSTIMER_H_ */