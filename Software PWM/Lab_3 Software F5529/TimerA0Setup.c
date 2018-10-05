#include <msp430.h>

void TimerA0Setup(){
    TA0CCTL0 = CCIE;                    //Enable interrupt in compare mode
    TA0CCR0 = 18500;                     //Set the period in the Timer A0 Capture/Compare 0 register to 1000 Microseconds.
}
