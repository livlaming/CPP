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
//    const Animal* j = new Dog();
    const Animal* i = new Cat();

//    int NumberOfAnimals = 5;
//    const Animal* Various[NumberOfAnimals];
//    for (int i; i < NumberOfAnimals; i++)
//    {
//        if (i % 2 == 0)
//            Various[i] = new Dog();
//        else
//            Various[i] = new Cat();
//    }
//    for (int i; i < NumberOfAnimals; i++)
//        std::cout << Various[i]->getType() << std::endl;

//    for (int i; i < NumberOfAnimals; i++)
//        delete Various[i];
//    delete j;//should not create a leak
    delete i;

 system("leaks m4ex01");
    return 0;
}
