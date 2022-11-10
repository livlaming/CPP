#include "Convert.hpp"

Convert::Convert() {
}

Convert::Convert(const Convert &copy) : _type(copy._type), _charType(copy._charType), _intType(copy._intType), _floatType(copy._floatType), _doubleType(copy._doubleType) {}

Convert &Convert::operator=(const Convert &copy){
    this->_type = copy._type;
    this->_charType = copy._charType;
    this->_intType = copy._intType;
    this->_floatType = copy._floatType;
    this->_doubleType = copy._doubleType;
    return (*this);
}


void Convert::isChar(std::string input){
this->_charType = input;

}

void Convert::isFloat(std::string input){
this->_floatType = input;

}

void Convert::isInt(std::string input){
    this->_charType = "Non displayable";
    this->_intType = toinput;

}

void Convert::isDouble(std::string input){
this->_

}

void Convert::printOutput()  { //overloadoperator
    std::cout << "char: " << this->_charType << std::endl;
    std::cout << "int: " << this->_charType << std::endl;
    std::cout << "float: " << this->_charType << std::endl;
    std::cout << "double: " << this->_charType << std::endl;
}

void Convert::indicateType(const std::string input) {
    if (std::isalpha(input[0]) && input.length() == 1){
        isChar(input);
    }
    else if (!std::isalpha(input[0]) && input.find(".") == std::string::npos && (input.length() <= 10 || (input.length() == 11 && input[0] == '-')))
        isInt(input);
    else if (input.find(".") != std::string::npos)
    {
        if (input[input.length() - 1] == 'f')
            isFloat(input);
        else
            isDouble(input);
    }
    else if (input == "nanf"){
        isFloat(input);
    }
    else if (input.length() > 10 || (input.length() == 11 && input[0] != '-') || input == "nan")
        isDouble(input);
    else
        this->_type = "impossible"; // std::cout << "invalid input" << std::endl;
    std::cout << this->_type << std::endl;
    printOutput();
}


Convert::~Convert() {}
