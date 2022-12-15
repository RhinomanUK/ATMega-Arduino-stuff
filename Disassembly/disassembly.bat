REM Hold down the shift key while uploading to create hex files etc. in ...Local Settings\Temp
REM Run this batch file in your Arduino projects folder with the name of your project as the parameter.
REM
REM <ARDUINOPATH>/hardware/tools/avr/bin/avr-objdump -d <BUILDPATH>/<PROJECTNAME>.cpp.elf > <PROJECTNAME>.asm
REM
ECHO Producing ASM file for %1
avr-objdump.exe -S "speeduino.ino.elf" > "disassem.asm"
