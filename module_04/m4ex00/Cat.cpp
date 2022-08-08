//
// Created by Lisa Vlamings on 8/8/22.
//

#include "Cat.hpp"

#include "Animal.hpp"

Cat::Cat() {
    std::cout << "constructor called" << std::endl;
    this->type = "Cat";
}

Cat::Cat(const Cat &copy) {
    std::cout << "Copy constructor ClapTrap called" << std::endl;
    if (&copy)
        *this = copy;
}

Cat &Cat::operator=(const Cat &copy) {
    std::cout << "Copy assignment operator Claptrap called" << std::endl;
    if (&copy){
        this->type = "";
    }
    return (*this);
}

void Cat::makeSound() const {
    std::cout << "Cat Sound" << std::endl;
}

Cat::~Cat() {
    std::cout << "deconstructor called" << std::endl;
}