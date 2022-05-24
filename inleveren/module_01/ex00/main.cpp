//
// Created by Lisa Vlamings on 5/19/22.
//
#include "Zombie.hpp"

int main(){
    Zombie *HeapZombie;

    HeapZombie = newZombie("HeapFreak");
    randomChump("StackFreak");
    HeapZombie->announce();
    delete HeapZombie;
    return (0);
}
