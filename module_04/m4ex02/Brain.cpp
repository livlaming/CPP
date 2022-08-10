//
// Created by Lisa Vlamings on 8/8/22.
//

#include "Brain.hpp"

Brain::Brain() {
    std::cout << "Brain constructor called called" << std::endl;
    for (int i = 0; i < 100; i++)
        this->ideas[i] = "idea";
}
//copy constructor is voor een object dat al bestaat,
Brain::Brain(const Brain &copy) {
    std::cout << "Copy constructor Brain called" << std::endl;
    *this = copy;
}

//assignation operator is voor een nieuwe object
Brain &Brain::operator=(const Brain &copy) {
    std::cout << "Copy assignment operator Brain called" << std::endl;
    for (int i; i < 100; i++)
        this->ideas[i] = copy.ideas[i];
    return (*this);
}

Brain::~Brain() {
    std::cout << "Brain deconstructor called" << std::endl;
}