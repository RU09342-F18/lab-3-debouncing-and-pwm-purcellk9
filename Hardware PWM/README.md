# Hardware PWM
Through out this lab, mulitple define statements and soource files were used. In order to more easily write codes and to keeo them organized. The MSP430G2553 and the MSP430FR2311 were used to complete the software decoudning portion of the code.

# Functionality
Two interrupts were used to in order to complete the hawrdware pusle wave modulation, timer1_A0 and port1. Where when the button is pressed the timer1_A0 enbles the interrupt and resets the timer itself. Port1 or the button interrput engages and toggles the LED, where each press of the button increases the brightness of the LED by 10%. When the LED is at max brightness the button will reset, or turn off, the LED.THe code will then continue. Source codes: LedSetup, ButtonSteup, DutyCyleSetup, and TimerA0Setup were ued.  

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
- DutyCycleSetup;

### Outputs
#define LED_OUT P1OUT

## MSP430FR2311
### Inputs
- #define LED0 BIT0
- #define LED1 BIT0
- #define LED_DIR P2DIR
- #define PULL_UP P2REN
- #define LED_SEL P2SEL0
- #define LED_SEL2 P2SEL1
- #define BUTTON BIT1
- #define BTN_INT_EN P1IE
- #define BTN_INT_EDGE P1IES
- #define CLRFLG P1IFG

- LEDSetup;
- ButtonSetup;
- TimerA0Setup;
- DutyCycleSetup;

### Outputs
- #define LED_OUT P2OUT
