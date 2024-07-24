#include "FragTrap.hpp"

FragTrap::FragTrap(std::string Name):ClapTrap(Name)
{
    this->Name = Name;
    std::cout << "FragTrap: "<< this->Name << ": Default constructor called" << std::endl;
    this->Hit_point = 100;
    this->Energy_point = 100;
    this->Attack_damage = 30;
};
FragTrap::FragTrap(FragTrap &copy):ClapTrap(copy)
{
    this->Name = copy.Name;
    std::cout << "FragTrap: "<< this->Name << ": Copy constructor called" << std::endl;
    this->Hit_point = copy.Hit_point;
    this->Energy_point = copy.Energy_point;
    this->Attack_damage = copy.Attack_damage;
};

FragTrap::~FragTrap()
{
    std::cout << "FragTrap: "<< this->Name << ": Destructor called" << std::endl;
};

FragTrap &FragTrap::operator=(const FragTrap &copy)
{
    if (this == &copy)
        return *this;
    this->Name = copy.Name;
    this->Hit_point = copy.Hit_point;
    this->Energy_point = copy.Energy_point;
    this->Attack_damage = copy.Attack_damage;
    return *this;
};

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap: "<< this->Name << ": positive high fives request" << std::endl;
};

void FragTrap::attack(const std::string& target)
{
    if (this->Energy_point <= 0)
    {
        std::cout << "FragTrap: " << this->get_name() << " doesn't have enough stamina" << std::endl;
        return ;
    }
    this->Energy_point--;
    std::cout << "FragTrap: " << this->get_name() << " attacks " << target << ", causing " << this->Attack_damage << " points of damage!"<< std::endl;
};