//
// Created by Lisa Vlamings on 8/8/22.
//

#include "WrongCat.hpp"
#include "WrongAnimal.hpp"
#include <iostream>

WrongCat::WrongCat() {
    std::cout << "WrongAnimal constructor called" << std::endl;
    this->_type = "WrongAnimal";
}

WrongCat::WrongCat(const WrongCat &copy) {
    std::cout << "Copy constructor WrongAnimal called" << std::endl;
    *this = copy;
}

WrongCat &WrongCat::operator=(const WrongCat &copy) {
    std::cout << "Copy assignment operator WrongAnimal called" << std::endl;
    if (&copy != this)
        this->_type = copy._type;
    return (*this);
}

void WrongCat::makeSound() const {
    std::cout << "WrongAnimal Sound" << std::endl;
}

WrongCat::~WrongCat() {
    std::cout << "WrongAnimal deconstructor called" << std::endl;
}
