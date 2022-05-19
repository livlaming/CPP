//
// Created by Lisa Vlamings on 3/23/22.
//

#ifndef CPP__SCAVTRAP_HPP
#define CPP__SCAVTRAP_HPP

#include "ClapTrap.hpp"

// Derived class -> The derived class inherits the members of the base class, on top of which it can add its own members.
class ScavTrap : public ClapTrap {
private:
    ScavTrap(void);
public:
    ScavTrap(std::string Name);
    ScavTrap(const ScavTrap &copy); // copy constructor
    ScavTrap &operator=(const ScavTrap &copy);
    ~ScavTrap(void); // destructor
    void guardGate();
    void attack(const std::string& target);
};


#endif //CPP__SCAVTRAP_HPP
