#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string Name)
{
    this->Name = Name;
    std::cout << "ClapTrap: "<< this->Name << ": Default constructor called" << std::endl;
    this->Hit_point = 10;
    this->Energy_point = 10;
    this->Attack_damage = 0;
};
ClapTrap::ClapTrap(ClapTrap &copy)
{
    this->Name = copy.Name;
    std::cout << "ClapTrap: "<< this->Name << ": Copy constructor called" << std::endl;
    this->Hit_point = copy.Hit_point;
    this->Energy_point = copy.Energy_point;
    this->Attack_damage = copy.Attack_damage;
};

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap: "<< this->Name << ": Destructor called" << std::endl;
};

ClapTrap &ClapTrap::operator=(const ClapTrap &copy)
{
    if (this == &copy)
        return *this;
    this->Name = copy.Name;
    this->Hit_point = copy.Hit_point;
    this->Energy_point = copy.Energy_point;
    this->Attack_damage = copy.Attack_damage;
    return *this;
};

std::string ClapTrap::get_name(void)
{
    return this->Name;
};

void ClapTrap::attack(const std::string& target)
{
    if (this->Energy_point <= 0)
    {
        std::cout << "ClapTrap : " << this->get_name() << " doesn't have enough stamina" << std::endl;
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
    std::cout << "ClapTrap : " << this->get_name() << " has been attacked, causing him to lose " << amount << " points of hp!"<< std::endl;
};
void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->Energy_point == 0)
    {
        std::cout << "ClapTrap : " << this->get_name() << " doesn't have enough stamina" << std::endl;
        return ;
    }
    this->Energy_point--;
    this->Hit_point += amount;
    std::cout << "ClapTrap : " << this->get_name() << " restored " << amount << " points of hp!"<< std::endl;
};

