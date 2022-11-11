#ifndef CPP_CONVERT_HPP
#define CPP_CONVERT_HPP
#include <iostream>
#include <cstdlib>

class Convert {
private:
//    std::string _type;
//    std::string _charType;
//    int _intType;
//    float _floatType;
//    double _doubleType;
public:
    std::string _type;
    std::string _charType;
    int _intType;
    float _floatType;
    double _doubleType;
    std::string _dotNull;
    Convert();
    ~Convert();
    Convert(const Convert &copy);
    Convert &operator=(const Convert &copy);

    void indicateType(std::string input);
    void printOutput();
    void isFloat(std::string input);
    void isChar(std::string input);
    void isDouble(std::string input);
    void isInt(std::string input);
};

#endif
