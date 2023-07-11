//
// Created by Lisa Vlamings on 8/8/22.
//
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main() {
    const Animal *meta = new Animal();
    const Animal *j = new Dog();
    const Animal *i = new Cat();

    const WrongAnimal *Wrongmeta = new WrongAnimal();
    const WrongAnimal *Wrongi = new WrongCat();

    std::cout << "\n----------------\n" << std::endl;
    std::cout << meta->getType() << " " << std::endl;
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound();
    j->makeSound();
    meta->makeSound();
    std::cout << Wrongmeta->getType() << " " << std::endl;
    std::cout << Wrongi->getType() << " " << std::endl;
    Wrongi->makeSound();
    Wrongmeta->makeSound();
    std::cout << "\n----------------\n" << std::endl;

    delete j;
    delete i;
    delete meta;
    delete Wrongmeta;
    delete Wrongi;
    return 0;
}
