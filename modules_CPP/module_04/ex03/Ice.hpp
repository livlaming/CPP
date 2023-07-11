#ifndef CPP_ICE_HPP
#define CPP_ICE_HPP
#include <iostream>

class Ice {
private:
    std::string _type;
public:
    virtual ICE* clone() const = 0;
    virtual void use(ICE& target);
};


#endif
