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
    std::cout << meta->getType() << " " << std::endl;
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();

    std::cout << "----------------" << std::endl;
    const WrongAnimal *Wrongmeta = new WrongAnimal();
    const WrongAnimal *Wrongi = new WrongCat();
    std::cout << Wrongmeta->getType() << " " << std::endl;
    std::cout << Wrongi->getType() << " " << std::endl;
    Wrongi->makeSound(); //will output the cat sound!
    Wrongmeta->makeSound();
    return 0;
}
