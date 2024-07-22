#ifndef _SCAV_TRAP_H_
# define _SCAV_TRAP_H_

# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap : ClapTrap
{
    private:
        void guardGate();

    protected:
        std::string Name;
        unsigned int Hit_point;
        unsigned int Energy_point;
        unsigned int Attack_damage;

    public:
        ScavTrap(std::string Name);
        ScavTrap(ScavTrap &copy);
        ~ScavTrap();
        std::string get_name(void);
        void set_name(std::string name);
        void stats(void);
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};

#endif