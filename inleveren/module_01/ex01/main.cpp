//
// Created by lisa vlamings on 15/02/2022.
//
#include "Zombie.hpp"
int     main()
{
    Zombie *zombie;
    int i = 0;
    int N = 5;

    zombie = zombieHorde(N, "FREAK");
    while (i < N)
    {
        std::cout << zombie[i].getName() << std::endl;
        i++;
    }
    delete [] zombie;
    return (0);
}
