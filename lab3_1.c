/*---------------------------------------------------------------------------------
 ____  ____  _____  ___      ___   ___    ___    ___  
(  _ \(  _ \(  _  )/ __) ___(__ \ / _ \  / _ \  / _ \ 
 )___/ )   / )(_)(( (_-.(___)/ _/( (_) )( (_) )( (_) )
(__)  (_)\_)(_____)\___/    (____)\___/  \___/  \___/ 
	C Programming and Intro to Microcontrollers
			Intructor: Denis Korabelnikov

Program:			Lab 3.1
Programmer:			Glenn Lopez
Initial Commit:		
Class:				E12
Description:		
Github page:		
	(visit the link above for the latest version history & revision)		
---------------------------------------------------------------------------------*/


// ***************************#include statements
#include <ez8.h> // GPI/O definitions
// ***************************#define statements
// ***************************main() function
int main(void)
{
//variable declarations and assignments;
unsigned char leds=0x02;
unsigned char push_button;
push_button=0x00;
//initialize port A
PAADDR=0x02;
PACTL=0x00;
PAADDR=0x01;
PACTL=0xF8;
PAADDR=0x03;
PACTL=0x00;
PAADDR=0x00; // prevents inadvertent changes to sub registers
//initialize port C
PCADDR=0x02;
PCCTL=0x00;
PCADDR=0x01;
PCCTL=0x01;
PCADDR=0x00;
//light LEDs
PAOUT=leds;
while (1){
push_button=PCIN;
push_button=push_button & 0x01;
if(push_button==0x00){
leds=leds^0x07;
PAOUT=leds;
}
}
return 0;
}
//*****************************end of program