#ifndef _CLAP_TRAP_H_
# define _CLAP_TRAP_H_

# include <iostream>

class ClapTrap
{
    protected:
        std::string Name;
        unsigned int Hit_point;
        unsigned int Energy_point;
        unsigned int Attack_damage;

    public:
        ClapTrap(std::string Name);
        ClapTrap(ClapTrap &copy);
        virtual ~ClapTrap();
        ClapTrap& operator=(const ClapTrap &copy);
        virtual std::string get_name(void);
        virtual void set_name(std::string name);
        virtual void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};

#endif