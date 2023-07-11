#include "ClapTrap.hpp"

int main(void){
    ClapTrap Jojo("Jojo");
    ClapTrap Jeje("Jeje");

    Jojo.attack("Jeje");
    Jeje.attack("Jojo");
    Jojo.beRepaired(10);
    Jojo.takeDamage(5);
    Jojo.takeDamage(5);
    Jojo.beRepaired(10);

    return (0);
}
