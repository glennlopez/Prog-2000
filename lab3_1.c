/*---------------------------------------------------------------------------------
 ____  ____  _____  ___      ___   ___    ___    ___  
(  _ \(  _ \(  _  )/ __) ___(__ \ / _ \  / _ \  / _ \ 
 )___/ )   / )(_)(( (_-.(___)/ _/( (_) )( (_) )( (_) )
(__)  (_)\_)(_____)\___/    (____)\___/  \___/  \___/ 
	C Programming and Intro to Microcontrollers
			Intructor: Denis Korabelnikov

Program:			Lab 3.1
Programmer:			Glenn Lopez
Initial Commit:		2014-02-03 14:00
Class:				E12
Description:		Follow up to lab 2.1 but with a button function
Github page:		https://github.com/glennlopez/Prog-2000/blob/master/lab3_1.c
	(visit the link above for the latest version history & revision)		
---------------------------------------------------------------------------------*/


/*-- 			START HEADER FILES 			--*/
//#include <stdio.h>				//<-- Standard Input and Output library for C
#include <ez8.h>					//<-- library for int1erfacing with Z8
//#include<myFunctions.h>			//<-- library for future subroutines and identifiers
/*-- 			END HEADER FILES 			--*/


/*-- 			START MAIN FUNCTION 			--*/
int main(void) //!FLAG#1 - comment out if function does not require return 0;  
//void main(void) //!FLAG#1 - comment out if function requires return 0;	
{
	//variable declarations and assignments;
	unsigned char leds=0x02; 		//<-- makes 0x02 = leds
	unsigned char push_button;		//<-- makes 0x00 = push_button
	push_button=0x00;

/*- PORT A CONFIGURATION -*/

	//alternate function 
	PAADDR = 0x02;					//<-- write cycle into PAADDR
	PACTL = 0x00;					//<-- disable altfuctions

	//data directions
	PAADDR = 0x01;					//<-- write cycle into PAADDR
	PACTL = 0xF8;					//<-- set pins 2-0 as outputs and 7-3 as inputs

	//output controll
	PAADDR = 0x03;					//<-- write cycle into PAADDR
	PACTL = 0x00;					//<-- makes all outputs push-pull

	//preventative care 
	PAADDR = 0x00; 					//<-- prevents any changes to the subregs
	
/*- PORT C CONFIGURATION -*/
	PCADDR = 0x02;					//<-- 
	PCCTL = 0x00;					//<-- 

	PCADDR = 0x01;					//<-- 
	PCCTL = 0x01; 					//<-- 

	//preventative care
	PCADDR = 0x00;					//<-- prevents and changes to the subregs
	
	/*-- 			START BUTTON STATEMENT 			--*/
	PAOUT=leds;
	while (1)
	{
		push_button = PCIN;					//<-- 				
		push_button = push_button & 0x01;	//<-- 
		if(push_button == 0x00)				//<-- 
		{
			leds=leds^0x07;							//<-- 
			PAOUT=leds;								//<-- 
		}
	}
	/*-- 			END BUTTON IF STATEMENT 			--*/

return 0; //!FLAG#1 - comment out if int main(void) is not in use
}
/*-- 			END MAIN FUNCTION 			--*/