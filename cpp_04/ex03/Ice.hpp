#ifndef _ICE_HPP_
#define _ICE_HPP_

# include <iostream>
# include "AMateria.hpp"

class Ice : public AMateria
{
    public:
        Ice();
        Ice(Ice const & src);
        ~Ice();
        Ice & operator=(Ice const & src);
        AMateria* clone() const;
        void use(ICharacter& target);
};

#endif