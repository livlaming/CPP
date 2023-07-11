//
// Created by Lisa Vlamings on 6/24/22.
//

#ifndef CPP_FIXED_HPP
#define CPP_FIXED_HPP

#include <iostream>

class Fixed {
private:
private:
    int             _FixedPointVal;
    static const int _FractorialBits = 8;
public:
    Fixed(void); // default constructor
    Fixed(const int); // constructor
    Fixed(const float); // constructor
    ~Fixed(void); //de-constructor
    Fixed(const Fixed &copy); // copy constructor
    Fixed &operator=(const Fixed &copy); //assignment operator overload

    bool    operator>(const Fixed &copy); //comparison operator overload
    bool    operator<(const Fixed &copy); //comparison operator overload
    bool    operator>=(const Fixed &copy); //comparison operator overload
    bool    operator<=(const Fixed &copy); //comparison operator overload
    bool    operator!=(const Fixed &copy); //comparison operator overload
    bool    operator==(const Fixed &copy); //comparison operator overload

    Fixed operator+(const Fixed &copy); //arithmetic operator overload
    Fixed operator-(const Fixed &copy); //arithmetic operator overload
    Fixed operator*(const Fixed &copy); //arithmetic operator overload
    Fixed operator/(const Fixed &copy); //arithmetic operator overload

    Fixed operator++(void); //pre-increment   Fixed &operator++(void);
    Fixed operator++(int); //post-increment
    Fixed operator--(void); //pre-decrement
    Fixed operator--(int); //post-decrement

    int getRawBits( void ) const;
    void setRawBits( int const raw );
    float toFloat( void ) const;
    int toInt( void ) const;

    static Fixed &min(Fixed &copy1, Fixed &copy2);
    static const Fixed &min(const Fixed &copy1, const Fixed &copy2);
    static Fixed &max(Fixed &copy1, Fixed &copy2);
    static const Fixed &max(const Fixed &copy1, const Fixed &copy2);

};

std::ostream &operator<<(std::ostream &out, const Fixed &copy);

#endif //CPP_FIXED_HPP
