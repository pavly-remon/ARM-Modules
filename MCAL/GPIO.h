/*
 * GPIO.h
 *
 *  Created on: Oct 4, 2018
 *      Author: pavly
 */

#ifndef GPIO_H_
#define GPIO_H_

typedef unsigned char u8;
typedef enum {
    Nok,
    Ok
}Status;

#define A 0
#define B 1
#define C 2
#define D 3
#define E 4
#define F 5

extern void GPIO_vSetConfig(u8 PORTName,u8 DEN,u8 DIR,u8 PCTL);
extern void GPIO_vWritePORT(u8 PORTName,u8 val);
extern Status GPIO_cReadPin(u8 PORTName,u8 PinNum,u8 *val);

#endif /* GPIO_H_ */
