//
// Created by Lisa Vlamings on 5/25/22.
//

#ifndef CPP_FIXED_HPP
#define CPP_FIXED_HPP


class Fixed {
private:
    int                 _FixedPointVal;
    static const int    _FractorialBits = 8;
public:
    Fixed(void); // default constructor
    ~Fixed(void); //destructor
    Fixed(const Fixed &copy); // copy constructor
    Fixed &operator=(const Fixed &copy); //copy assignment operator overload
    int getRawBits( void ) const;
    void setRawBits( int const raw );
};


#endif //CPP_FIXED_HPP

//The Orthodox Canonical Class Form (OCCF):

//Default Constructor:
//The purpose of a constructor is to properly create new objects. A default constructor is one that can be called with no arguments. A default constructor can declare parameters but each constructor parameter must have a default value so the constructor can be called without arguments.

//Destructor:
//The purpose of the destructor is to properly tear down objects when they are no longer needed and release any resources reserved for the object’s use during its lifetime.

//Copy Constructor:
//The purpose of a copy constructor is to create new objects from existing objects. The copy constructor will declare at least one parameter that is a reference type to which the copy constructor belongs.

//Copy Assignment Operator:
//The purpose of a copy assignment operator is to initialize an existing object to the values supplied by another existing object.

