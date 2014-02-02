/*---------------------------------------------------------------------------------
Program:			Lab 2.1
Programmer:			Glenn Lopez
Date:				2014-02-01 16:33
Class:				E12
Description:		Uses the 3 led's on zilog for output
Github page:		https://github.com/glennlopez/lab2_1/blob/master/lab2_1.c
	(visit the link above for the latest code history & revision)		
---------------------------------------------------------------------------------*/

//header files
#include <ez8.h>

/*-- 			START MAIN FUNCTION 			--*/
//int main(void) //!FLAG#1 - comment out if function does not require return 0;  
void main(void) //!FLAG#1 - comment out if function requires return 0;
{
	//CONSTANT CONFIGURATION

	//create local variable 'leds' to be data 0x05 (binary 101)
	unsigned char leds = 0x05;	//<-- light up first and last leds

	//alternate function 
	PAADDR = 0x02;				//<-- write cycle into PAADDR (0x0FDO)
	PACTL = 0x00;				//<-- 

	//data directions
	PAADDR = 0x01;				//<-- write cycle into PAADDR (0x0FDO)
	PACTL = 0xF8;				//<-- 

	//output controll
	PAADDR = 0x03;				//<-- write cycle into PAADDR (0x0FDO)
	PACTL = 0x00;				//<--

	//prevent inadvertant changes to the sub-registers
	PAADDR = 0x00;				//<--

	//assign local variable 'leds' to PAOUT constant
	PAOUT = leds;				//<-- 

/*-- 			END MAIN FUNCTION 			--*/
//return 0; //!FLAG#1 - comment out if int main(void) is not in use


}