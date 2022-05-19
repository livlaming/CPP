//
// Created by Lisa Vlamings on 3/7/22.
//

#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed(void){
    std::cout << "Default constructor called" << std::endl;
    this->_FixedPointVal = 0;
}

Fixed::Fixed(const Fixed &copy) {
    std::cout << "Copy constructor called" << std::endl;
    this->_FixedPointVal = copy.getRawBits();
}

Fixed& Fixed::operator=(const Fixed &copy){
    std::cout << "Copy assignment operator called" << std::endl;
    this->_FixedPointVal = copy.getRawBits();
    return *this;
}

void    Fixed::setRawBits( int const raw ){
    this->_FixedPointVal = raw;
}

int     Fixed::getRawBits( void ) const{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->_FixedPointVal);
}

Fixed::~Fixed(void){
    std::cout << "Destructor called" << std::endl;
}
