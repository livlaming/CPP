//
// Created by Lisa Vlamings on 11/14/22.
//

#ifndef CPP_CONVERT_HPP
#define CPP_CONVERT_HPP
#include <iostream>
#include <errno.h>
//#define MAX_INT +2147483647
//#define MIN_INT -2147483648
//#define MAX_DOUBLE 1.79769e+308
//#define MIN_DOUBLE -1.79769e+308
//#define MAX_FLOAT 3.40282e+38
//#define MIN_FLOAT -3.40282e+38


enum e_Type {CHAR, INT, DOUBLE, FLOAT, INVALID};
enum exc {Exc_None, Exc_imp, Exc_Nan};

class Convert {
private:

    std::string _literal;
    std::string _charType;
    int         _intType;
    float       _floatType;
    double      _doubleType;
    std::string _exception[4];
    std::string _dotZero;
    std::string _f;
    e_Type      _type;
//    exc         _exc;
    Convert();
public:
    Convert(std::string literal);
    Convert(const Convert &copy);
    Convert &operator=(const Convert &copy);
    ~Convert();

    std::string     getCharType() const;
    int             getIntType() const;
    float           getFloatType() const;
    double          getDoubleType() const;
    std::string     getDotZero() const;
    std::string     getF() const;
    enum e_Type     getType() const;
    const std::string     getException() const;

    int             checkAlpha();
    int             checkDigit();
    void            indicateType();
    void            setValues();


    void            fromChar();
    void            fromInt();
};

std::ostream &operator<<(std::ostream &out, const Convert &copy);


#endif //CPP_CONVERT_HPP
