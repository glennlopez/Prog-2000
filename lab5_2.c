/*---------------------------------------------------------------------------------
 ____  ____  _____  ___      ___   ___    ___    ___  
(  _ \(  _ \(  _  )/ __) ___(__ \ / _ \  / _ \  / _ \ 
 )___/ )   / )(_)(( (_-.(___)/ _/( (_) )( (_) )( (_) )
(__)  (_)\_)(_____)\___/    (____)\___/  \___/  \___/ 
	C Programming and Intro to Microcontrollers
			Intructor: Denis Korabelnikov

Program:			Lab 5.1
Programmer:			Glenn Lopez
Initial Commit:		2014-03-17 11:08
Class:				E12
Description:		
Github page:		https://github.com/glennlopez/Prog-2000/	
---------------------------------------------------------------------------------*/

/*-- 			START HEADER FILES 			--*/
 #include <stdio.h>						//<-- Standard Input and Output library for C
 #include <ez8.h>						//<-- library for int1erfacing with Z8
/*-- 			END HEADER FILES 			--*/

/*-- 			START MAIN FUNCTION 		--*/

void main(void)
{
	char count; 							// Declare variables
	unsigned long int delay;
	PEADDR = 0x01; 							// Initialize PORT E as output
	PECTL = 0x00;
	count = 1; 								// Initialize count;
	while(1)
	 {
		PEOUT=count; 						// Write count to LEDs
		for(
			delay=200000; 					// delay for 2 seconds
			delay>0;
			delay--
			);
			count++; 						//Increment count
		if(count>200) //end of count?
		count=1; //Yes: reset count to 0
	 }//end while
 return;
}//end main
/*-- 			END MAIN FUNCTION 			--*/
