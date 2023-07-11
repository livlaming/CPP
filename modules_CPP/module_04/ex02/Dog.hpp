#ifndef CPP_DOG_HPP
#define CPP_DOG_HPP
#include <iostream>
#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal{
private:
    Brain *_DogBrain;
public:
    Dog();
    ~Dog();
    Dog(const Dog &copy);
    Dog &operator=(const Dog &copy);
    Brain *getBrain() const;
    void makeSound() const;
};

#endif
