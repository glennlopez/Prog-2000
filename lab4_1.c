/*---------------------------------------------------------------------------------
 ____  ____  _____  ___      ___   ___    ___    ___  
(  _ \(  _ \(  _  )/ __) ___(__ \ / _ \  / _ \  / _ \ 
 )___/ )   / )(_)(( (_-.(___)/ _/( (_) )( (_) )( (_) )
(__)  (_)\_)(_____)\___/    (____)\___/  \___/  \___/ 
	C Programming and Intro to Microcontrollers
			Intructor: Denis Korabelnikov

Program:			Lab 4.1
Programmer:			Glenn Lopez
Initial Commit:		2014-02-06 09:46
Class:				E12
Description:		
Github page:		https://github.com/glennlopez/Prog-2000/blob/master/lab4_1.c
	(visit the link above for the latest version history & revision)		
---------------------------------------------------------------------------------*/

/*-- 			START HEADER FILES 			--*/
 #include <stdio.h>										//<-- Standard Input and Output library for C
 #include <ez8.h>										//<-- library for int1erfacing with Z8
 //#include<myFunctions.h>								//<-- library for future subroutines and identifiers
/*-- 			END HEADER FILES 			--*/

/*-- 			START MAIN FUNCTION 			--*/
 int main(void) 
 { 
	char val; 											//<-- 
	int cnt=0; 											//<-- 
	char mystr[20]= “hello there!”; 					//<-- 
	char *p_str2, str2[20] = “zzzzzzzzzzzzzzzz”; 		//<-- 
	char* p_mystr=mystr; 								//<-- 
	p_str2=str2; 										//<-- 
	while (*p_mystr!=0x00)								//<-- 
	{ //<-- 
		val=*p_mystr++; 								//<-- 
		cnt++; 											//<-- 
	} 
	return 0; 											//<-- 
 } 
 /*-- 			END MAIN FUNCTION 			--*/

// experimental builds available for review at
// https://github.com/glennlopez/Prog-2000/tree/experimental