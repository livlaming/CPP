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
    if (std::isalpha(input[0]) && input.length() == 1)
        this->_type = "char";
    else if (!std::isalpha(input[0]) && input.find(".") == std::string::npos && (input.length() <= 10 || (input.length() == 11 && input[0] == '-')))
        this->_type = "int";
    else if (input.find(".") != std::string::npos)
    {
        if (input[input.length() - 1] == 'f')
            this->_type = "float";
        else
            this->_type = "double";
    }
    else if (input.length() > 10 || (input.length() == 11 && input[0] != '-'))
        this->_type = "double";
    else
        this->_type = "impossible";
    std::cout << this->_type << std::endl;
}

convert::~convert() {}
