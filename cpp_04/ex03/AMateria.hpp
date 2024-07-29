#ifndef AMATERIA_HPP
#define AMATERIA_HPP 
#include "ICharacter.hpp"

class AMateria
{
    protected:
        std::string type;

    public:
        AMateria(std::string const & type);
        AMateria(AMateria const & copy);
        AMateria & operator=(AMateria const & copy);
        virtual ~AMateria();
        std::string const & getType() const; //Returns the materia type
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
};

#endif