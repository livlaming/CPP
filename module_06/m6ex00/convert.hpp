//
// Created by Lisa Vlamings on 8/18/22.
//

#ifndef CPP_CONVERT_HPP
#define CPP_CONVERT_HPP
#include <iostream>

class convert {
private:
    std::string _type;
    std::string _charType;
    int _intType;
    float _floatType;
    double _doubleType;
public:
    convert();
    ~convert();
    convert(const convert &copy);
    convert &operator=(const convert &copy);

    void indicateType(std::string input);
};


#endif //CPP_CONVERT_HPP
