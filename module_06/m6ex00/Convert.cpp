#include "Convert.hpp"

Convert::Convert() {
}

Convert::Convert(const Convert &copy) : _type(copy._type), _charType(copy._charType), _intType(copy._intType),
                                        _floatType(copy._floatType), _doubleType(copy._doubleType) {}

Convert &Convert::operator=(const Convert &copy) {
    this->_type = copy._type;
    this->_charType = copy._charType;
    this->_intType = copy._intType;
    this->_floatType = copy._floatType;
    this->_doubleType = copy._doubleType;
    return (*this);
}


void Convert::isChar(std::string input) {
    this->_charType = input;
    this->_intType = static_cast<int>(*input.c_str());
    this->_floatType = static_cast<float>(strtol(input.c_str(), NULL, 0));
    this->_doubleType = static_cast<float>(strtol(input.c_str(), NULL, 0));

}

void Convert::isFloat(std::string input) {
    this->_charType = "Non displayable";
    this->_intType = static_cast<int>(strtol(input.c_str(), NULL, 0));
    this->_floatType = static_cast<float>(strtol(input.c_str(), NULL, 0));
    this->_doubleType = static_cast<float>(strtol(input.c_str(), NULL, 0));
}

void Convert::isInt(std::string input) {
    this->_charType = "Non displayable";
    this->_intType = static_cast<int>(strtol(input.c_str(), NULL, 0));
    this->_floatType = static_cast<float>(strtol(input.c_str(), NULL, 0));
    this->_doubleType = static_cast<float>(strtol(input.c_str(), NULL, 0));
    this->_dotNull = ".0";
}

void Convert::isDouble(std::string input) {
    this->_charType = "Non displayable";
    this->_intType = static_cast<int>(strtol(input.c_str(), NULL, 0));
    this->_floatType = static_cast<float>(strtol(input.c_str(), NULL, 0));
    this->_doubleType = static_cast<float>(strtol(input.c_str(), NULL, 0));

}

void Convert::printOutput() { //overloadoperator
    std::cout << "char: " << this->_charType << std::endl;
    std::cout << "int: " << this->_intType << std::endl;
    std::cout << "float: " << this->_floatType << this->_dotNull << std::endl;
    std::cout << "double: " << this->_doubleType << this->_dotNull << std::endl;
}

void Convert::indicateType(const std::string input) {
    if (std::isalpha(input[0]) && input.length() == 1 && std::isprint(input[0]) != 0) {
            isChar(input);
    } else if (!std::isalpha(input[0]) && input.find(".") == std::string::npos &&
               (input.length() <= 10 || (input.length() == 11 && input[0] == '-')))
        isInt(input);
    else if (input.find(".") != std::string::npos) {
        if (input[input.length() - 1] == 'f')
            isFloat(input);
        else
            isDouble(input);
    } else if (input == "nanf" || input == "-inff" || input == "+inff") {
        isFloat(input);
    } else if (input == "nan" || input == "-inf" || input == "+inf") {
        isDouble(input);
    } else if (input.length() > 10 || (input.length() == 11 && input[0] != '-'))
        isDouble(input);
    else {
        std::cout << "Invalid input" << std::endl;
        return;
    }
    printOutput();
}


Convert::~Convert() {}
