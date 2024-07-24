#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main( void ){
    FragTrap Bob("Bob");
    ScavTrap akira("akira");

    Bob.attack("akira");
    akira.takeDamage(0);
    Bob.beRepaired(1);
    akira.beRepaired(1);
    akira.guardGate();
    Bob.highFivesGuys();
    return 0;
}