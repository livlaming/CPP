//
// Created by Lisa Vlamings on 11/14/22.
//

#ifndef CPP_CONVERT_HPP
#define CPP_CONVERT_HPP
#include <iostream>


class Convert {
private:
    enum e_Type {CHAR, INT, DOUBLE, FLOAT, INVALID};
    std::string _literal;
    std::string _charType;
    int         _intType;
    float       _floatType;
    double      _doubleType;
    std::string _dotZero;
    e_Type      _type;
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

    int             checkAlpha();
    int             checkDigit();
    void            indicateType();
    void            setValues();
};

std::ostream &operator<<(std::ostream &out, const Convert &copy);


#endif //CPP_CONVERT_HPP
