//
// Created by Lisa Vlamings on 8/8/22.
//

#include "Brain.hpp"

Brain::Brain() {
}

Brain::Brain(const Brain &copy) {
    std::cout << "Copy constructor ClapTrap called" << std::endl;
    if (&copy)
        *this = copy;
}

Brain &Brain::operator=(const Brain &copy) {
    std::cout << "Copy assignment operator Claptrap called" << std::endl;
//    if (&copy){
//        this->ideas = copy->ideas;
//    }
    return (*this);
}

Brain::~Brain() {
    std::cout << "deconstructor called" << std::endl;
}