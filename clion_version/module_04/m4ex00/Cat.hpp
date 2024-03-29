//
// Created by Lisa Vlamings on 8/8/22.
//

#ifndef CPP_CAT_HPP
#define CPP_CAT_HPP
#include <iostream>
#include "Animal.hpp"

class Cat : public Animal{
public:
    Cat();
    ~Cat();
    Cat(const Cat &copy);
    Cat &operator=(const Cat &copy);

    void makeSound() const;
};


#endif //CPP_CAT_HPP
