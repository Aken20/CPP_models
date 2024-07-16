#include "Zombie.hpp"

Zombie* newZombie( std::string name )
{
    Zombie *t;

    t = new Zombie;
    t->set_name(name);
    return (t);
};