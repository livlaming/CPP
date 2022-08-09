//
// Created by Lisa Vlamings on 8/8/22.
//

#include "AAnimal.hpp"

AAnimal::AAnimal() {
    std::cout << "Animal constructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal &copy) {
    std::cout << "Copy constructor Animal called" << std::endl;
    *this = copy;
}

AAnimal &AAnimal::operator=(const AAnimal &copy) {
    std::cout << "Overload Copy assignment operator Animal called" << std::endl;
    this->_type = copy.getType();
    return (*this);
}

std::string AAnimal::getType() const {
    return (this->_type);
}

void AAnimal::makeSound() const{
    std::cout << "Animal Sound" << std::endl;
}

AAnimal::~AAnimal() {
    std::cout << "Animal deconstructor called" << std::endl;
}