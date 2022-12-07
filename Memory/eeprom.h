/* EEPROM.h

    EEPROM read and write routines for ATMega
	
	Author: James Holland
	Date:  21st January 2021
	version: 0.1
*/

#ifndef EEPROM_H
#define EEPROM_H

/* 
uint8_t EEPROM_read(unsigned int uiAddress, uint *ucData)
returns: 0 if successful
			1 if the routine aborted because the memory location was being written
			
notes: 	Code execution stops for 4 cycles during EEPROM read.
		*/
uint8_t EEPROM_read(unsigned int uiAddress, uint *ucData);
/*

uint8_t EEPROM_read(unsigned int uiAddress, uint *ucData)
returns: 0 if successful
			1 if the routine aborted because the memory location was being written
			
notes: 	interrupts are briefly disabled during this routine. 
		Code execution stops for 2 cycles during EEPROM write.
		*/
uint8_t EEPROM_write(unsigned int uiAddress, uint_t ucData);

#endif