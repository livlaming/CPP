//
// Created by Lisa Vlamings on 8/8/22.
//

#include "Cat.hpp"

#include "Animal.hpp"
#include "Brain.hpp"

Cat::Cat() {
    std::cout << "constructor called" << std::endl;
    this->_type = "Cat";
    this->_CatBrain = new Brain;
}

Cat::Cat(const Cat &copy) {
    std::cout << "Copy constructor ClapTrap called" << std::endl;
    if (&copy)
        *this = copy;
}

Cat &Cat::operator=(const Cat &copy) {
    std::cout << "Copy assignment operator Claptrap called" << std::endl;
    if (&copy){
        this->_type = copy._type;
        this->_CatBrain = copy._CatBrain;
    }
    else
        this->_CatBrain = new Brain(copy._CatBrain);
    return (*this);
}

void Cat::makeSound() const {
    std::cout << "Cat Sound" << std::endl;
}

Cat::~Cat() {
    std::cout << "deconstructor called" << std::endl;
    delete this->_CatBrain;
}