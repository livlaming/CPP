//
// Created by Lisa Vlamings on 8/8/22.
//

#ifndef CPP_ANIMAL_HPP
#define CPP_ANIMAL_HPP
#include <iostream>

class Animal {
protected:
    std::string type;
public:
    Animal();
    ~Animal();
    makeSound();
};

#endif //CPP_ANIMAL_HPP
