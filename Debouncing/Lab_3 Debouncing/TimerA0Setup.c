/*
 * TimerA0Setup.c
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


void TimerA0Setup()
{
    TA0CCTL0 = CCIE;
    TA0CCR0 = 18500;
    TA0CTL = TASSEL_1 + MC_1;
}
