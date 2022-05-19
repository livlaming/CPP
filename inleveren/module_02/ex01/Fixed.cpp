//
// Created by Lisa Vlamings on 3/7/22.
//

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed(void){
    std::cout << "Default constructor called" << std::endl;
    this->_FixedPointVal = 0;
}

Fixed::Fixed(const int val){
    std::cout << "Int constructor called" << std::endl;
    this->_FixedPointVal = val << this->_FractionalBits;
}

Fixed::Fixed(const float val){
    std::cout << "Float constructor called" << std::endl;
    this->_FixedPointVal = (int)roundf(val * pow (2.0, this->_FractionalBits));         //same as: this->FixedPointVal = (int)roundf(val * (1 << this->FractionalBits));
}

float Fixed::toFloat( void ) const{
    return((float)this->_FixedPointVal / pow (2.0, this->_FractionalBits));            //same as: return((float)this->FixedPointVal / (1 << this->FractionalBits));
}

int Fixed::toInt( void ) const{
    return(this->_FixedPointVal >> this->_FractionalBits);
}

Fixed::Fixed(const Fixed &copy) {
    std::cout << "Copy constructor called" << std::endl;
    this->_FixedPointVal = copy.getRawBits();
}

Fixed& Fixed::operator=(const Fixed &copy){
    std::cout << "Copy assignment operator called" << std::endl;
    this->_FixedPointVal = copy.getRawBits();
    return (*this);
}

void    Fixed::setRawBits( int const raw ){
    this->_FixedPointVal = raw;
}

int     Fixed::getRawBits( void ) const{
    return (this->_FixedPointVal);
}

Fixed::~Fixed(void){
    std::cout << "Destructor called" << std::endl;
}

std::ostream &operator<<(std::ostream &out, const Fixed &copy)
{
    out << copy.toFloat();
    return (out);
}
