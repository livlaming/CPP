//
// Created by Lisa Vlamings on 8/8/22.
//

#include "Dog.hpp"

Dog::Dog() {
    std::cout << "Dog constructor called" << std::endl;
    this->_type = "Dog";
    this->_DogBrain = new Brain();
}

Dog::Dog(const Dog &copy) {
    std::cout << "Copy constructor Dog called" << std::endl;
    this->_type = copy.getType();
    this->_DogBrain = new Brain(*copy._DogBrain);
//        *this = copy;
}

Dog &Dog::operator=(const Dog &copy) {
    std::cout << "Copy assignment operator Dog called" << std::endl;
    this->_type = copy._type;
    this->_DogBrain = copy._DogBrain;

    return (*this);
}

void Dog::makeSound() const{
    std::cout << "Dog Sound" << std::endl;
}

Dog::~Dog() {
    std::cout << "Dog deconstructor called" << std::endl;
    delete this->_DogBrain;
}