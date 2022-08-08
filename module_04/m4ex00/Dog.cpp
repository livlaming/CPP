//
// Created by Lisa Vlamings on 8/8/22.
//

#include "Dog.hpp"

Dog::Dog() {
    std::cout << "constructor called" << std::endl;
    this->type = "Dog";
}

Dog::Dog(const Dog &copy) {
    std::cout << "Copy constructor ClapTrap called" << std::endl;
    if (&copy)
        *this = copy;
}

Dog &Dog::operator=(const Dog &copy) {
    std::cout << "Copy assignment operator Claptrap called" << std::endl;
    if (&copy){
        this->type = "";
    }
    return (*this);
}

void Dog::makeSound() const{
    std::cout << "Dog Sound" << std::endl;
}

Dog::~Dog() {
    std::cout << "deconstructor called" << std::endl;
}