//
// Created by Lisa Vlamings on 2/8/22.
//

#ifndef CPP__ZOMBIE_HPP
#define CPP__ZOMBIE_HPP

#include <iostream>
#include <string>

class       Zombie {
    private:
            std::string _name;
    public:
            Zombie(void);
            ~Zombie(void);
            void                announce( void);
            void                setName( std::string name );
};

Zombie*     newZombie( std::string name );
void        randomChump( std::string name );

#endif //CPP__ZOMBIE_HPP
