/*
 * test.c
 *
 *  Created on: Oct 4, 2018
 *      Author: pavly remon
 */



#include "MCAL/tm4c123gh6pm.h"
#include "MCAL/GPIO.h"
#include "MCAL/delay.h"

int main (){

    GPIO_vSetConfig('F', 0x0E, 0x0E, 0x0E);
    GPIO_vWritePORT('F', 0x00);

    while(1){
        GPIO_PORTF_DATA_R ^= 0x0E;
        delay_ms(5000);
    }
}
