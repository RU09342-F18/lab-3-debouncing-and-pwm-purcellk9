# Software PWM
Through out this lab, mulitple define statements and soource files were used. In order to more easily write codes and to keeo them organized. The MSP430G2553 and the MSP430F5529 were used to complete the software pulse wave modulation portion of the code.

# Functionality
Four interrupts were used to in order to complete the software pusle wave modulation, timer0_A0, timer0_A1, timer1_A0, and port1. Where when timer1_A0 Deals with slight button bounce issue while also turning off the light after a set time. Port1 enbles the interrupt and resets the timer itself. Port1 or the button interrput engages and toggles the LED, where each press of the button increases the brightness of the LED by 10%. When the LED is at max brightness the button will reset, or turn off. Timer0_A1 disables the LED once the time has reached the duty cycle %. Timer0_A0 re-enables the LED at the end of the cycle the LED. Source codes: LedSetup, ButtonSteup, DutyCyleSetup, and TimerA0Setup were ued.  

# Inputs/Ouputs
## MSP403G2553
### Inputs
- #define LED0 BIT0
- #define LED1 BIT6
- #define LED_DIR P1DIR
- #define LED_SEL P1SEL
- #define LED_SEL2 P1SEL2
- #define BUTTON BIT3
- #define BTN_INT_EN P1IE
- #define BTN_INT_EDGE P1IES
- #define CLRFLG P1IFG

- LEDSetup;
- ButtonSetup;
- TimerA0Setup;
- TimerA1Setup;
- DutyCycleSetup;

### Outputs
- #define LED_OUT P1OUT

## MSP430F5529
### Inputs
- #define LED0 BIT0
- #define LED1 BIT7
- #define LED_DIR P1DIR
- #define PULL_UP P1REN
- #define LED_SEL P1SEL
- #define LED_SEL2 P1SEL2
- #define BUTTON BIT1
- #define BTN_INT_EN P1IE
- #define BTN_INT_EDGE P1IES
- #define CLRFLG P1IFG

- LEDSetup;
- ButtonSetup;
- TimerA0Setup;
- TimerA1Setup;
- DutyCycleSetup;

### Outputs
- #define LED_OUT P1OUT
- #define LED_OUT4 P4OUT
