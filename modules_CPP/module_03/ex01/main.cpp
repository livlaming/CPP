#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void){
    std::cout << "SCAVTRAP" << std::endl;
    std::cout << "-----------------------\n" << std::endl;
    ScavTrap Dog("Dog");
    ScavTrap Dinosaur("Dinosaur");

    Dog.attack("Dinosaur");
    Dinosaur.attack("Dog");
    Dog.beRepaired(0);
    Dog.takeDamage(5);
    Dog.takeDamage(5);
    Dog.takeDamage(91);
    Dog.beRepaired(10);
    Dinosaur.takeDamage(8);
    Dog.guardGate();
    std::cout << "\n-----------------------\n" << std::endl;
    return (0);
}
