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
    unsigned char tmpA0 = 0x00;
    unsigned char tmpA1 = 0x00;
    unsigned char tmpA2 = 0x00;
    unsigned char tmpA3 = 0x00;
    unsigned char cntavail = 0;
    /* Insert your solution below */
    while (1) {
	tmpA0 = PINA & 0x01;
	tmpA1 = PINA & 0x02;
	tmpA2 = PINA & 0x04;
	tmpA3 = PINA & 0x08;

	if (tmpA0 == 0x00) {
        	cntavail += 1;
	}
	if ((tmpA1 >> 1) == 0x00) {
                cntavail += 1;
        }
	if ((tmpA2 >> 2) == 0x00) {
                cntavail += 1;
        }
	if ((tmpA3 >> 3) == 0x00) {
                cntavail += 1;
        }
	
	PORTC = cntavail;

    }
    return 1;
}
