//
// Created by Lisa Vlamings on 8/8/22.
//

#ifndef CPP_DOG_HPP
#define CPP_DOG_HPP
#include <iostream>
#include "Animal.hpp"

class Dog : public Animal{
//protected:
//    std::string type;
public:
    Dog();
    ~Dog();
    Dog(const Dog &copy);
    Dog &operator=(const Dog &copy);

    void makeSound();
};

#endif //CPP_DOG_HPP
