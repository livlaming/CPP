//
// Created by Lisa Vlamings on 5/23/22.
//
#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ){
    Zombie *NewHorde;

    NewHorde = new Zombie[N];
    for (int i = 0; i < N; i++){
        NewHorde[i].setName(name);
    }
    return (NewHorde);
}
