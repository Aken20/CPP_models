#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string Name)
{
    this->Name = Name;
    this->Energy_point = 10;
    this->Attack_damage = 0;
    this->Hit_point = 10;
};
ClapTrap::~ClapTrap()
{

};

std::string ClapTrap::get_name(void)
{
    return this->Name;
};

void ClapTrap::attack(const std::string& target)
{
    if (this->Energy_point == 0)
    {
        std::cout << "ClapTrap : " << this->get_name() << " does't have enough stamina" << std::endl;
        return ;
    }
    this->Energy_point--;
    std::cout << "ClapTrap : " << this->get_name() << " attacks " << target << ", causing " << this->Attack_damage << " points of damage!"<< std::endl;
};
void ClapTrap::takeDamage(unsigned int amount)
{
    if (amount >= this->Hit_point)
    {
        std::cout << "ClapTrap : " << this->get_name() << " has died."<< std::endl;
        return ;
    }
    this->Hit_point -= amount;
    std::cout << "ClapTrap : " << this->get_name() << "has been attacked, causing him to lose " << amount << " points of hp!"<< std::endl;
};
void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->Energy_point == 0)
    {
        std::cout << "ClapTrap : " << this->get_name() << " does't have enough stamina" << std::endl;
        return ;
    }
    this->Energy_point--;
    this->Hit_point += amount;
    std::cout << "ClapTrap : " << this->get_name() << "restored " << amount << " points of hp!"<< std::endl;
};