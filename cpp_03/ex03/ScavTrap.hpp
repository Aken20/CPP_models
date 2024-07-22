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
        unsigned int S_Hit_point;
        unsigned int S_Energy_point;
        unsigned int S_Attack_damage;

    public:
        ScavTrap(std::string Name);
        ScavTrap(ScavTrap &copy);
        ~ScavTrap();
        std::string get_name(void);
        void set_name(std::string name);
        void stats(void);
        void S_attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};

#endif