#include "DiamondTrap.hpp"

int main( void ){
    DiamondTrap Bob("Bob");
    ScavTrap akira("akira");

    Bob.attack("akira");
    akira.takeDamage(0);
    Bob.whoAmI();
    Bob.beRepaired(1);
    akira.beRepaired(1);
    return 0;
}