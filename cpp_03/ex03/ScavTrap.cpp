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
void ScavTrap::guardGate()
{
    std::cout << "ScavTrap: "<< this->Name << ": now in Gate keeper mode" << std::endl;
};

std::string ScavTrap::get_name(void)
{
    return this->Name;
};

void ScavTrap::set_name(std::string name)
{
    this->Name = name;
}

void ScavTrap::stats(void)
{
    std::cout << "ScavTrap: " << this->get_name() << "\nENERGY: " << this->Energy_point << " points" << "\nHP: " << this->Hit_point << " points\n" << "Attack_damage: " << this->Attack_damage << " points" << std::endl;
}

void ScavTrap::S_attack(const std::string& target)
{
    if (this->Energy_point <= 0)
    {
        std::cout << "ScavTrap: " << this->get_name() << " does't have enough stamina" << std::endl;
        return ;
    }
    this->Energy_point--;
    std::cout << "ScavTrap: " << this->get_name() << " attacks " << target << ", causing " << this->Attack_damage << " points of damage!"<< std::endl;
};
void ScavTrap::takeDamage(unsigned int amount)
{
    if (amount >= this->Hit_point)
    {
        std::cout << "ScavTrap: " << this->get_name() << " has died."<< std::endl;
        return ;
    }
    this->Hit_point -= amount;
    std::cout << "ScavTrap: " << this->get_name() << " has been attacked, causing him to lose " << amount << " points of hp!"<< std::endl;
};
void ScavTrap::beRepaired(unsigned int amount)
{
    if (this->Energy_point == 0)
    {
        std::cout << "ScavTrap: " << this->get_name() << " does't have enough stamina" << std::endl;
        return ;
    }
    this->Energy_point--;
    this->Hit_point += amount;
    std::cout << "ScavTrap: " << this->get_name() << " restored " << amount << " points of hp!"<< std::endl;
};