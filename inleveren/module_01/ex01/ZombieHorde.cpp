//
// Created by lisa vlamings on 15/02/2022.
//

#include "Zombie.hpp"
Zombie*             zombieHorde( int N, std::string name ){
    Zombie *newZombie;

    newZombie = new Zombie[N];
    int i = 0;
    while (i < N)
    {
        newZombie[i].setName(name);
        newZombie[i].announce();
        i++;
    }
    return(newZombie);
}
