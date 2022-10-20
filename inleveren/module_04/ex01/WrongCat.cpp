//
// Created by Lisa Vlamings on 8/8/22.
//

#include "WrongCat.hpp"
#include "WrongAnimal.hpp"
#include <iostream>

WrongCat::WrongCat() {
    std::cout << "WrongCat constructor called" << std::endl;
    this->_type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &copy) {
    std::cout << "Copy constructor WrongCat called" << std::endl;
    *this = copy;
}

WrongCat &WrongCat::operator=(const WrongCat &copy) {
    std::cout << "Copy assignment operator WrongCat called" << std::endl;
    if (&copy != this)
        this->_type = copy._type;
    return (*this);
}

void WrongCat::makeSound() const {
    std::cout << "WrongCat Sound" << std::endl;
}

WrongCat::~WrongCat() {
    std::cout << "WrongCat deconstructor called" << std::endl;
}