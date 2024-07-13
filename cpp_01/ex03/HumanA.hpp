#ifndef HUMAN_A_HPP
# define HUMAN_A_HPP

#include "Weapon.hpp"

class HumanA
{
    public:
        HumanA(std::string name, Weapon &weapon);
        ~HumanA();
        std::string get_name(void);
        void set_name(std::string name);
        void setWeapon(Weapon &weapon);
        Weapon &getWeapon(void);
        void attack();
    private:
        std::string name;
        Weapon &weapon;
};

#endif