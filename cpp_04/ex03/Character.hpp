#ifndef _CHARACTER_HPP_
#define _CHARACTER_HPP_

#include <iostream>
#include "ICharacter.hpp"

class Character : public ICharacter
{
    private:
        std::string name;
        AMateria *materia[4];

    public:
        Character(std::string const & name);
        Character(Character const & src);
        operator=(Character const & src);
        ~Character();
        std::string const & getName() const;
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, Character& target);
};