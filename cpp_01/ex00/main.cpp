#include "Zombie.hpp"

int main(void) 
{
    Zombie *test;
    std::string name;

    name = "Bob";
    test = newZombie(name);
    test->announce();
    delete test;
    randomChump("kai");
    return 0;
}