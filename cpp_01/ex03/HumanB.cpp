#include "HumanB.hpp"

HumanB::HumanB(std::string name)
        : name(name)
{
    this->set_name(name);
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
    this->weapon = weapon;
};
Weapon &HumanB::getWeapon(void)
{
    return (this->weapon);
};
void HumanB::attack()
{
    if (this->weapon.getType().empty())
        std::cout << this->name << " doesn't have a weapon to attack" << std::endl;
    else
        std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
};