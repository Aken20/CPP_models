#ifndef _DIAMOND_TRAP_H_
# define _DIAMOND_TRAP_H_

# include <iostream>
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public ScavTrap , public FragTrap
{
    private:
        std::string _name;
        unsigned int _Hit_point;
        unsigned int _Energy_point;
        unsigned int _Attack_damage;

    public:
        void whoAmI(void);
        DiamondTrap(std::string Name);
        DiamondTrap(DiamondTrap &copy);
        ~DiamondTrap();
        std::string get_name(void);
        void set_name(std::string name);
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};

#endif