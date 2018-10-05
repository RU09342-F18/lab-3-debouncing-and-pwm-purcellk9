#include <msp430.h>
/*
 * DutyCycleSetup.c
 *
 *  Created on: Oct 2, 2018
 *      Author: Kevin Purcell
 */

void DutyCycleSetup(void){

    TA0CCR0 = 18500;                             // PWM Period
      TA0CCTL1 = OUTMOD_7;                         // CCR1 reset/set
      TA0CCR1 = 100;                                 // CCR1 PWM duty cycle
      TA0CTL = TASSEL_2 + MC_1;           // SMCLK, up mode
}
