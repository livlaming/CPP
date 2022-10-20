#include "Dog.hpp"

Dog::Dog() {
    std::cout << "Dog constructor called" << std::endl;
    this->_type = "Dog";
}

Dog::Dog(const Dog &copy) {
    std::cout << "Copy constructor Dog called" << std::endl;
    *this = copy;
}

Dog &Dog::operator=(const Dog &copy) {
    std::cout << "Copy assignment operator Dog called" << std::endl;
    if (&copy != this)
        this->_type = copy._type;
    return (*this);
}

void Dog::makeSound() const {
    std::cout << "Dog Sound" << std::endl;
}

Dog::~Dog() {
    std::cout << "Dog deconstructor called" << std::endl;
}
