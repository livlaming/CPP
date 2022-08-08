//
// Created by Lisa Vlamings on 8/8/22.
//

#ifndef CPP_CAT_HPP
#define CPP_CAT_HPP
#include <iostream>
#include "Animal.hpp"

class Cat : Animal {
private:
    std::string type = "Cat";
public:
    Cat();
    ~Cat();

    makeSound();

};


#endif //CPP_CAT_HPP
