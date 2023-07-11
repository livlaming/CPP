//
// Created by Lisa Vlamings on 5/19/22.
//
#include "Zombie.hpp"

void randomChump( std::string name ){
    Zombie StackZombie;

    StackZombie.setName(name);
    StackZombie.announce();
}