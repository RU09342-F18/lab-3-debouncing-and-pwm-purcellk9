/*
 * LEDSetup.c
 *
 *  Created on: Oct 2, 2018
 *      Author: Kevin Purcell
 */

#include <msp430.h>

#define LED0 BIT0
#define LED1 BIT6
#define LED_OUT P1OUT
#define LED_DIR P1DIR
#define LED_SEL P1SEL
#define LED_SEL2 P1SEL2
#define BUTTON BIT3
#define BTN_INT_EN P1IE
#define BTN_INT_EDGE P1IES
#define CLRFLG P1IFG

void LEDSetup(void)
{
    LED_DIR |= LED1;        //P1.6 OUTPUT
    //LED_SEL |= LED1;        // P1.6 FOR TA0.1 OUTPUT
    //LED_SEL2 &= ~LED1;      // Select default function for P1.6
}
