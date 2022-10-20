#ifndef CPP_FIXED_HPP
#define CPP_FIXED_HPP
#include <iostream>

class Fixed {
private:
    int             _FixedPointVal;
    static const int _FractorialBits = 8;
public:
    Fixed(void);
    Fixed(const int);
    Fixed(const float);
    ~Fixed(void);
    Fixed(const Fixed &copy); // copy constructor
    Fixed &operator=(const Fixed &copy); //assignment operator overload
    int getRawBits( void ) const;
    float toFloat( void ) const;
    int toInt( void ) const;
    void setRawBits( int const raw );
};

std::ostream &operator<<(std::ostream &out, const Fixed &copy);

#endif //CPP_FIXED_HPP
