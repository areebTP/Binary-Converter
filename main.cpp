#include <iostream>
#include "Converter.h"

/*
This code will convert binary to hexadecimal values, zeroes can be added to the right 
or left. 
The answers are given in both 16 and 32-bit. 

Choose which direction to add zeroes, for example:
    Add zeroes to the right:

    ConverterOBJ.setDir('R'); 0b1 will now become 0b100000000000.....

    Add to the left:

    ConverterOBJ.setDir('L'); 0b1 will now become 0b0000000000001....

    The direction is set to RIGHT by default.

    ERROR CODE 1: 32-bit NUMBER FED INTO 16-BIT FUNCTION

    std::runtime_error will be thrown when any direction other than
    left or right will be inputted. 
*/


int main()
{
//------------------------DEFINE THE BINARY NUMBER HERE
    Converter convert( "11101" );
//----------------------------------------------------

//------------------------SET DIRECTION TO ADD ZEROES
    convert.setDir('r');







//-------------------------------------PRINTING THE NUMBERS
    int num16{ convert.binTOdec16() };
    int64_t num32{ convert.binTOdec32() };

    std::cout << "Decimal 16-bit: " << num16 << "\n"
        << "Decimal 32-bit: " << num32 << "\n";

    std::cout << "Hexa 16-bit: ";

    convert.decTOhex(num16);
    std::cout << "Hexa 32-bit: ";
    convert.decTOhex(num32);
}
