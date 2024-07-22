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
void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap: "<< this->Name << ": positive high fives request" << std::endl;
};

std::string FragTrap::get_name(void)
{
    return this->Name;
};

void FragTrap::set_name(std::string name)
{
    this->Name = name;
}

void FragTrap::stats(void)
{
    std::cout << "FragTrap: " << this->get_name() << "\nENERGY: " << this->Energy_point << " points" << "\nHP: " << this->Hit_point << " points\n" << "Attack_damage: " << this->Attack_damage << " points" << std::endl;
}

void FragTrap::F_attack(const std::string& target)
{
    if (this->Energy_point <= 0)
    {
        std::cout << "FragTrap: " << this->get_name() << " does't have enough stamina" << std::endl;
        return ;
    }
    this->Energy_point--;
    std::cout << "FragTrap: " << this->get_name() << " attacks " << target << ", causing " << this->Attack_damage << " points of damage!"<< std::endl;
};
void FragTrap::takeDamage(unsigned int amount)
{
    if (amount >= this->Hit_point)
    {
        std::cout << "FragTrap: " << this->get_name() << " has died."<< std::endl;
        return ;
    }
    this->Hit_point -= amount;
    std::cout << "FragTrap: " << this->get_name() << " has been attacked, causing him to lose " << amount << " points of hp!"<< std::endl;
};
void FragTrap::beRepaired(unsigned int amount)
{
    if (this->Energy_point == 0)
    {
        std::cout << "FragTrap: " << this->get_name() << " does't have enough stamina" << std::endl;
        return ;
    }
    this->Energy_point--;
    this->Hit_point += amount;
    std::cout << "FragTrap: " << this->get_name() << " restored " << amount << " points of hp!"<< std::endl;
};