//
// Created by Lisa Vlamings on 8/8/22.
//

#ifndef CPP_DOG_HPP
#define CPP_DOG_HPP
#include <iostream>
#include "Animal.hpp"

class Dog : Animal{
private:
    std::string type = "Dog";
public:
    Dog();
    ~Dog();
    makeSound();
};


#endif //CPP_DOG_HPP
