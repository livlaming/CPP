//
// Created by Lisa Vlamings on 3/23/22.
//
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>

//Example programme:
//
//Base1 constructor
//Member1 constructor
//Member2 constructor
//Derived1 constructor
//Member3 constructor
//Member4 constructor
//Derived2 constructor
//Derived2 destructor
//Member4 destructor
//Member3 destructor
//Derived1 destructor
//Member2 destructor
//Member1 destructor
//Base1 destructor
//
//destructors are called in reversed order of the constructors.
//You can see that construction starts at the very root of the class hierarchy, and that at each level the base class constructor is called first,
//followed by the member object constructors. The destructors are called in exactly the reverse order of the constructors – this is important
//because of potential dependencies (in the derived-class constructor or destructor, you must be able to assume that the base-class subobject
//is still available for use, and has already been constructed – or not destroyed yet).


int main(void){
    FragTrap Jojo("Jojo");

    Jojo.attack("Jeje");
    Jojo.beRepaired(10);
    Jojo.takeDamage(5);
    Jojo.beRepaired(10);
    Jojo.highFivesGuys();
    return (0);
}
