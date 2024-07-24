#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string Name):ScavTrap(Name), FragTrap(Name)
{
    this->set_name(Name);
    std::cout << "DiamondTrap: "<< this->_name << ": Default constructor called" << std::endl;
    this->_Hit_point = 100;
    this->_Energy_point = 50;
    this->_Attack_damage = 30;
};
DiamondTrap::DiamondTrap(DiamondTrap &copy):ScavTrap(copy), FragTrap(copy)
{
    this->_name = copy._name;
    std::cout << "DiamondTrap: "<< this->_name << ": Copy constructor called" << std::endl;
    this->_Hit_point = copy._Hit_point;
    this->_Energy_point = copy._Energy_point;
    this->_Attack_damage = copy._Attack_damage;
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
    FragTrap::set_name(name + "_clap_name");
    ScavTrap::set_name(name + "_clap_name");
};

void DiamondTrap::attack(const std::string& target)
{
    ScavTrap::attack(target);
};

void DiamondTrap::whoAmI(void)
{
    std::cout << "DiamondTrap: name is " << this->get_name() << std::endl;
    std::cout << "ClapTrap: name is " << FragTrap::get_name() << std::endl;
};
void DiamondTrap::takeDamage(unsigned int amount)
{
    if (amount >= this->_Hit_point)
    {
        std::cout << "DiamondTrap: " << this->get_name() << " has died."<< std::endl;
        return ;
    }
    this->_Hit_point -= amount;
    std::cout << "DiamondTrap: " << this->get_name() << " has been attacked, causing him to lose " << amount << " points of hp!"<< std::endl;
};
void DiamondTrap::beRepaired(unsigned int amount)
{
    if (this->_Energy_point == 0)
    {
        std::cout << "DiamondTrap: " << this->get_name() << " doesn't have enough stamina" << std::endl;
        return ;
    }
    this->_Energy_point--;
    this->_Hit_point += amount;
    std::cout << "DiamondTrap: " << this->get_name() << " restored " << amount << " points of hp!"<< std::endl;
};