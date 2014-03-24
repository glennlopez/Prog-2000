/*---------------------------------------------------------------------------------
 ____  ____  _____  ___      ___   ___    ___    ___  
(  _ \(  _ \(  _  )/ __) ___(__ \ / _ \  / _ \  / _ \ 
 )___/ )   / )(_)(( (_-.(___)/ _/( (_) )( (_) )( (_) )
(__)  (_)\_)(_____)\___/    (____)\___/  \___/  \___/ 
	C Programming and Intro to Microcontrollers
			Intructor: Denis Korabelnikov

Program:			Lab 5.2
Programmer:			Glenn Lopez
Initial Commit:		2014-03-17 11:08
Class:				E12
Description:		This is Lab 5.1,5.2,5.3 put together using simple function calls
Github page:		https://github.com/glennlopez/Prog-2000/	
---------------------------------------------------------------------------------*/

/*-- 			START HEADER FILES 			--*/
 #include <stdio.h>		//<-- Standard Input and Output library for C
 #include <ez8.h>		//<-- library for int1erfacing with Z8
/*-- 			END HEADER FILES 			--*/

/*-- 			START MAIN FUNCTION 		--*/
 // Port Configuration
 // 
 
/*-- 			END MAIN FUNCTION 			--*/

/*-- 			START LAB 5_2 FUNCTION 		--*/
 void main()
 {
 /*-- Initialize variable containers --*/
  unsigned int delay;
  unsigned char count=0;

 /*-- Initialize Port E --*/
  PEADDR=0x02;			//<-- alt function
  PECTL=0x00;			//<-- no alt function
  PEADDR=0x01;			//<-- data dir
  PECTL=0x00;			//<-- set all 8 bits to O/P
  PEADDR=0x03;			//<-- O/P control function
  PECTL=0x00;			//<-- set to push pull 
  PEADDR=0x00;			//<-- prevents inadvertent changes to sub registers

  while(1)
     {
	    PEOUT=count;
	    count++;
	    for
	    (
	    	delay=0xffff;
	    	delay>0;
	    	delay--
	    );
     }
  return;
 }
