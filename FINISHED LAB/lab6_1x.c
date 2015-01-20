/*---------------------------------------------------------------------------------
 ____  ____  _____  ___      ___   ___    ___    ___
(  _ \(  _ \(  _  )/ __) ___(__ \ / _ \  / _ \  / _ \
 )___/ )   / )(_)(( (_-.(___)/ _/( (_) )( (_) )( (_) )
(__)  (_)\_)(_____)\___/    (____)\___/  \___/  \___/
  C Programming and Intro to Microcontrollers
      Intructor: Denis Korabelnikov

Program:          Lab 6
Programmer:       Glenn Lopez
Initial Commit:   2014-04-01 22:38
Class:            E12
Description:      This lab is about functions + debouncing buttons
Github page:      https://github.com/glennlopez/Prog-2000/
---------------------------------------------------------------------------------*/

/*--      START HEADER FILES      --*/
  #include <ez8.h>                          // zilog gpio library
  #include <stdio.h>                        // standard inputoutput library for c
  // #include <stdlib.h>                    // can be used for premade delay() funtion
/*--      END HEADER F ILES       --*/

/*--      FUNCTION PROTOTYPES      --*/
 unsigned char low_button(void);            // function for released button
 unsigned char high_button(void);           // function for pushed button
 void delay(unsigned int time);             // delay function
 void ports_initialize(void);               // port initialization function
 void button_function(void);                // function for pushed button
/*--      END PROTOTYPES      --*/


/*--      MAIN FUNCTION      --*/
 void main(void)
 {
  unsigned char counter;  //  declare counter as a variable
  ports_initialize();     //  excecutes ports initialization function

  while(1)
   {
    button_function();    // excecutes button_function() function
    counter++;            // incremently count
    PEOUT = counter;      // PEOUT takes the variable of "counter"
   }
 }
/*--      END MAIN FUNCTION      --*/



/********************************************************/



/*--      PORT INITIALIZATION FUNCTION      --*/
 void ports_initialize(void)
 {
  PEADDR = 0x02;            // alt func
  PECTL = 0x00;             // no alt function
  PEADDR = 0x01;            // data dir
  PECTL = 0x00;             // set all 8 bits to O/P
  PEADDR = 0x03;            // O/P control function
  PECTL = 0x00;             // push pull rather than open drain
  PEADDR = 0x00;            // inadvertent changes to sub registers

  PDADDR = 0x02;            // alt function
  PDCTL = 0x00;             // disable alt function
  PDADDR = 0x01;            // data dir
  PDCTL = 0xFF;             // set all 8 bits to O/P
  PDADDR = 0x00;            // prevents inadvertent changes to sub registers

  PCADDR = 0x02;            // alt function
  PCCTL = 0x00;             // no alt function
  PCADDR = 0x01;            // data dir
  PCCTL = 0x01;             // set bit 0 to I/P
  PCADDR = 0x00;            // prevents inadvertent changes to sub registers
 }
/*--      END PORT INITIALIZATION FUNCTION      --*/



/*--      PRESSED BUTTON FUNCTION      --*/
 void button_function(void)
   {
    while(high_button() == 0);  // excecute high_button when button_function is called
    while(low_button() == 0);   // excecute low_button when button_function is called
   }

  unsigned char high_button(void)
   {
    unsigned char mask_a;       // declare var mask_a as unsigned char
    mask_a = PCIN;              // makes mask_a equal PCIN
    mask_a &= 0x01;             // masks 7 most sigfigs
    if(mask_a == 0)             // loops if condition is 0
       {
        delay(2);               // execute delay(); func with value of 2
        mask_a = PCIN;          // mask_a becomes PCIN
        mask_a &= 0x01;         // masks mask_a's 7 most sigfigs
        if(mask_a == 0)         // loops if mask_a is equal to 0
          return(1);            // exit function and return 1
        else
          return(0);            // exit function and return 0
       }
 else
  return(0);  //<-- exit function and return 0
 }
/*--      END PRESSED BUTTON FUNCTION      --*/



/*--      RELEASED BUTTON FUNCTION      --*/
 unsigned char low_button(void)   //
  {
   unsigned char mask_b;          // sets mask_b as an unsigend intiger
   mask_b = PCIN;                 // sets mask_b to what ever PCIN is
   mask_b &= 0x01;                // masks mas_b with 0x01
   if(mask_b == 1)                // loops if mask_b is equal to 1
    {
     delay(2);                    // unsigned int time = 2
     mask_b = PCIN;               // mask_b is assigned the value of PCIN
     if(mask_b == 1)
       return(1);                 // exit function and return 1
     else
       return(0);                 // exit function and return 0
    }
  else                            // if condition is false run code below
    return(0);                    // exit function and return 0
  }
/*--      END RELEASED FUNCTION      --*/


/*--      DELAY FUNCTION
This function will is a nested loops to create
delays rather than using the delay(); function
built in to stdlib.h
*/
 void delay(unsigned int time)
 {
  unsigned int delay;             // sets delay as an unsigned intiger
  while(time > 0)                 // loops while time is more than 0
    {
     time--;                      // subtract 1 from time variable
     for(                         // loop a for condition
         delay=170;               // initialization statement
         delay>0;                 // test expression
         delay--                  // update statement (decrement var delay by 1)
        );
    }
 }
/*--      END DELAY FUNCTION      --*/
