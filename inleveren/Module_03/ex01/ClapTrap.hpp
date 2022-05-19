//
// Created by Lisa Vlamings on 3/23/22.
//

#ifndef CPP__CLAPTRAP_HPP
#define CPP__CLAPTRAP_HPP

#include <iostream>

// Base class
class ClapTrap {
protected:
    std::string _Name;
    int _Hitpoints;
    int _EnergyPoints;
    int _AttackDamage;
    ClapTrap(void); // default constructor
public:

    ClapTrap(std::string Name);
    ~ClapTrap(void); // destructor
    ClapTrap(const ClapTrap &copy); // copy constructor
    ClapTrap &operator=(const ClapTrap &copy); // copy assignment operator

    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

};


#endif //CPP__CLAPTRAP_HPP
