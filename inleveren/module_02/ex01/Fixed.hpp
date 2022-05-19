//
// Created by Lisa Vlamings on 3/7/22.
//

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
private:
    int                 _FixedPointVal;
    static const int    _FractionalBits = 8;

public:
    Fixed(void);
    ~Fixed(void);
    Fixed(const Fixed &copy);
    Fixed &operator=(const Fixed &copy);
    Fixed(const int val);
    Fixed(const float number);

    int     getRawBits( void ) const;
    void    setRawBits( int const raw );

    float   toFloat( void ) const;
    int     toInt( void ) const;
};

std::ostream &operator<<(std::ostream &out, const Fixed &copy);

#endif //CPP__FIXED_HPP

