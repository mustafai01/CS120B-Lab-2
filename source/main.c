/*	Author: lab
 *  Partner(s) Name: Mustafa Ibrahim
 *	Lab Section: 021
 *	Assignment: Lab #2  Exercise #2
 *	Exercise Description: [optional - include for your own benefit]
 *
 *	I acknowledge all content contained herein, excluding template or example
 *	code, is my own original work.
 */
#include <avr/io.h>
#ifdef _SIMULATE_
#include "simAVRHeader.h"
#endif

int main(void) {
    /* Insert DDR and PORT initializations */
    DDRA = 0x00; PORTA = 0xFF;
    DDRB = 0xFF; PORTC = 0x00;  
    unsigned char tmpA = 0x00;
    unsigned char cntavail = 0;
    /* Insert your solution below */
    while (1) {
	tmpA = PINA & 0x0F;

	if (tmpA == 0x00) {
        	cntavail = 4;
	}
	if (tmpA == 0x01) {
        	cntavail = 3;
	}
	if (tmpA == 0x02) {
        	cntavail = 3;
	}
	if (tmpA == 0x03) {
        	cntavail = 2;
	}
	if (tmpA == 0x04) {
        	cntavail = 3;
	}
	if (tmpA == 0x05) {
        	cntavail = 2;
	}
	if (tmpA == 0x06) {
        	cntavail = 2;
	}
	if (tmpA == 0x07) {
        	cntavail = 1;
	}
	if (tmpA == 0x08) {
        	cntavail = 3;
	}
	if (tmpA == 0x09) {
        	cntavail = 2;
	}
	if (tmpA == 0x0A) {
        	cntavail = 2;
	}
	if (tmpA == 0x0B) {
        	cntavail = 1;
	}
	if (tmpA == 0x0C) {
        	cntavail = 2;
	}
	if (tmpA == 0x0D) {
        	cntavail = 1;
	}
	if (tmpA == 0x0E) {
        	cntavail = 1;
	}
	if (tmpA == 0x0F) {
        	cntavail = 0;
	}
	
	if (cntavail == 0) {
	cntavail = 0x80;
	}

	PORTC = cntavail;

    }
    return 1;
}

