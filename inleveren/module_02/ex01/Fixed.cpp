//
// Created by Lisa Vlamings on 5/25/22.
//

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed(void){
    this->_FixedPointVal = 0;
    std::cout << "Default constructor called"<< std::endl;
}

Fixed::Fixed(const int val){ //  converts int into fixed-point value ;
    std::cout << "Int constructor called" << std::endl;
    this->_FixedPointVal = val << this->_FractorialBits;
}

Fixed::Fixed(const float val){ //  converts float into fixed-point value by shifting bits to the left (2 times value);
    std::cout << "Float constructor called" << std::endl;
    this->_FixedPointVal = (int)roundf(val * (1 << this->_FractorialBits)); // or this->_FixedPointVal = (int)roundf(val * pow (2.0, this->_FractorialBits));

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

int Fixed::getRawBits( void ) const {
    return(this->_FixedPointVal);
}

void Fixed::setRawBits( int const raw ){
    std::cout << "setRawBits member function called" << std::endl;
    this->_FixedPointVal = raw;
}

float  Fixed::toFloat( void ) const{ // converts the fixed-point value to floating point val
    return((float)this->_FixedPointVal / (1 << this->_FractorialBits)); // or return((float)this->_FixedPointVal / pow (2.0, this->_FractorialBits));
}

int Fixed::toInt( void ) const{     // converts the fixed-point value to an integer value by shifting bits back (val divided by 2).
    return ((int)this->_FixedPointVal >> this->_FractorialBits);
}

Fixed::~Fixed(void){
    std::cout << "Destructor called" << std::endl;
}

std::ostream &operator<<(std::ostream &out, const Fixed &copy)
{
    out << copy.toFloat();
    return (out);
}
