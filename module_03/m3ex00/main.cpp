#include "ClapTrap.hpp"

int main(void){
    ClapTrap Jojo("Jojo");
    ClapTrap Jeje("Jeje");
//    ClapTrap Jeje(Jojo); //copy constructor kan een keer en maakt een Class aan waar hij een andere class in kopieerd.
//    Jojo = Jeje; //assignation kopieerd Class in bestaande class

    Jojo.attack("Jeje");
    Jeje.attack("Jojo");
    Jojo.beRepaired(10);
    Jojo.takeDamage(5);
    Jojo.takeDamage(5);
    Jojo.beRepaired(10);

    return (0);
}//
// Created by Lisa Vlamings on 5/18/22.
//
