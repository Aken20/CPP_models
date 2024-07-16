#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon)
    : name(name), weapon(weapon)
{
    this->set_name(name);
    this->setWeapon(weapon);
};
HumanA::~HumanA()
{

};
std::string HumanA::get_name(void)
{
    return this->name;
};
void HumanA::set_name(std::string name)
{
    this->name = name;
};
void HumanA::setWeapon(Weapon &weapon)
{
    this->weapon = weapon;
};
Weapon &HumanA::getWeapon(void)
{
    return (this->weapon);
};
void HumanA::attack()
{
    if (!this->weapon)
        std::cout << this->name << " doesn't have a weapon to attack" << std::endl;
    else
        std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
};