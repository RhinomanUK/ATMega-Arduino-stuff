/* EEPROM.c

    EEPROM read and write routines for ATMega
	
	returns: 0 if successful
			1 if the routine aborted because the memory location was being written
	
	Author: James Holland
	Date:  21st January 2021
	version: 0.1
*/



uint8_t EEPROM_write(unsigned int uiAddress, uint_t ucData)
{
	
	uint8_t busy = 1;
	
	if(!(EECR & (1<<eewe)))
	{
		EEAR = uiAddress;		/* Set up address and data registers */
		EEDR = ucData;			
		
		noInterrupts();			/* interrupts must be disabled */
		EECR |= (1<<eemwe);		/* Write logical one to EEMWE */
		EECR |= (1<<eewe);		/* Start eeprom write by setting EEWE */
		Interrupts();			/* enable interrupts */
		busy = 0;
	}
	
	return busy;
}

uint8_t EEPROM_read(unsigned int uiAddress, uint *ucData)
{
	uint8_t busy =1;
	
	
	if(!(EECR & (1<<eewe)))
	{
	
		EEAR = uiAddress;			/* Set up address register */
		EECR |= (1<<eere);			/* Start eeprom read by writing EERE */
		ucData = EEDR;				/* read the data */
		busy = 0;
	}

return busy;
}





