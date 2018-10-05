# Software Debouncing
Through out this lab, mulitple define statements and soource files were used. In order to more easily write codes and to keeo them organized. The MSP430G2553 and the MSP432PR401R were used to complete the software decoudning portion of the code.

# Functionality
Two interrupts were used to in order to complete the decouncing , timerA1 and port1. Where when the button is pressed the timerA1 enbles the interrupt and resets the timer itself. Port1 or the button interrput engages and toggles the LED. Source codes: LedSetup, ButtonSteup, DutyCyleSetup, and TimerA0Setup were ued.  

# Inputs/Ouputs
## MSP403G2553
### Inputs
- #define LED0 BIT0
- #define LED_OUT P1OUT
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

### Outputs
- #define LED1 BIT6

## MSP432PR401R
### Inputs

### Outputs
