#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void){
    std::cout << "SCAVTRAP" << std::endl;
    std::cout << "-----------------------" << std::endl;
    FragTrap Lisa("Lisa");
    FragTrap Nout("Nout");

    Lisa.attack("Nout");
    Nout.attack("Lisa");
    Lisa.beRepaired(10);
    Lisa.takeDamage(5);
    Lisa.takeDamage(5);
    Lisa.beRepaired(10);
    Lisa.highFivesGuys();

    return (0);
}
