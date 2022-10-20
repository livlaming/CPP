#include "Dog.hpp"

Dog::Dog() {
    std::cout << "Dog constructor called" << std::endl;
    this->_type = "Dog";
    this->_DogBrain = new Brain();
}

Dog::Dog(const Dog &copy) {
    std::cout << "Copy constructor Dog called" << std::endl;
    *this = copy;
}

Dog &Dog::operator=(const Dog &copy) {
    std::cout << "Copy assignment operator Dog called" << std::endl;
    if (&copy != this){
        this->_type = copy.getType();
        this->_DogBrain = new Brain(*copy.getBrain());
    }
    return (*this);
}

void Dog::makeSound() const{
    std::cout << "Dog Sound" << std::endl;
}

Brain *Dog::getBrain() const{
    return(this->_DogBrain);
}

Dog::~Dog() {
    std::cout << "Dog deconstructor called" << std::endl;
    delete this->_DogBrain;
}
