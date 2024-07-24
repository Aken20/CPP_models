#ifndef _FRAG_TRAP_H_
# define _FRAG_TRAP_H_

# include <iostream>
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    public:
        FragTrap(std::string Name);
        FragTrap(FragTrap &copy);
        virtual ~FragTrap();
        FragTrap& operator=(const FragTrap &copy);
        virtual void attack(const std::string& target);
        void highFivesGuys(void);
};

#endif