#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DaimondTrap.hpp"
int main(void){
    std::cout << "DaimondTRAP" << std::endl;
    std::cout << "-----------------------\n" << std::endl;
    DaimondTrap Child_1("Child_1");
    DaimondTrap Child_2("Child_2");
    std::cout << "\n-----------------------\n" << std::endl;
    Child_1.attack("Child_2");
    Child_2.attack("Child_1");
    Child_1.beRepaired(10);
    Child_1.takeDamage(5);
    Child_1.takeDamage(5);
    Child_1.beRepaired(10);
    Child_1.highFivesGuys();
    Child_2.whoAmI();
    std::cout << "\n-----------------------\n" << std::endl;

    return (0);
}
