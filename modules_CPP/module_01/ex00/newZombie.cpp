//
// Created by Lisa Vlamings on 5/19/22.
//
#include "Zombie.hpp"

Zombie* newZombie( std::string name )
{
    Zombie *HeapZombie;
    HeapZombie = new Zombie;
    HeapZombie->setName(name);
    return (HeapZombie);
}
