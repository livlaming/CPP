#ifndef CPP_CONVERT_HPP
#define CPP_CONVERT_HPP
#include <iostream>
#include <cstdlib>

class Convert {
private:
    std::string _literal;
    std::string _dotZero;
    Convert();
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


    Convert(std::string number);
    ~Convert();
    Convert(const Convert &copy);
    Convert &operator=(const Convert &copy);

    void indicateType(std::string input);
    void printOutput();
    void fromFloat(std::string input);
    void fromChar(std::string input);
    void fromDouble(std::string input);
    void fromInt(std::string input);
};

#endif
