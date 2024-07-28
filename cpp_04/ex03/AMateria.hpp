#ifndef _AMATERIA_HPP_
#define _AMATERIA_HPP_

# include <iostream>

class AMateria
{
    protected:
        std::string type;

    public:
        AMateria(std::string const & type);
        virtual ~AMateria();
        std::string const & getType() const; //Returns the materia type
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
};

#endif