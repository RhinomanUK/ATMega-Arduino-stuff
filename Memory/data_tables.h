/* data_tables.h

    memory handling functions for for ATMega 2560
	
	AVR EEPROM routines are not reentrant so they are not used, we reproduce the EEMEM macro below
	For defining a custom Flash memory area (.FLASH_DATA) FLMEM is defined below
	To make the memory areas visible to other code pointers are declared below
	
	Author: James Holland
	Date:  21st January 2021
	version: 0.1 -  only single ended conversions supported
*/

#ifndef DATA_TABLES_H
#define DATA_TABLES_H

#define EEMEM   __attribute__((section(".eeprom")))
#define FLMEM __attribute__ ((section (".FLASH_DATA")))

uint8_t* DATA_ID_STR;

uint8_t* CTS_VLimits;
uint8_t* CTS_Default;
uint8_t* CTS_Index;
uint8_t* ColdStartFuel;
uint8_t* CTSCompFuel;
uint8_t* CTSAccEnrich1;
uint8_t* CTSAccEnrich2;
uint8_t* CTSAccEnrich3;
uint8_t* Base_Ign_LUT;

void initDataMemory(void);


#endif	