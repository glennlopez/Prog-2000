/*---------------------------------------------------------------------------------
 ____  ____  _____  ___      ___   ___    ___    ___  
(  _ \(  _ \(  _  )/ __) ___(__ \ / _ \  / _ \  / _ \ 
 )___/ )   / )(_)(( (_-.(___)/ _/( (_) )( (_) )( (_) )
(__)  (_)\_)(_____)\___/    (____)\___/  \___/  \___/ 
	C Programming and Intro to Microcontrollers
			Intructor: Denis Korabelnikov

Program:		Lab 5.3
Programmer:		Glenn Lopez
Initial Commit:		2014-03-17 11:08
Class:			E12
Description:		Binary Counter with conditional Delay
Github page:		https://github.com/glennlopez/Prog-2000/	
---------------------------------------------------------------------------------*/

/*-- 			START HEADER FILES 			--*/
 //#include <stdio.h>				//<-- Standard Input and Output library for C
 #include <ez8.h>				//<-- library for int1erfacing with Z8
/*-- 			END HEADER FILES 			--*/

/*-- 			START MAIN FUNCTION 		--*/
 void main (void)
 {
 	long int delay;
 	unsigned char val;
 	unsinged char count = 0;
 	
 	PEADDR = 0X02;
 	PECTL = 0X00;
 	PEADDR = 0X01;
 	PECTL = 0X00;
 	PEADDR = 0X03;
 	PECTL = 0X00;
 	PEADDR = 0X00;
 	
 	PDADDR = 0X02;
 	PDCTL = 0X00;
 	PDADDR = 0X01;
 	PDCTL = 0XFF;
 	PDADDR = 0X00;
 	
 	while(1)
 	{
 		if ((val == 's') && (count > 0x14))
 		{
 			PEOUT = 's';
 		}
 		else
 		{
 			PEOUT = count;
 			for 
 			(
 				delay = 375000;
 				delay > 0; 
 				delay--
 			);
 			count++;
 		}
 }
/*-- 			END MAIN FUNCTION 			--*/
