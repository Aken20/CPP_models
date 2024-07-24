#include "DiamondTrap.hpp"

int main( void ){
    DiamondTrap yuki("yuki");
    FragTrap Bob("Bob");
    ScavTrap akira("akira");

    Bob.attack("akira");
    akira.takeDamage(0);
    yuki.attack("Bob");
    Bob.takeDamage(20);
    Bob.beRepaired(1);
    akira.beRepaired(1);
    akira.guardGate();
    Bob.highFivesGuys();
    yuki.whoAmI();
    return 0;
}