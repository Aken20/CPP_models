#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    int     i = 0;
    Zombie *a;

    a = new Zombie[N];
    while (i < N)
        a[i++].set_name(name);
    return (a);
}