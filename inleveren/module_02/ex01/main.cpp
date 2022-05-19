//
// Created by Lisa Vlamings on 3/7/22.
//

#include "Fixed.hpp"
#include <iostream>

//A fixed point number just means that there are a fixed number of digits after the decimal point.
//&&
//A floating point number allows for a varying number of digits after the decimal point.

//IOW
//A fixed point number has a specific number of bits (or digits) reserved for the integer part
// (the part to the left of the decimal point) and a specific number of bits reserved for the fractional part
// (the part to the right of the decimal point).

//A fixed-point number can be split into an optional sign bit, an integer, and a fractional part. [s][integer][fractional]

int main(void)
{
    Fixed			a;
    Fixed const		b( 10 );
    Fixed const		c( 42.42f );
    Fixed const		d(b);

    a = Fixed( 1234.4321f );

    std::cout << "a is " << a << std::endl;
    std::cout << "b is " << b << std::endl;
    std::cout << "c is " << c << std::endl;
    std::cout << "d is " << d << std::endl;

    std::cout << "a is " << a.toInt() << " as integer" << std::endl;
    std::cout << "b is " << b.toInt() << " as integer" << std::endl;
    std::cout << "c is " << c.toInt() << " as integer" << std::endl;
    std::cout << "d is " << d.toInt() << " as integer" << std::endl;

    return (0);
}
