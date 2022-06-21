//
// Created by Lisa Vlamings on 5/25/22.
//

#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed(void){
    this->_FixedPointVal = 0;
    std::cout << "Default constructor called"<< std::endl;
}

Fixed::Fixed(const int val){
    this->_FixedPointVal = val;
}

Fixed::Fixed(const float val){
    this->_FixedPointVal = (int)val;
}

Fixed::Fixed(const Fixed &copy){
    std::cout << "Copy constructor called" << std::endl;
    *this = copy;
}

Fixed& Fixed::operator=(const Fixed &copy){
    std::cout << "Copy assignment operator called" << std::endl;
    this->_FixedPointVal = copy.getRawBits();
    return (*this);
}

std::ostream &operator<<(std::ostream &out, const Fixed &copy)
{
    out << copy.toFloat();
    return (out);
}

int Fixed::getRawBits( void ) const {
    std::cout << "getRawBits member function called" << std::endl;
    return(this->_FixedPointVal);
}

void Fixed::setRawBits( int const raw ){
    std::cout << "setRawBits member function called" << std::endl;
    this->_FixedPointVal = raw;
}

float  Fixed::toFloat( void ) const{
    return(this->_FixedPointVal);
//    fixed point to floating point val
}

int Fixed::toInt( void ) const{
    return ((int)this->_FixedPointVal);
//    converts the fixed-point value to an integer value.
}

Fixed::~Fixed(void){
    std::cout << "Destructor called" << std::endl;
}