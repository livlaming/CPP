#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void){
    std::cout << "SCAVTRAP" << std::endl;
    std::cout << "-----------------------" << std::endl;
    ScavTrap Lisa("Lisa");
    ScavTrap Nout("Nout");

    Lisa.attack("Nout");
    Nout.attack("Lisa");
    Lisa.beRepaired(10);
    Lisa.takeDamage(5);
    Lisa.takeDamage(5);
    Lisa.beRepaired(10);
    Lisa.guardGate();

    return (0);
}
