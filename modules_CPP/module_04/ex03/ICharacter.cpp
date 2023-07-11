#include "ICharacter.hpp"

const std::string &ICharacter::getName() const {

}

void ICharacter::equip(int *m) {

}

void ICharacter::unequip(int idx) {}

void ICharacter::use(int idx, ICharacter &target) {
    std::cout << "Ice: *" <<  "shoots and ice bolt at " << name << "*" std::endl;
    std::cout << "Cure: heals " << name << "'s wounds *" << std::endl;
//    Ice: "* shoots an ice bolt at <name> *"
//    • Cure: "* heals <name>’s wounds *"
}

ICharacter::~ICharacter() {}