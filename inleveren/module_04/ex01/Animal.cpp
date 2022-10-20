//
// Created by Lisa Vlamings on 8/8/22.
//

#include "Animal.hpp"

Animal::Animal() {
    std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(const Animal &copy) {
    std::cout << "Copy constructor Animal called" << std::endl;
    *this = copy;
}

Animal &Animal::operator=(const Animal &copy) {
    std::cout << "Overload Copy assignment operator Animal called" << std::endl;
    if (&copy != this)
        this->_type = copy.getType();
    return (*this);
}

std::string Animal::getType() const {
    return (this->_type);
}

void Animal::makeSound() const{
    std::cout << "Animal Sound" << std::endl;
}

Animal::~Animal() {
    std::cout << "Animal deconstructor called" << std::endl;
}