#include "Convert.hpp"
Convert::Convert() {}

Convert::Convert(std::string literal) : _literal(literal), _type(INVALID){
    _exception[CHAR] = Exc_None;
    _exception[INT] = Exc_None;
    _exception[FLOAT] = Exc_None;
    _exception[DOUBLE] = Exc_None;
    setValues();
}

Convert::Convert(const Convert &copy) : _literal(copy._literal), _charType(copy._charType), _intType(copy._intType), _floatType(copy._floatType), _doubleType(copy._doubleType){

}

Convert &Convert::operator=(const Convert &copy) {
    if (this != &copy){
        this->_literal = copy._literal;
        this->_charType = copy._charType;
        this->_intType = copy._intType;
        this->_floatType = copy._floatType;
        this->_doubleType = copy._doubleType;
        this->_dotZero = copy._dotZero;
        this->_f = copy._f;
        this->_type = copy._type;
        this->_exception[CHAR] = copy._exception[CHAR];
        this->_exception[INT] = copy._exception[INT];
        this->_exception[FLOAT] = copy._exception[FLOAT];
        this->_exception[DOUBLE] = copy._exception[DOUBLE];

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
    int i = 0;
    if (this->_literal[i] == '+' || this->_literal[i] == '-'){
        i++;
    }
    for (; this->_literal[i]; i++)
    {
        if (!std::isdigit(this->_literal[i])){
            return (0);
        }
    }
    return (1);
}

void    Convert::floatDoubleException(){
    if (this->_literal == "nanf" || this->_literal == "nan"){
        this->_exception[DOUBLE] = Exc_Nan;
        this->_exception[FLOAT] = Exc_Nan;
    }
    else if (this->_literal == "-inff" || this->_literal == "-inf"){
        this->_exception[DOUBLE] = Exc_inf_minus;
        this->_exception[FLOAT] = Exc_inf_minus;
    }
    else if (this->_literal == "+inff" || this->_literal == "+inf"){
        this->_exception[DOUBLE] = Exc_inf_plus;
        this->_exception[FLOAT] = Exc_inf_plus;
    }
    this->_exception[CHAR] = Exc_imp;
    this->_exception[INT] = Exc_imp;
}

void    Convert::indicateType() {
    if (this->_literal.length() == 1 && std::isalpha(this->_literal[0])){
        if (std::isdigit(this->_literal[0])) {
            this->_type = INT;
        }
        else {
            this->_type = CHAR;
        }
    }
    else if (this->_literal == "nanf" || this->_literal == "-inff" || this->_literal == "+inff") {
        floatDoubleException();
        this->_type = FLOAT;
    }
    else if (this->_literal == "nan" || this->_literal == "-inf" || this->_literal == "+inf") {
        floatDoubleException();
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

void    Convert::toChar(){
    if (this->_exception[CHAR].empty()){
        char* pEnd = NULL;
        long val = std::strtol(this->_literal.c_str(), &pEnd, 10);
        if (*pEnd != '\0'){
            this->_type = INVALID;
            return;
        }
        if (!std::isprint(val)) {
            this->_exception[CHAR] = Exc_NoDisp;
        }
        else  {
            this->_charType = static_cast<char>(val);
        }
    }
}

void    Convert::toInt(){
    if (this->_exception[INT].empty()){
        char* pEnd = NULL;
        long val = std::strtol(this->_literal.c_str(), &pEnd, 10);
        if (*pEnd != '\0'){
            this->_type = INVALID;
            return;
        }
        if (val < std::numeric_limits<int>::lowest() || val > std::numeric_limits<int>::max()){
            this->_exception[INT] = Exc_imp;
        }
        else {
            this->_intType = static_cast<int>(val);
        }
    }
}

void    Convert::toFloat(){
    if (this->_exception[FLOAT].empty()){
        char* pEnd = NULL;
        double valDouble = std::strtod(this->_literal.c_str(), &pEnd);
        if (*pEnd != '\0'){
            this->_type = INVALID;
            return;
        }
        if (valDouble < std::numeric_limits<float>::lowest() || valDouble > std::numeric_limits<float>::max()){
            this->_exception[FLOAT] = Exc_imp;
        }
        else {
            this->_floatType = static_cast<float>(valDouble);
        }
    }
}

void    Convert::toDouble(){
    if (this->_exception[DOUBLE].empty()){
        char* pEnd = NULL;
        double valDouble = std::strtod(this->_literal.c_str(), &pEnd);
        if (*pEnd != '\0'){
            this->_type = INVALID;
            return;
        }
        if (errno < 0){
            this->_exception[DOUBLE] = Exc_imp;
        }
        else {
            this->_doubleType = static_cast<double>(valDouble);
        }
    }
}

void    Convert::fromDigit(){
    toChar();
    toInt();
    toDouble();
    toFloat();
    if (this->_exception[FLOAT].empty() && this->_exception[DOUBLE].empty()){
        if (this->_literal.find(".") == std::string::npos){
            this->_dotZero = ".0";
        }
        if (this->_literal.find(".") != std::string::npos && this->_literal.find(".") + 2 >= this->_literal.length()) {
            this->_dotZero = ".0";
        }
        if (this->_literal.find(".0") == this->_literal.length() - 3){
            this->_dotZero = ".0";
        }
    }
    this->_f = "f";
}

void    Convert::fromChar(){
    if (!std::isprint(static_cast<unsigned char>(this->_literal[0]))) {
        this->_exception[CHAR] = Exc_NoDisp;
    }
    else {
        this->_charType =  static_cast<char>(this->_literal[0]);
    }
    this->_intType = static_cast<int>(*this->_literal.c_str());
    this->_doubleType = static_cast<double>(*this->_literal.c_str());
    this->_floatType = static_cast<float>(*this->_literal.c_str());
    this->_dotZero = ".0";
    this->_f = "f";
}

void    Convert::setValues(){
    indicateType();
    if (this->_type == CHAR){
        std::cout << "type = CHAR" << std::endl;
        fromChar();
    }
    else if (this->_type == INT || this->_type == DOUBLE || this->_type == FLOAT){
        fromDigit();
    }

}

enum e_Type Convert::getType() const {
    return this->_type;
}

char Convert::getCharType() const {
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
    else {
        out << "'" << this->getCharType() << "'" << std::endl;
    }
    out << "int: ";
    if (!_exception[INT].empty()){
        out << _exception[INT] << std::endl;
    }
    else {
        out << this->getIntType() << std::endl;
    }
    out << "float: ";
    if (!_exception[FLOAT].empty()){
        out << _exception[FLOAT];
    }
    else {
        out << this->getFloatType();
    }
    out << this->getDotZero() << this->getF() << std::endl;
    out << "double: ";
    if (!_exception[DOUBLE].empty()){
        out << _exception[DOUBLE];
    }
    else {
        out << this->getDoubleType();
    }
    out << this->getDotZero();
}

Convert::~Convert() {}

std::ostream &operator<<(std::ostream &out, const Convert &copy) {
    if (copy.getType() == INVALID){
        out << "INVALID: please try again";
    }
    else {
        copy.createStream(out);
    }
    return (out);
}
