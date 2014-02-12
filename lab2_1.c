/*---------------------------------------------------------------------------------
 ____  ____  _____  ___      ___   ___    ___    ___  
(  _ \(  _ \(  _  )/ __) ___(__ \ / _ \  / _ \  / _ \ 
 )___/ )   / )(_)(( (_-.(___)/ _/( (_) )( (_) )( (_) )
(__)  (_)\_)(_____)\___/    (____)\___/  \___/  \___/ 
	C Programming and Intro to Microcontrollers
			Intructor: Denis Korabelnikov

Program:				Lab 2.1
Programmer:				Glenn Lopez
Initial Commit:			2014-02-01 16:33
Class:					E12
Description:			Yellow light turns on if leds = 0x05 [line 29]
Github page:			https://github.com/glennlopez/Prog-2000/blob/master/lab2_1.c
	(visit the link above for the latest version history & revision)		
---------------------------------------------------------------------------------*/

/*-- 			START HEADER FILES 			--*/
 //#include <stdio.h>			//<-- Standard Input and Output library for C
 #include <ez8.h>				//<-- library for interfacing with Z8
 //#include<myFunctions.h>		//<-- library for future subroutines and identifiers
/*-- 			END HEADER FILES 			--*/

/*-- 			START MAIN FUNCTION 			--*/
 //int main(void) //!FLAG#1 - comment out if function does not require return 0;  
 void main(void)  //!FLAG#1 - comment out if function requires return 0;
 {

	//create local variable 'leds' to be data 0x05
	unsigned char leds = 0x05;	//<-- [Play with the hex value] Hint: h5=b101

	/*- PORT A CONFIGURATION -*/	
	 //alternate function 
	 PAADDR = 0x02;				//<-- write cycle into PAADDR (0x0FDO)
	 PACTL = 0x00;				//<-- disable dem' alternative functions bra'

	 //data directions
	 PAADDR = 0x01;				//<-- write cycle into PAADDR (0x0FDO)
	 PACTL = 0xF8;				//<-- set pins 2 to 0 outputs, 7 to 3 inputs

	 //output controll
	 PAADDR = 0x03;				//<-- write cycle into PAADDR (0x0FDO)
	 PACTL = 0x00;				//<-- makes all outputs push-pull

	 //preventative-care
	 PAADDR = 0x00;				//<-- prevents any changes to sub-regs

	 //assign local variable 'leds' to PAOUT constant
	 PAOUT = leds;				//<-- write cycle to PAOUT (0x0FD3)

 	 //return 0; //!FLAG#1 - comment out if int main(void) is not in use
 }
/*-- 			END MAIN FUNCTION 			--*/

// experimental build available for review at
// https://github.com/glennlopez/Prog-2000/tree/experimental