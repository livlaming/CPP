#include "Convert.hpp"

Convert::Convert() {
}

Convert::Convert(std::string literal) : _literal(literal) {
}

Convert::Convert(const Convert &copy) : _literal(copy._literal), _type(copy._type), _charType(copy._charType), _intType(copy._intType),
                                        _floatType(copy._floatType), _doubleType(copy._doubleType) {}

Convert &Convert::operator=(const Convert &copy) {
    if (this != &copy){
        this->_literal = copy._literal;
        this->_type = copy._type;
        this->_charType = copy._charType;
        this->_intType = copy._intType;
        this->_floatType = copy._floatType;
        this->_doubleType = copy._doubleType;
    }
    return (*this);
}

void Convert::fromChar(std::string input) {
    this->_charType = input;
    this->_intType = static_cast<int>(*input.c_str());;
    this->_floatType = static_cast<float>(*input.c_str());
    this->_doubleType = static_cast<double>(*input.c_str());;
}

void Convert::fromFloat(std::string input) {
    this->_charType = "Non displayable";
    this->_intType = static_cast<int>(strtol(input.c_str(), NULL, 0));
    this->_floatType = static_cast<float>(strtol(input.c_str(), NULL, 0));
    this->_doubleType = static_cast<float>(strtol(input.c_str(), NULL, 0));
}

void Convert::fromInt(std::string input) {
    this->_charType = "Non displayable";
    this->_intType = static_cast<int>(stoi(input.c_str()));
    this->_floatType = static_cast<float>(strtol(input.c_str(), NULL, 0));
    this->_doubleType = static_cast<double>(atof(input.c_str()));
}

void Convert::fromDouble(std::string input) {
    this->_charType = "Non displayable";
    this->_intType = static_cast<int>(strtol(input.c_str(), NULL, 0));
    this->_floatType = static_cast<float>(strtol(input.c_str(), NULL, 0));
    this->_doubleType = static_cast<double>(strtol(input.c_str(), NULL, 0));
}

void Convert::printOutput() { //overloadoperator
    std::cout << "char: " << this->_charType << std::endl;
    std::cout << "int: " << this->_intType << std::endl;
    std::cout << "float: " << this->_floatType << this->_dotZero << std::endl;
    std::cout << "double: " << this->_doubleType << this->_dotZero << std::endl;
}

void Convert::indicateType(const std::string input) {
    if (std::isalpha(input[0]) && input.length() == 1 && std::isprint(input[0]) != 0) {
            fromChar(input);
    } else if (!std::isalpha(input[0]) && input.find(".") == std::string::npos &&
               (input.length() <= 10 || (input.length() == 11 && input[0] == '-')))
        fromInt(input);
    else if (input.find(".") != std::string::npos) {
        if (input[input.length() - 1] == 'f')
            fromFloat(input);
        else
            fromDouble(input);
    } else if (input == "nanf" || input == "-inff" || input == "+inff") {
        fromFloat(input);
    } else if (input == "nan" || input == "-inf" || input == "+inf") {
        fromDouble(input);
    } else if (input.length() > 10 || (input.length() == 11 && input[0] != '-'))
        fromDouble(input);
    else {
        std::cout << "Invalid input" << std::endl;
        return;
    }
    printOutput();
}


Convert::~Convert() {}
