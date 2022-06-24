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
    std::cout << "Int constructor called" << std::endl;
    this->_FixedPointVal = val << this->_FractorialBits;
}

Fixed::Fixed(const float val){ //  shifts float one bit to the left (times 2)
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

bool Fixed::operator>(const Fixed &copy) {
    return(this->_FixedPointVal > copy.getRawBits());
}

std::ostream &operator<<(std::ostream &out, const Fixed &copy)
{
    out << copy.toFloat();
    return (out);
}

Fixed Fixed::operator++(void){  // prefix = ++i will increment the value of i, and then return the incremented value.
    ++this->_FixedPointVal;
    return(*this);
}

Fixed Fixed::operator++(int){ // postfix = i++ will increment the value of i, but return the original value that i held before being incremented.
    Fixed New = *this;

    this->_FixedPointVal++;
    return(New);
}

Fixed Fixed::operator--(void){
    --this->_FixedPointVal;
    return(*this);
}

Fixed Fixed::operator--(int){
    Fixed New = *this;

    this->_FixedPointVal--;
    return(New);
}

int Fixed::getRawBits( void ) const {
    return(this->_FixedPointVal);
}

void Fixed::setRawBits( int const raw ){
    std::cout << "setRawBits member function called" << std::endl;
    this->_FixedPointVal = raw;
}

float  Fixed::toFloat( void ) const{ //    converts fixed point to floating point val
    return((float)this->_FixedPointVal / (1 << this->_FractorialBits)); // or return((float)this->_FixedPointVal / pow (2.0, this->_FractorialBits));
}

int Fixed::toInt( void ) const{     //    converts the fixed-point value to an integer value.
    return ((int)this->_FixedPointVal >> this->_FractorialBits);
}

Fixed::~Fixed(void){
    std::cout << "Destructor called" << std::endl;
}
