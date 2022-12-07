/* ADCHandler.cpp

    ADC Routines for ATMega 2560
	
	These routines were written, primarily, to allow an ADC conversion to
	execute place as a background task. Selection of more configurations
	is also possible  Refer to the datasheet for the ATMega and Microchip 
	app note AN2538 for details
	To improve execution speed the ADCn channel number is used
	and not the Arduino An pin designation.
	
	Author: James Holland
	Date:  21st January 2021
	version: 0.1 -  only single ended conversions supported
*/

#ifndef DATA_TABLES_H
#define DATA_TABLES_H

/* just for test I want to place these in EEPROM

/* CTS tables - random data */
/* CTS tables - random data */
uint8_t CTS_VLimits[2] __attribute__ ((section (".EEPROM_DATA"))); 				/* voltage limits for diagnostics */
uint8_t CTS_Default	__attribute__ ((section (".EEPROM_DATA")));					/* default if sensor fault detected */
uint8_t CTS_Index[16] __attribute__ ((section (".EEPROM_DATA")));
uint8_t ColdStartFuel [16] __attribute__ ((section (".EEPROM_DATA")));
uint8_t CTSCompFuel [16] __attribute__ ((section (".EEPROM_DATA")));
uint8_t CTSAccEnrich1 [16] __attribute__ ((section (".EEPROM_DATA")));
uint8_t CTSAccEnrich2 [16] __attribute__ ((section (".EEPROM_DATA")));
uint8_t CTSAccEnrich3 [16] __attribute__ ((section (".EEPROM_DATA")));


#endif	