#ifndef HUMAN_B_HPP
# define HUMAN_B_HPP

#include "Weapon.hpp"

class HumanB
{
    private:
        std::string name;
        Weapon *weapon;
    
    public:
        HumanB(std::string name);
        ~HumanB();
        std::string get_name(void);
        void set_name(std::string name);
        void setWeapon(Weapon &weapon);
        void attack();
};

#endif