#ifndef CPP__CLAPTRAP_HPP
#define CPP__CLAPTRAP_HPP
#include <iostream>

class ClapTrap {
private:
    std::string _Name;
    int         _Hitpoints;
    int         _EnergyPoints;
    int         _AttackDamage;
    ClapTrap(void);

public:
    ClapTrap(std::string Name);
    ~ClapTrap(void);
    ClapTrap(const ClapTrap &copy);
    ClapTrap &operator=(const ClapTrap &copy);

    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};


#endif //CPP__CLAPTRAP_HPP
