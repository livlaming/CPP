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
    Zombie(void);
    ~Zombie(void);
    void setName(std::string newName);
    void announce( void );
};
Zombie* newZombie( std::string name );
void randomChump( std::string name );
#endif //CPP_ZOMBIE_HPP

