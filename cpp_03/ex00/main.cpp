#include "ClapTrap.hpp"

int main( void ){
    ClapTrap Bob("Bob");
    ClapTrap mark("mark");

    Bob.attack("mark");
    mark.takeDamage(0);
    return 0;
}