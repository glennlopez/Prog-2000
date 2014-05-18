// **************Program: Lab 2.1
// **************Programmer: put your name here!
// **************Date: put today's date here!
// **************Class: put your class here!
// **************Description: This program uses the 3 lsb's of Port A for O/P only
// "Alternate Function" is disabled
// these 2 slashes precede a comment
// ***************************#include statements
#include <ez8.h> // GPI/O
// ***************************#define statements
// ***************************main() function
int main(void)
{
// variable declarations
unsigned char leds=0x05;
PAADDR = 0x02;
PACTL = 0x00;
PAADDR = 0x01;
PACTL = 0xF8;
PAADDR = 0x03;
PACTL = 0x00;
PAADDR = 0x00; // prevents inadvertent changes to sub registers
PAOUT = leds;
return 0; // Finished!
}
//*****************************end of program