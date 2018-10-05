#include <msp430.h> 


/**
 * main.c
 */
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

void LEDSetup();
void ButtonSetup();
void TimerA0Setup();

volatile unsigned int i;

int main(void)
{
	WDTCTL = WDTPW | WDTHOLD;	// stop watchdog timer
	LEDSetup();
	ButtonSetup();
	TimerA0Setup();

	__enable_interrupt();
	
}
#pragma vector = TIMER0_A0_VECTOR //Creating timer A0 as an interrupt vector
__interrupt void Timer0_A (void)//Deals with slight button bounce issue while also turning off the light after a set time.
{
    P1IE |= BIT3; //Enables P1.3 interrupt
    TA0CTL = 0x0000; //Disables and resets Timer A0
}

#pragma vector=PORT1_VECTOR
__interrupt void Port_1(void)
{
    TA0CTL = TASSEL_1 | MC_1; // AClock, Up mode
    P1IE &= ~BIT3; //Disables interrupt on P1.3
    P1IFG &= ~BIT3; //Disables interrupt flag

    P1OUT ^= BIT6; //Enables P1.0
}
