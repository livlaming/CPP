//
// Created by Lisa Vlamings on 3/18/22.
//

#ifndef CPP__FIXED_HPP
#define CPP__FIXED_HPP
#include <iostream>

class Fixed {
private:
    int                 _FixedPointVal;
    static const int    _FractionalBits = 8;

public:
    Fixed(void);
    ~Fixed(void);
    Fixed(const int val);
    Fixed(const float val);
    Fixed(const Fixed &copy);
    Fixed &operator=(const Fixed &copy);

    int     getRawBits( void ) const;
    void    setRawBits( int const raw );
    int     getValue(void) const;

    float   toFloat( void ) const;
    int     toInt( void ) const;

    bool operator>(const Fixed &rhs) const; // const is used if you only want to read data, in this manner you protect your functions to be able to assign data.
    bool operator<(const Fixed &rhs) const;
    bool operator>=(const Fixed &rhs) const;
    bool operator<=(const Fixed &rhs) const;
    bool operator==(const Fixed &rhs) const;
    bool operator!=(const Fixed &rhs) const;

    Fixed operator+(const Fixed &rhs) const;
    Fixed operator-(const Fixed &rhs) const;
    Fixed operator*(const Fixed &rhs) const;
    Fixed operator/(const Fixed &rhs) const;

    Fixed operator++(void); //pre-increment  = ++i Fixed operator++(void); prefix = ++i will increment the value of i, and then return the incremented value.
    Fixed operator++(int); //post-increment  = i++ Fixed operator++(void); postfix = i++ will increment the value of i, but return the original value that i held before being incremented.
    Fixed operator--(void); //pre-decrement
    Fixed operator--(int); //post-decrement

    static Fixed &min(Fixed &copy1, Fixed &copy2);
    static const Fixed &min(const Fixed &copy1, const Fixed &copy2);
    static Fixed &max(Fixed &copy1, Fixed &copy2);
    static const Fixed &max(const Fixed &copy1, const Fixed &copy2);

};

std::ostream &operator<<(std::ostream &out, const Fixed &copy);

#endif //CPP__FIXED_HPP
