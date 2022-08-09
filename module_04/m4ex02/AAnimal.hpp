//
// Created by Lisa Vlamings on 8/8/22.
//

#ifndef CPP_ANIMAL_HPP
#define CPP_ANIMAL_HPP
#include <iostream>

class AAnimal {
protected:
    std::string _type;
public:
    AAnimal();
    virtual ~AAnimal();
    AAnimal(const AAnimal &copy);
    AAnimal &operator=(const AAnimal &copy);
    std::string getType() const;

    virtual void makeSound() const ;
};

#endif //CPP_ANIMAL_HPP
