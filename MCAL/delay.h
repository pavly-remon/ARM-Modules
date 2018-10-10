/*
 * delay.h
 *
 *  Created on: Oct 4, 2018
 *      Author: pavly
 */

#ifndef DELAY_H_
#define DELAY_H_

#define F_CPU 16000000                  //Oscillator Frequency 16 MHz

void SysTick_wait(unsigned int counts);
extern delay_ms(unsigned int delay);
extern delay_us(unsigned int delay);


#endif /* DELAY_H_ */
