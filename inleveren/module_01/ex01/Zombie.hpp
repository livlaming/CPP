//
// Created by lisa vlamings on 15/02/2022.
//

#ifndef CPP__ZOMBIE_HPP
#define CPP__ZOMBIE_HPP

#include <iostream>
#include <string>

class       Zombie{
    private:
        std::string _name;
    public:
        Zombie(void);
        ~Zombie(void);
        void                announce(void);
        void                setName(std::string name);
        const std::string   &getName() const;
};

Zombie*     zombieHorde(int N, std::string name);

#endif //CPP__ZOMBIE_HPP
