//
// Created by Lisa Vlamings on 8/8/22.
//

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
    std::cout << "constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy) {
    std::cout << "Copy constructor ClapTrap called" << std::endl;
//    if (&copy)
    *this = copy;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &copy) {
    std::cout << "Copy assignment operator Claptrap called" << std::endl;
//    if (&copy){
    this->type = "";
//    }
    return (*this);
}
std::string WrongAnimal::getType() const {
    return (this->type);
}
void WrongAnimal::makeSound() const{
    std::cout << "Cat Sound" << std::endl;
}

WrongAnimal::~Animal() {
    std::cout << "deconstructor called" << std::endl;
}


