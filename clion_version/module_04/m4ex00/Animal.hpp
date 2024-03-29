//
// Created by Lisa Vlamings on 8/8/22.
//

#ifndef CPP_ANIMAL_HPP
#define CPP_ANIMAL_HPP
#include <iostream>

class Animal {
protected:
    std::string _type;
public:
    Animal();
    ~Animal();
    Animal(const Animal &copy);
    Animal &operator=(const Animal &copy);
    std::string getType() const;

    virtual void makeSound() const ;
};

#endif //CPP_ANIMAL_HPP
