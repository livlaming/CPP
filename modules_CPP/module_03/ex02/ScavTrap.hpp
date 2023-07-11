//
// Created by Lisa Vlamings on 7/11/22.
//

#ifndef CPP_SCAVTRAP_HPP
#define CPP_SCAVTRAP_HPP
#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
private:
    ScavTrap(void);
public:
    ScavTrap(std::string Name);
    ScavTrap(const ScavTrap &copy);
    ScavTrap &operator=(const ScavTrap &copy);
    ~ScavTrap(void);

    void guardGate();
    void attack(const std::string& target);
};


#endif //CPP_SCAVTRAP_HPP
