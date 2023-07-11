#ifndef CPP_CAT_HPP
#define CPP_CAT_HPP
#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal{
private:
    Brain *_CatBrain;
public:
    Cat();
    ~Cat();
    Cat(const Cat &copy);
    Cat &operator=(const Cat &copy);

    Brain *getBrain() const;
    void makeSound() const;
};

#endif
