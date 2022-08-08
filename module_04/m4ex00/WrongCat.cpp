//
// Created by Lisa Vlamings on 8/8/22.
//

#include "WrongCat.hpp"
#include "WrongAnimal.hpp"
#include <iostream>

WrongCat::WrongCat() {
    std::cout << "constructor called" << std::endl;
    this->type = "Cat";
}

WrongCat::WrongCat(const WrongCat &copy) {
    std::cout << "Copy constructor ClapTrap called" << std::endl;
    if (&copy)
    *this = copy;
}

WrongCat &WrongCat::operator=(const WrongCat &copy) {
    std::cout << "Copy assignment operator Claptrap called" << std::endl;
    if (&copy){
    this->type = "";
    }
    return (*this);
}

void WrongCat::makeSound() const {
    std::cout << "Cat Sound" << std::endl;
}

WrongCat::~WrongCat() {
    std::cout << "deconstructor called" << std::endl;
}