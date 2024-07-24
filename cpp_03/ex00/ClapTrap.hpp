#ifndef _CLAP_TRAP_H_
# define _CLAP_TRAP_H_

# include <iostream>

class ClapTrap
{
    private:
        std::string Name;
        unsigned int Hit_point;
        unsigned int Energy_point;
        unsigned int Attack_damage;

    public:
        ClapTrap(std::string Name);
        ClapTrap(ClapTrap &copy);
        ~ClapTrap();
        ClapTrap& operator=(const ClapTrap &copy);
        std::string get_name(void);
        void set_name(std::string name);
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};


#endif