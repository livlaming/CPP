//
// Created by Lisa Vlamings on 8/8/22.
//

#include "Animal.hpp"

Animal::Animal() {
    std::cout << "constructor called" << std::endl;
}

Animal::Animal(const Animal &copy) {
    std::cout << "Copy constructor ClapTrap called" << std::endl;
//    if (&copy)
        *this = copy;
}

Animal &Animal::operator=(const Animal &copy) {
    std::cout << "Copy assignment operator Claptrap called" << std::endl;
//    if (&copy){
        this->type = "";
//    }
    return (*this);
}
std::string Animal::getType() {
    return (this->type);
}
void Animal::makeSound() {
    std::cout << "Cat Sound" << std::endl;
}

Animal::~Animal() {
    std::cout << "deconstructor called" << std::endl;
}