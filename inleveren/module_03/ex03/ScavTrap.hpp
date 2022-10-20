#ifndef CPP_SCAVTRAP_HPP
#define CPP_SCAVTRAP_HPP
#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {
protected:
    ScavTrap(void);
public:
    ScavTrap(std::string Name);
    ScavTrap(const ScavTrap &copy); // copy constructor
    ScavTrap &operator=(const ScavTrap &copy);
    ~ScavTrap(void); // destructor

    void guardGate();
    void attack(const std::string& target);
};


#endif //CPP_SCAVTRAP_HPP
