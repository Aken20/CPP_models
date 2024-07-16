#include "Zombie.hpp"

int main(void) 
{
    Zombie *test;
    std::string name;
    int i = 0;
    int N = 9;

    name = "steve";
    test = zombieHorde(9, name);
    while (i < N)
        test[i++].announce();
    i = 0;
    delete[] test;
    return 0;
}