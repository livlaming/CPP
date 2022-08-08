//
// Created by Lisa Vlamings on 8/8/22.
//

#include "Brain.hpp"

Brain::Brain() {
    for (int i; i < 100; i++)
        this->ideas[i] = "idea";
}

Brain::Brain(const Brain &copy) {
    std::cout << "Copy constructor ClapTrap called" << std::endl;
    if (&copy)
        *this = copy;
}

Brain &Brain::operator=(const Brain &copy) {
    std::cout << "Copy assignment operator Claptrap called" << std::endl;
    if (&copy){
        for (int i; i < 100; i++)
            this->ideas[i] = copy.ideas[i];
    }
    return (*this);
}

Brain::~Brain() {
    std::cout << "deconstructor called" << std::endl;
}