#include <msp430.h>

#define LED0 BIT0
#define LED1 BIT7
#define LED_OUT P1OUT
#define LED_OUT4 P4OUT
#define LED_DIR P1DIR
#define PULL_UP P1REN
#define LED_SEL P1SEL
#define LED_SEL2 P1SEL2
#define BUTTON BIT1
#define BTN_INT_EN P1IE
#define BTN_INT_EDGE P1IES
#define CLRFLG P1IFG


void ButtonSetup();
void LEDsetup();
void TimerA0Setup();
void TimerA1Setup();

volatile unsigned int i;

int main(void)
{
  WDTCTL = WDTPW + WDTHOLD;                 // Stop WatchDogTimer
  ButtonSetup();
  LEDsetup();
  TimerA0Setup();
  TimerA1Setup();

  __enable_interrupt();                     // enable interrupts
  while(1);
}
#pragma vector = TIMER1_A0_VECTOR //Creating timer A0 as an interrupt vector
__interrupt void Timer1_A (void) //Deals with slight button bounce issue while also turning off the light after a set time.
{
    BTN_INT_EN |=  BUTTON;                  // P1.3 (Switch2) interrupt enabled
    LED_OUT &= ~LED0;
    TA1CTL = 0x0000;                        // Disable Clock and Reset
    CLRFLG &= ~BUTTON;                         //Disables interrupt flag
}

#pragma vector=PORT1_VECTOR
__interrupt void Port_1(void)
{
    LED_OUT4 |= BIT7; //Enables P4.7
    if(TA1CCR1 >= 1000)//Logic to increase the duty cycle by 10%
    {
        TA1CCR1 = 0;
    }
    else
    {
        TA1CCR1 += 100;
    }
    TA1CTL = TASSEL_1 | MC_1; // AClock, Up mode
    BTN_INT_EN &= ~BUTTON;                  //Disables interrupt on P1.3
    CLRFLG &= ~BUTTON;                      // clears interrupt flag on P1.3

}

//Timer A1 interrupt vectors: control PWM LED
#pragma vector=TIMER0_A1_VECTOR //Disables the LED once the time has reached the duty cycle %
__interrupt void Timer0_A1 (void)
{
    LED_OUT4 &= ~(LED1); //turns off red led
    TA0CCTL1 &= ~LED0; //clears flag
}

#pragma vector=TIMER0_A0_VECTOR //Re-enables the LED at the end of the cycle
__interrupt void Timer0_A0 (void)
{
    if(TA0CCR1 != 0)
    {
        LED_OUT4 |= (LED1); //turns on red led
    }
    TA0CCTL0 &= ~LED0;  //clears flag
}
