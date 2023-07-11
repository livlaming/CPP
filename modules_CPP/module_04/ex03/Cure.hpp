#ifndef CPP_CURE_HPP
#define CPP_CURE_HPP
#include <iostream>

class Cure {
private:
    std::string _type;
public:
    virtual Cure* clone() const = 0;
    virtual void use(Cure& target);
};


#endif
