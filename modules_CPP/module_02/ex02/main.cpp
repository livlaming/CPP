//
// Created by Lisa Vlamings on 6/24/22.
//

#include <iostream>
#include "Fixed.hpp"

int main( void ) {
    Fixed a;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
    Fixed c(100);

    std::cout << "OWN TESTS" << std::endl;
    std::cout << c << std::endl;
    std::cout << "3.2 + 2 = " << 3.2 + 2 << std::endl;
    std::cout << "3 - 2 = " << 3 - 2 << std::endl;
    std::cout << "5 * 2 = "<< 5 * 2 << std::endl;
    std::cout << "2 / 2 = " << 2 / 2 << std::endl;

    std::cout << std::endl;
    std::cout << (Fixed(10) < Fixed(20)) << std::endl;
    std::cout << (Fixed(10) > Fixed(20)) << std::endl;

    std::cout << (Fixed(10) == Fixed(10)) << std::endl;
    std::cout << (Fixed(10) != Fixed(20)) << std::endl;
    std::cout << std::endl;

    std::cout << "42 TESTS" << std::endl;
    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << Fixed::max( a, b ) << std::endl;

    return 0;
}
