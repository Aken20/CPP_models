#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
    this->set_name(name);
    this->weapon = NULL;
};
HumanB::~HumanB()
{

};
std::string HumanB::get_name(void)
{
    return this->name;
};
void HumanB::set_name(std::string name)
{
    this->name = name;
};
void HumanB::setWeapon(Weapon &weapon)
{
    this->weapon = &weapon;
};
void HumanB::attack()
{
    if (!this->weapon)
        std::cout << this->name << " doesn't have a weapon to attack" << std::endl;
    else
        std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
};