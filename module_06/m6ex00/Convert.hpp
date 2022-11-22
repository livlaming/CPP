//
// Created by Lisa Vlamings on 11/14/22.
//
#ifndef CPP_CONVERT_HPP
#define CPP_CONVERT_HPP
#include <iostream>
#include <errno.h>

#define Exc_None ""
#define Exc_imp "Impossible"
#define Exc_Nan "Nan"
#define Exc_inf_minus "-inf"
#define Exc_inf_plus "+inf"
#define Exc_NoDisp "Non Displayable"

enum e_Type {CHAR, INT, DOUBLE, FLOAT, INVALID};

class Convert {
private:

    std::string _literal;
    char _charType;
    int         _intType;
    float       _floatType;
    double      _doubleType;

    std::string _dotZero;
    std::string _f;
    e_Type      _type;
    Convert();
public:
    std::string _exception[4];
    Convert(std::string literal);
    Convert(const Convert &copy);
    Convert &operator=(const Convert &copy);
    ~Convert();

    char            getCharType() const;
    int             getIntType() const;
    float           getFloatType() const;
    double          getDoubleType() const;
    std::string     getDotZero() const;
    std::string     getF() const;
    enum e_Type     getType() const;
    const std::string     getException() const;
    void            createStream(std::ostream &out) const;

    int             checkAlpha();
    int             checkDigit();
    void            indicateType();
    void            setValues();

    void            fromChar();
    void            fromDigit();

    void            doubleException();
    void            floatException();
};

std::ostream &operator<<(std::ostream &out, const Convert &copy);

#endif //CPP_CONVERT_HPP
