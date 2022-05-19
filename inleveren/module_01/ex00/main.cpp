//
// Created by Lisa Vlamings on 2/8/22.
//
#include "Zombie.hpp"

int main(){
    Zombie *zombie;

    randomChump("RANDOM CHUMP");
    zombie = newZombie("FREAK");
    delete zombie;
    return (0);
}
