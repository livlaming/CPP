//
// Created by Lisa Vlamings on 8/8/22.
//

#include "AAnimal.hpp"

AAnimal::AAnimal() {
    std::cout << "AAnimal constructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal &copy) {
    std::cout << "Copy constructor AAnimal called" << std::endl;
    *this = copy;
}

AAnimal &AAnimal::operator=(const AAnimal &copy) {
    std::cout << "Overload Copy assignment operator AAnimal called" << std::endl;
    if (&copy != this) {
        this->_type = copy.getType();
    }
    return (*this);
}

std::string AAnimal::getType() const {
    return (this->_type);
}

void AAnimal::makeSound() const{
    std::cout << "AAnimal Sound" << std::endl;
}

AAnimal::~AAnimal() {
    std::cout << "AAnimal deconstructor called" << std::endl;
}