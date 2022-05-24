//
// Created by Lisa Vlamings on 5/19/22.
//

#ifndef CPP_ZOMBIE_HPP
#define CPP_ZOMBIE_HPP
#include <iostream>

class Zombie {
private:
    std::string _Name;
public:
    Zombie();
    ~Zombie();
    void setName(std::string newName);
    void announce( void );
};

Zombie* zombieHorde( int N, std::string name );

#endif //CPP_ZOMBIE_HPP

