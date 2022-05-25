//
// Created by Lisa Vlamings on 5/25/22.
//

#include <iostream>
#include "Fixed.hpp"
int main( void ) {
    Fixed a;
    Fixed b(a); //copy constructor
    Fixed c;
    c = b;// assignment operator overflow
    std::cout << a.getRawBits() << std::endl;
    std::cout << b.getRawBits() << std::endl;
    std::cout << c.getRawBits() << std::endl;
    return 0;
}






