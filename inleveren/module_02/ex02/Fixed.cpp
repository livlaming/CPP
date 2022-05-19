//
// Created by Lisa Vlamings on 3/18/22.
//

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed(void){
    this->_FixedPointVal = 0;
}

Fixed::Fixed(const int val){
    this->_FixedPointVal = val << this->_FractionalBits;
}

Fixed::Fixed(const float val){
    this->_FixedPointVal = (int)roundf(val * pow (2.0, this->_FractionalBits));  // same as:   this->FixedPointVal = (int)roundf(val * (1 << this->FractionalBits));
}

Fixed::Fixed(const Fixed &copy) {
    this->_FixedPointVal = copy.getRawBits();
}

Fixed& Fixed::operator=(const Fixed &copy){
    this->_FixedPointVal = copy.getRawBits();
    return (*this);
}

float Fixed::toFloat( void ) const{
    return((float)this->_FixedPointVal / pow (2.0, this->_FractionalBits)); // same as:   return((float)this->FixedPointVal / (1 << this->FractionalBits));
}

int Fixed::toInt( void ) const{
    return(this->_FixedPointVal >> this->_FractionalBits);

}

void    Fixed::setRawBits( int const raw ){
    this->_FixedPointVal = raw;
}

int     Fixed::getRawBits( void ) const{
    return (this->_FixedPointVal);
}

int Fixed::getValue(void) const {
    return (this->_FixedPointVal);
}

bool Fixed::operator>(const Fixed &rhs) const{
    return (this->_FixedPointVal > rhs.getValue());
}

bool Fixed::operator<(const Fixed &rhs) const{
    return (this->_FixedPointVal < rhs.getValue());
}

bool Fixed::operator>=(const Fixed &rhs) const{
    return (this->_FixedPointVal >= rhs.getValue());
}

bool Fixed::operator<=(const Fixed &rhs) const{
    return (this->_FixedPointVal <= rhs.getValue());
}

bool Fixed::operator==(const Fixed &rhs) const{
    return (this->_FixedPointVal == rhs.getValue());
}

bool Fixed::operator!=(const Fixed &rhs) const{
    return (this->_FixedPointVal != rhs.getValue());
}

Fixed Fixed::operator+(const Fixed &rhs) const{
    Fixed New;

    New.setRawBits(this->_FixedPointVal + rhs.getValue());
    return (New);
}

Fixed Fixed::operator-(const Fixed &rhs) const{
    Fixed New;

    New.setRawBits(this->_FixedPointVal - rhs.getValue());
    return (New);
}

Fixed Fixed::operator*(const Fixed &rhs) const{
    Fixed New;

    New.setRawBits(this->_FixedPointVal * rhs.getValue() / ( 1 << this->_FractionalBits));
    return (New);
}

Fixed Fixed::operator/(const Fixed &rhs) const{
    Fixed New;

    New.setRawBits(this->_FixedPointVal / rhs.getValue() * ( 1 << this->_FractionalBits));
    return (New);
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
    if (copy1.getValue() < copy2.getValue())
        return (copy1);
    else
        return (copy2);
}

const Fixed &Fixed::min(const Fixed &copy1, const Fixed &copy2){
    if (copy1.getValue() < copy2.getValue())
        return (copy1);
    else
        return (copy2);
}

Fixed &Fixed::max(Fixed &copy1, Fixed &copy2){
    if (copy1.getValue() > copy2.getValue())
        return (copy1);
    else
        return (copy2);
}

const Fixed &Fixed::max(const Fixed &copy1, const Fixed &copy2){
    if (copy1.getValue() > copy2.getValue())
        return (copy1);
    else
        return (copy2);
}

Fixed::~Fixed(void){}

std::ostream &operator<<(std::ostream &out, const Fixed &copy)
{
    out << copy.toFloat();
    return (out);
}
