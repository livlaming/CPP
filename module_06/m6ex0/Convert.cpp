//
// Created by Lisa Vlamings on 11/14/22.
//
#include "Convert.hpp"
Convert::Convert() {}

Convert::Convert(std::string literal) : _literal(literal), _type(INVALID){
    setValues();
    _exception[CHAR] = Exc_None;
    _exception[INT] = Exc_None;
    _exception[FLOAT] = Exc_None;
    _exception[DOUBLE] = Exc_None;
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

int     Convert::checkAlpha(){
    for (int i = 0; this->_literal[i]; i++)
    {
        if (std::isalpha(this->_literal[i])){
            return (1);
        }
    }
    return (0);
}


int     Convert::checkDigit(){
    for (int i = 0; this->_literal[i]; i++)
    {
        if (!std::isdigit(this->_literal[i])){
            return (0);
        }
    }
    return (1);
}

void    Convert::indicateType() {
    if (this->_literal.length() == 1 && std::isalpha(this->_literal[0])){
        if (std::isdigit(this->_literal[0])) {
            this->_charType = INT;
        }
        else {
            this->_type = CHAR;
        }
    }
    else if (this->_literal == "nanf" || this->_literal == "-inff" || this->_literal == "+inff") {
        this->_exception[CHAR] = Exc_imp;
        this->_exception[INT] = Exc_imp;
        this->_type = FLOAT;
    }
    else if (this->_literal == "nan" || this->_literal == "-inf" || this->_literal == "+inf") {
        this->_exception[CHAR] = Exc_imp;
        this->_exception[INT] = Exc_imp;
        this->_type = DOUBLE;
    }
    else if (this->_literal.find(".") != std::string::npos) {
        if (this->_literal[this->_literal.length() - 1] == 'f') {
            this->_type = FLOAT;
        }
        else if (checkAlpha() == 0){
            this->_type = DOUBLE;
        }
    }
    else if (checkDigit() == 1){
        this->_type = INT;
    }
}

void    Convert::fromChar(){
//    if (!std::isprint(this->_literal)) {
        this->_exception[CHAR] = Exc_NoDisp;
//    }
//    else {
//        this->_charType = "'" + this->_literal + "'";
//    }
    this->_intType = static_cast<int>(*this->_literal.c_str());
    this->_doubleType = static_cast<double>(*this->_literal.c_str());
    this->_floatType = static_cast<float>(*this->_literal.c_str());
    this->_dotZero = ".0";
    this->_f = "f";
}

void    Convert::fromInt(){
    long val = std::stol(this->_literal);
    if (val < std::numeric_limits<int>::lowest() || val > std::numeric_limits<int>::max()){
        this->_exception[INT] = "Impossible";
    }

    if (!std::isprint(std::stol(this->_literal))) {
        this->_charType = "Non displayable";
    }
    else  {
        this->_charType = static_cast<int>(std::stol(this->_literal));
    }
    this->_intType = static_cast<int>(std::stol(this->_literal));
    this->_doubleType = static_cast<double>(std::stod(this->_literal));
    if (errno < 0)
        this->_exception[DOUBLE] = Exc_imp;

    this->_floatType = static_cast<float>(std::stod(this->_literal));
    this->_dotZero = ".0";
    this->_f = "f";
}


void    Convert::setValues(){
    indicateType();
    if (this->_type == CHAR){
        std::cout << "type = CHAR" << std::endl;
        fromChar();
    }
    else if (this->_type == INT){
        std::cout << "type = INT" << std::endl;
        fromInt();
    }
    else if (this->_type == DOUBLE) {
        std::cout << "type = DOUBLE" << std::endl;
    }
    else if (this->_type == FLOAT){
        std::cout << "type = FLOAT" << std::endl;
    }

}

enum e_Type Convert::getType() const {
    return this->_type;
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

std::string Convert::getF() const {
    return this->_f;
}


void    Convert::createStream(std::ostream &out) const {
    out << "char: ";
    if (!_exception[CHAR].empty()){
        out << _exception[CHAR] << std::endl;
    }
    else{
        out << this->getCharType() << std::endl;
    }
    out << "int: ";
    if (!_exception[INT].empty()){
        out << _exception[INT] << std::endl;
    }
    else{
        out << this->getIntType() << std::endl;
    }
    out << "float: ";
    if (!_exception[FLOAT].empty()){
        out << _exception[FLOAT];
    }
    else{
        out << this->getFloatType();
    }
    out << this->getDotZero() << this->getF() << std::endl;
    out << "double: ";
    if (!_exception[DOUBLE].empty()){
        out << _exception[DOUBLE];
    }
    else{
        out << this->getDoubleType();
    }
    out << this->getDotZero() << std::endl;
}

Convert::~Convert() {}

std::ostream &operator<<(std::ostream &out, const Convert &copy) {
    if (copy.getType() == INVALID){
        out << "INVALID: please try again";
    }
    else {
        copy.createStream(out);
    }

//    else {
//        out << "char: " << copy.checkException(CHAR) << std::endl <<
//            "int: " << copy.checkException(INT) << std::endl <<
//            "float: " << copy.checkException(FLOAT) << copy.getDotZero() << copy.getF() << std::endl <<
//            "double: " << copy.checkException() << copy.getDotZero() << std::endl;
//    }

//    else {
//        out << "char: " << copy.getCharType() << std::endl <<
//            "int: " << copy.getIntType() << std::endl <<
//            "float: " << copy.getFloatType() << copy.getDotZero() << copy.getF() << std::endl <<
//            "double: " << copy.getDoubleType() << copy.getDotZero() << std::endl;
//    }
    return (out);
}