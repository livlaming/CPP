#include "Brain.hpp"

Brain::Brain() {
    std::cout << "CAT BRAIN Brain constructor called" << std::endl;
    for (int i = 0; i < 100; i++)
        this->ideas[i] = "idea";
}

Brain::Brain(const Brain &copy) {
    std::cout << "Copy constructor Brain called" << std::endl;
    *this = copy;
}

Brain &Brain::operator=(const Brain &copy) {
    std::cout << "Copy assignment operator Brain called" << std::endl;
    if (&copy != this){
        for (int i = 0; i < 100; i++)
            this->ideas[i] = copy.ideas[i];
    }
    return (*this);
}

Brain::~Brain() {
    std::cout << "Brain deconstructor called" << std::endl;
}
