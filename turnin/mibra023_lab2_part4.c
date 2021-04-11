/*	Author: lab
 *  Partner(s) Name: Mustafa Ibrahim
 *	Lab Section: 021
 *	Assignment: Lab #2  Exercise #4
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
    DDRB = 0x00; PORTB = 0xFF;
    DDRC = 0x00; PORTC = 0xFF;
    DDRD = 0xFF; PORTD = 0x00;  
    unsigned char tmpA = 0x00;
    unsigned char tmpB = 0x00;
    unsigned char tmpC = 0x00;
    unsigned char tmpD = 0x00;
    unsigned char check = 0x00;
    unsigned char totalWeight = 0x00;
    /* Insert your solution below */
    while (1) {
      	tmpA = PINA;tmpB = PINB; tmpC = PINC;  
	totalWeight = tmpA + tmpB + tmpC;
	if(totalWeight > 140) {	
	   check = check + 0x01;
	}
	totalWeight =(tmpA + tmpB+ tmpC >> 2) & 0xFC;
        if(((tmpA - tmpC) > 0x50) || ((tmpC - tmpA) > 0x50)){
            check = check + 0x02;
	}
	tmpD = totalWeight | check;
        PORTD = tmpD;
        tmpD = 0x00;
	check = 0x00;
	}
	return 0;
}

