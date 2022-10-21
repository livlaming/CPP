#ifndef CPP_CAT_HPP
#define CPP_CAT_HPP
#include <iostream>
#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal{
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
