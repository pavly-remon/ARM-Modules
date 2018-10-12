/*
 * delay.c
 *
 *  Created on: Oct 4, 2018
 *      Author: pavly remon
 */
#include "tm4c123gh6pm.h"
#include "delay.h"


void SysTick_wait(unsigned int counts){

    NVIC_ST_RELOAD_R = counts-1;
    NVIC_ST_CURRENT_R = 0;
    while((NVIC_ST_CTRL_R&(0x00010000))==0);
}
extern delay_ms(unsigned int delay){
    unsigned int i;
    unsigned int counts = 0.001*F_CPU;
    NVIC_ST_CTRL_R=0x00000000;
    NVIC_ST_CTRL_R=0x00000005;      //Enable counting and using system clock and disable interrupt
    for(i = 0;i<delay;i++){
        SysTick_wait(counts);
    }
}
extern delay_us(unsigned int delay){
    unsigned int i;
    unsigned int counts = 0.000001*F_CPU;
    NVIC_ST_CTRL_R=0x00000000;
    NVIC_ST_CTRL_R=0x00000005;      //Enable counting and using system clock and disable interrupt
    for(i = 0;i<delay;i++){
        SysTick_wait(counts);
    }
}
