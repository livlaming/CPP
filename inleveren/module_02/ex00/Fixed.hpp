//
// Created by Lisa Vlamings on 3/7/22.
//

#ifndef CPP__FIXED_HPP
#define CPP__FIXED_HPP

//Orthodox Canonical Form = a class that contains a:
//+ Default constructor
//+ Destructor
//+ Copy constructor = a member function that creates/initializes an object using another object of the same class (copying values). Use one time only.
//+ Copy assignment operator = copies object values into object. This operator is called when an already initialized object is assigned a new value from another existing object.

class Fixed {
private:
    int                 _FixedPointVal;
    static const int    _FractionalBits = 8;

public:
    Fixed(void);                            // default constructor
    ~Fixed(void);                           // destructor
    Fixed(const Fixed &copy);               // copy constructor
    Fixed &operator=(const Fixed &copy);    // copy assignment operator

    int     getRawBits(void) const;
    void    setRawBits(int const raw);

};

#endif //CPP__FIXED_HPP
