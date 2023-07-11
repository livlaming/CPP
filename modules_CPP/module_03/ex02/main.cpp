#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void){
    std::cout << "SCAVTRAP" << std::endl;
    std::cout << "-----------------------" << std::endl;
    FragTrap Dog("Dog");
    FragTrap Dinosaur("Dinosaur");

    Dog.attack("Dinosaur");
    Dinosaur.attack("Dog");
    Dog.beRepaired(10);
    Dog.takeDamage(5);
    Dog.takeDamage(500);
    Dog.beRepaired(10);
    Dog.highFivesGuys();
    std::cout << "-----------------------\n" << std::endl;
    return (0);
}
