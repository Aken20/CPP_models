#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string Name):ScavTrap(Name +  "_clap_name"), FragTrap(Name +  "_clap_name")
{
    this->_name = Name;
    std::cout << "DiamondTrap: "<< this->_name << ": Default constructor called" << std::endl;
    this->Hit_point = F_Hit_point;
    this->Energy_point = S_Energy_point;
    this->Attack_damage = S_Attack_damage;
};
DiamondTrap::DiamondTrap(DiamondTrap &copy):ScavTrap(copy), FragTrap(copy)
{
    this->_name = copy._name;
    std::cout << "DiamondTrap: "<< this->_name << ": Copy constructor called" << std::endl;
    this->Hit_point = copy.Hit_point;
    this->Energy_point = copy.Energy_point;
    this->Attack_damage = copy.Attack_damage;
};

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap: "<< this->_name << ": Destructor called" << std::endl;
};

std::string DiamondTrap::get_name(void)
{
    return this->_name;
};

void DiamondTrap::set_name(std::string name)
{
    this->_name = name;
}

void DiamondTrap::stats(void)
{
    std::cout << "DiamondTrap: " << this->get_name() << "\nENERGY: " << this->Energy_point << " points" << "\nHP: " << this->Hit_point << " points\n" << "Attack_damage: " << this->Attack_damage << " points" << std::endl;
}

void DiamondTrap::attack(const std::string& target)
{
    this->S_attack(target);
};

void DiamondTrap::whoAmI(void)
{
    std::cout << "DiamondTrap: name is " << this->get_name() << std::endl;
    std::cout << "DiamondTrap: name is " << this->Name << std::endl;
}
void DiamondTrap::takeDamage(unsigned int amount)
{
    if (amount >= this->Hit_point)
    {
        std::cout << "DiamondTrap: " << this->get_name() << " has died."<< std::endl;
        return ;
    }
    this->Hit_point -= amount;
    std::cout << "DiamondTrap: " << this->get_name() << " has been attacked, causing him to lose " << amount << " points of hp!"<< std::endl;
};
void DiamondTrap::beRepaired(unsigned int amount)
{
    if (this->Energy_point == 0)
    {
        std::cout << "DiamondTrap: " << this->get_name() << " does't have enough stamina" << std::endl;
        return ;
    }
    this->Energy_point--;
    this->Hit_point += amount;
    std::cout << "DiamondTrap: " << this->get_name() << " restored " << amount << " points of hp!"<< std::endl;
};