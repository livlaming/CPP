#include "Cat.hpp"
#include "AAnimal.hpp"
#include "Brain.hpp"

Cat::Cat() {
    std::cout << "Cat constructor called" << std::endl;
    this->_type = "Cat";
    this->_CatBrain = new Brain();
}

Cat::Cat(const Cat &copy) {
    std::cout << "Copy constructor Cat called" << std::endl;
    *this = copy;
}

Cat &Cat::operator=(const Cat &copy) {
    std::cout << "Copy assignment operator Cat called" << std::endl;
    if (&copy != this){
        this->_type = copy.getType();
        this->_CatBrain = new Brain(*copy.getBrain());
    }
    return (*this);
}

Brain *Cat::getBrain() const{
    return(this->_CatBrain);
}

void Cat::makeSound() const {
    std::cout << "Cat Sound" << std::endl;
}

Cat::~Cat() {
    std::cout << "Cat deconstructor called" << std::endl;
    delete this->_CatBrain;
}
