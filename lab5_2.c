/*---------------------------------------------------------------------------------
 ____  ____  _____  ___      ___   ___    ___    ___  
(  _ \(  _ \(  _  )/ __) ___(__ \ / _ \  / _ \  / _ \ 
 )___/ )   / )(_)(( (_-.(___)/ _/( (_) )( (_) )( (_) )
(__)  (_)\_)(_____)\___/    (____)\___/  \___/  \___/ 
	C Programming and Intro to Microcontrollers
			Intructor: Denis Korabelnikov

Program:		Lab 5.2
Programmer:		Glenn Lopez
Initial Commit:		2014-03-17 11:08
Class:			E12
Description:		Light Ladder
Github page:		https://github.com/glennlopez/Prog-2000/	
---------------------------------------------------------------------------------*/

/*-- 			START HEADER FILES 			--*/
 #include <stdio.h>			//<-- Standard Input and Output library for C
 #include <ez8.h>			//<-- library for int1erfacing with Z8
/*-- 			END HEADER FILES 			--*/

/*-- 			START MAIN FUNCTION 		--*/
 void main()
 {
 /*-- Initialize variable containers --*/
  unsigned int delay;			//<-- delay is an positive only integer
  unsigned char count = 0;		//<-- count up or down for "count"

 /*-- Initialize Port E --*/
  PEADDR=0x02;				//<-- alt function
  PECTL=0x00;			  	//<-- no alt function

  PEADDR=0x01;				//<-- data dir
  PECTL=0x00;			  	//<-- set all 8 bits to O/P

  PEADDR=0x03;				//<-- O/P control function
  PECTL=0x00;			  	//<-- set to push pull 
  
  PEADDR=0x00;				//<-- prevents inadvertent changes to sub registers

  while(1)				//<-- execute commands while true
     {
	    PEOUT=count;		//<-- makes PEOUT take the value of the value of count
	    count++;			//<-- increments count for every...
	    for
	    (
	    	delay=0xffff;		//<-- for starting at ffff
	    	delay>0;		//<-- for delay greater than 0
	    	delay--			//<-- for decrementing delay
	    );
     }
  return;				//<-- terminate function and return function call
 }
/*-- 			END MAIN FUNCTION 			--*/
