//
// Created by Lisa Vlamings on 3/7/22.
//

#include "Fixed.hpp"
#include <iostream>

int main(void) {
    Fixed a;
    Fixed b(a);     //copy constructor
    Fixed c;
    c = b;          //copy assignment operator

    std::cout << a.getRawBits() << std::endl;
    std::cout << b.getRawBits() << std::endl;
    std::cout << c.getRawBits() << std::endl;
    return 0;
}
