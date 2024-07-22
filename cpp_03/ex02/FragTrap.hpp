#ifndef _FRAG_TRAP_H_
# define _FRAG_TRAP_H_

# include <iostream>
# include "ClapTrap.hpp"

class FragTrap : ClapTrap
{
    private:
        void highFivesGuys(void);

    protected:
        std::string Name;
        unsigned int Hit_point;
        unsigned int Energy_point;
        unsigned int Attack_damage;

    public:
        FragTrap(std::string Name);
        FragTrap(FragTrap &copy);
        ~FragTrap();
        std::string get_name(void);
        void set_name(std::string name);
        void stats(void);
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};

#endif