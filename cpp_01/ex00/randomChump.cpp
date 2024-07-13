#include "Zombie.hpp"

void randomChump( std::string name )
{
    Zombie a;

    a.set_name(name);
    a.announce();
};