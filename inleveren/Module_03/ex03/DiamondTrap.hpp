//
// Created by Lisa Vlamings on 4/6/22.
//

#ifndef CPP__DIAMONDTRAP_HPP
#define CPP__DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public Fragtrap {
private:
    std::string _Name;
    DiamondTrap(void);
public:
    DiamondTrap(std::string Name);
    ~DiamondTrap(void); // destructor
    DiamondTrap(const DiamondTrap &copy); // copy constructor
    DiamondTrap &operator=(const DiamondTrap &copy); // copy assignment operator

//    ClapTrap::name(parameter of the constructor + "_clap_name" suffix)
//    •Hit points (FragTrap)
//    •Energy points (ScavTrap)
//    •Attack damage (FragTrap)
//    •attack()(Scavtrap)

//    void whoAmI();
};


#endif //CPP__DIAMONDTRAP_HPP
