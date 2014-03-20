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
Description:		Used to test hardware and wiring
Github page:		https://github.com/glennlopez/Prog-2000/	
---------------------------------------------------------------------------------*/

/*-- 			START HEADER FILES 			--*/
 #include <stdio.h>						//<-- Standard Input and Output library for C
 #include <ez8.h>						//<-- library for int1erfacing with Z8
/*-- 			END HEADER FILES 			--*/

/*-- 			START MAIN FUNCTION 		--*/
 void main()
{
	// variable declaration
	 int val;

	//initialize 8 bit port E0(pin8)-E7(pin0)
	 PEADDR = 0x02; 					//<-- alt function
	 PECTL = 0x00; 						//<-- no alt function
	 PEADDR = 0x01; 					//<-- data dir
	 PECTL = 0x00; 						//<-- set all 8 bits to O/P
	 PEADDR = 0x03; 					//<-- O/P control function
	 PECTL = 0x00; 						//<-- set to push pull rather than open drain
	 PEADDR = 0x00; 					//<-- prevents inadvertent changes to sub registers
	
	//initialize 8 bit port E0(pin8)-E7(pin0)
	 PDADDR = 0x02; 					//<-- alt function
	 PDCTL = 0x00; 						//<-- no alt function
	 PDADDR = 0x01; 					//<-- data dir
	 PDCTL = 0xFF; 						//<-- set all 8 bits to I/P
	 PDADDR = 0x00; 					//<-- prevents inadvertent changes to sub registers
	
	// Read Port D
	while(1)
		{
		 val = PDIN;
		 PEOUT = val; // display I/P from port D on Port E
		} //end while
 return; // done!
}
/*-- 			END MAIN FUNCTION 			--*/
