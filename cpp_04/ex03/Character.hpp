#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "ICharacter.hpp"

class Character : public ICharacter
{
    private:
        std::string name;
        AMateria *materia[4];

    public:
        Character(std::string const & name);
        Character(Character const & copy);
        Character & operator=(Character const & copy);
        ~Character();
        std::string const & getName() const;
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);
};

#endif