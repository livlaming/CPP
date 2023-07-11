//
// Created by Lisa Vlamings on 5/23/22.
//
#include "Zombie.hpp"

int main(){
    Zombie *ZombieHorde;
    int N = 5;

    ZombieHorde = zombieHorde(N, "Freaks");
    for (int i = 0; i < N; i++){
        ZombieHorde[i].announce();
    }
    delete [] ZombieHorde;
    return (0);
}
