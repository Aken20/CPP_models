#include "ClapTrap.hpp"

int main( void ){
    ClapTrap Bob("Bob");
    ClapTrap akira("akira");

    Bob.attack("akira");
    akira.takeDamage(0);
    Bob.beRepaired(1);
    akira.beRepaired(1);
    return 0;
}