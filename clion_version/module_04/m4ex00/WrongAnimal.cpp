//
// Created by Lisa Vlamings on 8/8/22.
//

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
    std::cout << "WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy) {
    std::cout << "Copy constructor WrongAnimal called" << std::endl;
    if (&copy)
    *this = copy;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &copy) {
    std::cout << "Copy assignment operator WrongAnimal called" << std::endl;
    if (&copy != this)
        this->_type = copy._type;
    return (*this);
}
std::string WrongAnimal::getType() const {
    return (this->_type);
}
void WrongAnimal::makeSound() const{
    std::cout << "WrongAnimal Sound" << std::endl;
}

WrongAnimal::~WrongAnimal() {
    std::cout << "WrongAnimal deconstructor called" << std::endl;
}


