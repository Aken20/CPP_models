#ifndef _WEAPON_HPP
# define _WEAPON_HPP

#include <iostream>

class Weapon
{
    private:
        std::string type;
    public:
        Weapon(std::string type);
        ~Weapon();
        const std::string getType();
        void setType(std::string type);
};

#endif