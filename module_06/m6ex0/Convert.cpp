//
// Created by Lisa Vlamings on 11/14/22.
//

#include "Convert.hpp"
Convert::Convert() {}

Convert::Convert(std::string literal) : _literal(literal), _type(INVALID){
    setValues();
}

Convert::Convert(const Convert &copy) : _literal(copy._literal), _charType(copy._charType), _intType(copy._intType), _doubleType(copy._doubleType), _floatType(copy._floatType){

}

Convert &Convert::operator=(const Convert &copy) {
    if (this != &copy){
        this->_literal = copy._literal;
        this->_charType = copy._charType;
        this->_intType = copy._intType;
        this->_floatType = copy._floatType;
        this->_doubleType = copy._doubleType;
        this->_dotZero = copy._dotZero;
    }
    return (*this);
}

void    Convert::indicateType() {
    if (this->_literal.length() == 1 && std::isalpha(this->_literal[0])){
        if (std::isprint(this->_literal[0]) != 0) {
            this->_charType = "Not displayable";
        }
        this->_type = CHAR;
    }
    else if {
        this->_type = INT;
    }

}

void    Convert::setValues(){
    indicateType();
    if (this->_type == CHAR){
        std::cout << "char" << std::endl;
    }
    else if (this->_type == INT){
        std::cout << "int" << std::endl;
    }
    else if (this->_type == DOUBLE) {
        std::cout << "double" << std::endl;
    }
    else if (this->_type == FLOAT){
        std::cout << "float" << std::endl;
    }

}

std::string Convert::getCharType() const {
    return this->_charType;
}

int Convert::getIntType() const {
    return this->_intType;
}

float Convert::getFloatType() const {
    return this->_floatType;
}

double  Convert::getDoubleType() const {
    return this->_doubleType;
}

std::string Convert::getDotZero() const {
    return this->_dotZero;
}

Convert::~Convert() {}

std::ostream &operator<<(std::ostream &out, const Convert &copy)
{
    out << "char: " << copy.getCharType() << std::endl <<
        "int: " << copy.getIntType() << std::endl <<
        "float: " << copy.getFloatType() << copy.getDotZero() << std::endl <<
        "double: " << copy.getDoubleType() << copy.getDotZero() << std::endl;
    return (out);
}