//
// Created by Lisa Vlamings on 8/8/22.
//
#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main()
{
    const AAnimal* x = new AAnimal();
    const AAnimal* j = new Dog();
    const AAnimal* i = new Cat();
//    const Dog* a = new AAnimal();

    const AAnimal* Various[5];
    for (int i; i < 5; i++)
    {
        if (i % 2 == 0)
            Various[i] = new Dog();
        else
            Various[i] = new Cat();
    }
    for (int i; i < 5; i++){
        std::cout << Various[i]->getType() << std::endl;
    }


//    delete j;//should not create a leak
//    delete i;
//    for (int i; i < 5; i++)
//        delete Various[i];


    return 0;
}

//    system("leaks m4ex01");
//int NumberOfAnimals = 5;
//std::cout << NumberOfAnimals << std::endl;
//const Animal* Various[NumberOfAnimals];