//
// Created by Lisa Vlamings on 5/25/22.
//

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
    void setRawBits( int const raw );
    float toFloat( void ) const;
    int toInt( void ) const;
};

std::ostream &operator<<(std::ostream &out, const Fixed &copy);

#endif //CPP_FIXED_HPP


//The Orthodox Canonical Class Form (OCCF):
//
//Default Constructor
//
//The purpose of a constructor is to properly create new objects. A default constructor is one that can be called with no arguments. A default constructor can declare parameters but each constructor parameter must have a default value so the constructor can be called without arguments.
//
//The default constructor for class Foo is declared on line 6. It declares one integer parameter whose default value is zero.
//
//Destructor
//
//The purpose of the destructor is to properly tear down objects when they are no longer needed and release any resources reserved for the object’s use during its lifetime.
//
//The Foo destructor is declared on line 7 of example 17.1. It is declared virtual in anticipation of supporting an inheritance hierarchy.
//
//Copy Constructor
//
//The purpose of a copy constructor is to create new objects from existing objects. The copy constructor will declare at least one parameter that is a reference type to which the copy constructor belongs.
//
//The Foo copy constructor is declared on line 8 of example 17.1. It declared one parameter named rhs (shorthand for right hand side) that is a reference to a Foo object. (i.e., Foo&)
//
//Copy Assignment Operator
//
//The purpose of a copy assignment operator is to initialize an existing object to the values supplied by another existing object.
//
//The Foo copy assignment operator is declared on line 9 of example 17.1. It declares one parameter which is a reference to a Foo object.