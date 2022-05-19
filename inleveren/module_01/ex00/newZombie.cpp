//
// Created by Lisa Vlamings on 2/8/22.
//

#include "Zombie.hpp"

Zombie *newZombie( std::string name ){
    Zombie  *newZombie;

    newZombie = new Zombie;
    newZombie->setName(name);
    return (newZombie);
}
