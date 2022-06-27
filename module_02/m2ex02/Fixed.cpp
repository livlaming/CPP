//
// Created by Lisa Vlamings on 5/25/22.
//

#include "Fixed.hpp"
#include <iostream>
#include <cmath>


Fixed::Fixed(void){
    //    std::cout << "Default constructor called"<< std::endl;
    this->_FixedPointVal = 0;
}

Fixed::Fixed(const int val){
    std::cout << "Int constructor called" << std::endl;
    this->_FixedPointVal = val << this->_FractorialBits;
    std::cout << this->_FixedPointVal << std::endl;
    std::cout << val << std::endl;
}

Fixed::Fixed(const float val){
    std::cout << "Float constructor called" << std::endl;
    this->_FixedPointVal = (int)roundf(val * (1 << this->_FractorialBits)); // or this->_FixedPointVal = (int)roundf(val * pow (2.0, this->_FractorialBits));
    std::cout << this->_FixedPointVal << std::endl;
    std::cout << val << std::endl;
}

Fixed::Fixed(const Fixed &copy){
//    std::cout << "Copy constructor called" << std::endl;
    *this = copy;
}

Fixed& Fixed::operator=(const Fixed &copy){
//    std::cout << "Copy assignment operator called" << std::endl;
    this->_FixedPointVal = copy.getRawBits();
    return (*this);
}

bool Fixed::operator>(const Fixed &copy) {
    return(this->_FixedPointVal > copy.getRawBits());
}

bool Fixed::operator<(const Fixed &copy) {
    return(this->_FixedPointVal < copy.getRawBits());
}

bool Fixed::operator>=(const Fixed &copy) {
    return(this->_FixedPointVal >= copy.getRawBits());
}

bool Fixed::operator<=(const Fixed &copy) {
    return(this->_FixedPointVal <= copy.getRawBits());
}

bool Fixed::operator!=(const Fixed &copy) {
    return(this->_FixedPointVal != copy.getRawBits());
}

bool Fixed::operator==(const Fixed &copy) {
    return(this->_FixedPointVal == copy.getRawBits());
}

Fixed Fixed::operator+(const Fixed &copy){
    Fixed result;

    result.setRawBits(this->_FixedPointVal += copy.getRawBits() / ( 1 << this->_FractorialBits));
    return (*this);
}

Fixed Fixed::operator-(const Fixed &copy){
    Fixed result;

    result.setRawBits(this->_FixedPointVal -= copy.getRawBits() / ( 1 << this->_FractorialBits));
    return (*this);
}

Fixed Fixed::operator*(const Fixed &copy){
    Fixed result;

    result.setRawBits(this->_FixedPointVal *= copy.getRawBits() / ( 1 << this->_FractorialBits));
    return (*this);
}

Fixed Fixed::operator/(const Fixed &copy){
    Fixed result;

    result.setRawBits(this->_FixedPointVal /= copy.getRawBits() / ( 1 << this->_FractorialBits));
    return (*this);
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

Fixed &Fixed::min(Fixed &copy1, Fixed &copy2){
    if (copy1.getRawBits() < copy2.getRawBits())
        return (copy1);
    else
        return (copy2);
};

Fixed const &Fixed::min(const Fixed &copy1, const Fixed &copy2){
    if (copy1.getRawBits() < copy2.getRawBits())
        return (copy1);
    else
        return (copy2);
}

Fixed &Fixed::max(Fixed &copy1, Fixed &copy2){
    if (copy1.getRawBits() > copy2.getRawBits())
        return (copy1);
    else
        return (copy2);
};

Fixed const &Fixed::max(const Fixed &copy1, const Fixed &copy2){
    if (copy1.getRawBits() > copy2.getRawBits())
        return (copy1);
    else
        return (copy2);
}

int Fixed::getRawBits( void ) const {
    return(this->_FixedPointVal);
}

void Fixed::setRawBits( int const raw ){
    this->_FixedPointVal = raw;
}

float  Fixed::toFloat( void ) const{ //    converts fixed point to floating point val
    return((float)this->_FixedPointVal / (1 << this->_FractorialBits)); // or return((float)this->_FixedPointVal / pow (2.0, this->_FractorialBits));
}

int Fixed::toInt( void ) const{     //    converts the fixed-point value to an integer value.
    return ((int)this->_FixedPointVal >> this->_FractorialBits);
}

Fixed::~Fixed(void){}

std::ostream &operator<<(std::ostream &out, const Fixed &copy)
{
    out << copy.toFloat();
    return (out);
}