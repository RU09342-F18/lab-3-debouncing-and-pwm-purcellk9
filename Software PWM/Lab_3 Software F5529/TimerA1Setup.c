#include <msp430.h>

void TimerA1Setup(){
    TA1CCTL1 = CCIE; //Enable interrupt in compare mode
        TA1CCTL0 = CCIE; //Enable interrupt in compare mode
        TA1CTL = TBSSEL_2 + MC_1; //SMCLK, up mode
        TA1CCR0 = 1000; //Full Cycle
        TA1CCR1 = 500; //Sets the duty cycle to 50%
}
