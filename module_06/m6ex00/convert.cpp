//
// Created by Lisa Vlamings on 8/18/22.
//

#include "convert.hpp"

convert::convert() {}

convert::convert(const convert &copy) : _type(copy._type), _charType(copy._charType), _intType(copy._intType), _floatType(copy._floatType), _doubleType(copy._doubleType) {}

convert &convert::operator=(const convert &copy){
    this->_type = copy._type;
    this->_charType = copy._charType;
    this->_intType = copy._intType;
    this->_floatType = copy._floatType;
    this->_doubleType = copy._doubleType;
    return (*this);
}

void convert::indicateType(const std::string input) {
    double dot = input.find(".");
    std::cout << input.find(".") << std::endl;

    if (isalpha(input[0]) && input.length() == 1)
        this->_type = "char";
    else if (dot != 18446744073709551615)
        this->_type = "float";
    else if (input.length() == 9 || (input.length() == 10 && input[0] == '-'))
        this->_type = "int";
    else if (input.length() > 9)
        this->_type = "double";
    else
        this->_type = "undefined";


    std::cout << this->_type << std::endl;
}

convert::~convert() {}
