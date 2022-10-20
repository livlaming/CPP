//
// Created by Lisa Vlamings on 8/8/22.
//
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main()
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    const Animal* Various[5];
    for (int i = 0; i < 5; i++)
    {
        if (i % 2 == 0)
            Various[i] = new Dog();
        else
            Various[i] = new Cat();
    }
    for (int i = 0; i < 5; i++)
        std::cout << Various[i]->getType() << std::endl;


    std::cout << "BRAIN CHECKK!!!" << std::endl;

    Cat* Kit = new Cat();
    for (int i = 0; i < 100; i++){
        std::cout << "CAT brain: " << Kit->getBrain()->ideas[i] << std::endl;
    }

    Dog* Ko = new Dog();
    for (int i = 0; i < 100; i++){
        std::cout << "DOG brain: " << Ko->getBrain()->ideas[i] << std::endl;
    }

    delete j;//should not create a leak
    delete i;
    for (int i = 0; i < 5; i++)
        delete Various[i];

    system("leaks m4ex01");
    return 0;
}
