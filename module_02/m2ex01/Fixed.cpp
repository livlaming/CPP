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

Fixed::Fixed(const int val){
//    this->_FixedPointVal = ;
//  converts int into fixedpointval;

}

Fixed::Fixed(const float val){
    //  converts int into fixedpointval;
//    this->_FixedPointVal = ;
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


//Fixed::Fixed(const int val){
//    std::cout << "Int constructor called" << std::endl;
//    this->_FixedPointVal = val << this->_FractionalBits;
//}
//
//Fixed::Fixed(const float val){
//    std::cout << "Float constructor called" << std::endl;
//    this->_FixedPointVal = (int)roundf(val * pow (2.0, this->_FractionalBits));
////    this->FixedPointVal = (int)roundf(val * (1 << this->FractionalBits));
//
//}
//
//float Fixed::toFloat( void ) const{
//    return((float)this->_FixedPointVal / pow (2.0, this->_FractionalBits) );
////    return((float)this->FixedPointVal / (1 << this->FractionalBits));
//}