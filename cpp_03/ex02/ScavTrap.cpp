#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string Name):ClapTrap(Name)
{
    this->Name = Name;
    std::cout << "ScavTrap: "<< this->Name << ": Default constructor called" << std::endl;
    this->Hit_point = 100;
    this->Energy_point = 50;
    this->Attack_damage = 20;
};
ScavTrap::ScavTrap(ScavTrap &copy):ClapTrap(copy)
{
    this->Name = copy.Name;
    std::cout << "ScavTrap: "<< this->Name << ": Copy constructor called" << std::endl;
    this->Hit_point = copy.Hit_point;
    this->Energy_point = copy.Energy_point;
    this->Attack_damage = copy.Attack_damage;
};

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap: "<< this->Name << ": Destructor called" << std::endl;
};

ScavTrap &ScavTrap::operator=(const ScavTrap &copy)
{
    if (this == &copy)
        return *this;
    this->Name = copy.Name;
    this->Hit_point = copy.Hit_point;
    this->Energy_point = copy.Energy_point;
    this->Attack_damage = copy.Attack_damage;
    return *this;
};

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap: "<< this->Name << ": now in Gate keeper mode" << std::endl;
};

void ScavTrap::attack(const std::string& target)
{
    if (this->Energy_point <= 0)
    {
        std::cout << "ScavTrap: " << this->get_name() << " doesn't have enough stamina" << std::endl;
        return ;
    }
    this->Energy_point--;
    std::cout << "ScavTrap: " << this->get_name() << " attacks " << target << ", causing " << this->Attack_damage << " points of damage!"<< std::endl;
};