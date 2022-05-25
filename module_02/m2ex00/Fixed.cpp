//
// Created by Lisa Vlamings on 5/25/22.
//

#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed(void){
    std::cout << "Default constructor called"<< std::endl;
}

Fixed::Fixed(const Fixed &copy){
    std::cout << "Copy constructor called" << std::endl;
    *this = copy;
}

Fixed& Fixed::operator=(const Fixed &copy){
    std::cout << "Copy assignment operator called" << std::endl;
    this->_FixedPointVal = copy.getRawBits();
    return *this;
}

int Fixed::getRawBits( void ) const {
    std::cout << "getRawBits member function called" << std::endl;
    return(this->_FractorialBits);
}

void Fixed::setRawBits( int const raw ){
    std::cout << "setRawBits member function called" << std::endl;
    this->_FixedPointVal = raw;
}

Fixed::~Fixed(void){
    std::cout << "Destructor called" << std::endl;
}