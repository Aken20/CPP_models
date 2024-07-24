#ifndef _SCAV_TRAP_H_
# define _SCAV_TRAP_H_

# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    public:
        ScavTrap(std::string Name);
        ScavTrap(ScavTrap &copy);
        ~ScavTrap();
        ScavTrap& operator=(const ScavTrap &copy);
        void attack(const std::string& target);
        void guardGate();
};

#endif