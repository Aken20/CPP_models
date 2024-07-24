#ifndef _FRAG_TRAP_H_
# define _FRAG_TRAP_H_

# include <iostream>
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    public:
        FragTrap(std::string Name);
        FragTrap(FragTrap &copy);
        ~FragTrap();
        FragTrap& operator=(const FragTrap &copy);
        void attack(const std::string& target);
        void highFivesGuys(void);
};

#endif