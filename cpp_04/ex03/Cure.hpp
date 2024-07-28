#ifndef _CURE_HPP_
#define _CURE_HPP_

# include <iostream>
# include "AMateria.hpp"

class Cure : public AMateria
{
    public:
        Cure();
        Cure(Cure const & src);
        ~Cure();
        Cure & operator=(Cure const & src);
        AMateria* clone() const;
        void use(ICharacter& target);
};

#endif