#include <msp430.h>

#define LED0 BIT0
#define LED1 BIT0
#define LED_OUT P2OUT
#define LED_DIR P2DIR
#define PULL_UP P2REN
#define LED_SEL P2SEL0
#define LED_SEL2 P2SEL1
#define BUTTON BIT1
#define BTN_INT_EN P1IE
#define BTN_INT_EDGE P1IES
#define CLRFLG P1IFG

void ButtonSetup();
void LEDsetup();
void TimerB0Setup();
void DutyCycleSetup();

int main(void)
{
  WDTCTL = WDTPW + WDTHOLD;                 // Stop WatchDogTimer
  PM5CTL0 &= ~LOCKLPM5;                     // Disable the GPIO power-on default high-impedance mode
  ButtonSetup();                            // Setup buttons
  LEDsetup();                               // Setup LEDs
  TimerB0Setup();                           // Setup TimerB0
  DutyCycleSetup();                         // Setup DutyCycle with TimerB1

  __enable_interrupt();                     // enable interrupts
  while(1);
}
#pragma vector = PORT1_VECTOR
__interrupt void Port_1(void)
{
    if(TB1CCR1 >= 1000)//Logic to increase the duty cycle by 10%
    {
        TB1CCR1 = 0;
    }
    else
    {
        TB1CCR1 += 100;
    }

    TB0CTL = TBSSEL_1 | MC_1; // AClock, Up mode
    BTN_INT_EN &= ~BUTTON;                  // Disables interrupt on P1.3
    CLRFLG &= ~BUTTON;                      // clears interrupt flag on P1.3
}

#pragma vector = TIMER0_B0_VECTOR //Creating timer A0 as an interrupt vector
__interrupt void Timer0_B (void)//Deals with slight button bounce issue while also turning off the light after a set time.
{

    P1IFG &= ~BIT1; //Disables interrupt flag
    BTN_INT_EN |=  BUTTON;                  // P1.3 (Switch2) interrupt enabled
    TB0CTL = 0x0000; //Disables and resets Timer A0
}
