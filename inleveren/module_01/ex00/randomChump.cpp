//
// Created by Lisa Vlamings on 2/8/22.
//

#include "Zombie.hpp"

void randomChump( std::string name ){
    Zombie  randomChump;

    randomChump.setName(name);
    randomChump.announce();
}
