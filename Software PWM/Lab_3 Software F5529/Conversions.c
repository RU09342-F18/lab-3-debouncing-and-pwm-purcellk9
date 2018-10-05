/*
 * Conversions.c
 *
 *  Created on: Oct 2, 2018
 *      Author: Kevin Purcell
 */

#include <msp430.h>

int Conversions(int Hz)
{
    return ((32768/(Hz*3))-1);
}
