/*---------------------------------------------------------------------------------
 ____  ____  _____  ___      ___   ___    ___    ___  
(  _ \(  _ \(  _  )/ __) ___(__ \ / _ \  / _ \  / _ \ 
 )___/ )   / )(_)(( (_-.(___)/ _/( (_) )( (_) )( (_) )
(__)  (_)\_)(_____)\___/    (____)\___/  \___/  \___/ 
	C Programming and Intro to Microcontrollers
			Intructor: Denis Korabelnikov

Program:			Lab 5.3
Programmer:			Glenn Lopez
Initial Commit:		2014-03-17 11:08
Class:				E12
Description:		Binary Counter with conditional Delay
Github page:		https://github.com/glennlopez/Prog-2000/	
---------------------------------------------------------------------------------*/

/*-- 			START HEADER FILES 			--*/
 //#include <stdio.h>				//<-- Standard Input and Output library for C
 #include <ez8.h>					//<-- library for int1erfacing with Z8
/*-- 			END HEADER FILES 			--*/

/*-- 			START MAIN FUNCTION 		--*/
 void main (void)
 {
	unsigned int delay;

	/*-- Port E Config --*/
	PEADDR = 0x02;					//<-- Alt address
	PECTL = 0x00;					//<-- Disable alt function

	PEADDR = 0x01;					//<-- Data address
	PECTL = 0x00;					//<-- Makes all bits as o/p

	PEADDR = 0x03;					//<-- Output Controll
	PECTL = 0x00;					//<-- Set to PushPull

	PEADDR = 0x00;					//<-- Prevents changes 
	while (1)
	{	
		PEOUT = 0x01;				//<-- PEOUT logic 1
			for 					 
				(					 
					delay = 1000; 	//<-- Delay 1000 ms
					delay > 0;		//<-- if greater than 0
					delay--			//<-- countdown
				);					 
								 
		PEOUT = 0x00;				//<-- PEOUT logic 0 (set)
			for 					 
				(					
				delay = 1000;		//<-- Delay 1000 ms
				delay > 0;			//<-- if greater than 0
				delay--				//<-- countdown
				);					
	}
 }
/*-- 			END MAIN FUNCTION 			--*/
