#include "Zombie.hpp"

Zombie::Zombie()
{
    this->name = "zombie";
};
Zombie::~Zombie()
{
    std::cout << this->name << ": has died" << std::endl;
};
std::string Zombie::get_name(void)
{
    return (this->name);
};
void Zombie::set_name(std::string name)
{
    this->name = name;
};
void Zombie::announce(void)
{
    std::cout << this->get_name() << ": BraiiiiiiinnnzzzZ..." << std::endl;
};