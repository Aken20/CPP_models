#ifndef IMATERIASOURCE_HPP
#define IMATERIASOURCE_HPP

#include <iostream>
#include "Cure.hpp"
#include "Ice.hpp"
#include "AMateria.hpp"

class IMateriaSource
{
    public:
        IMateriaSource();
        IMateriaSource(IMateriaSource const & copy);
        IMateriaSource & operator=(IMateriaSource const & copy);
        virtual ~IMateriaSource();
        virtual void learnMateria(AMateria*) = 0;
        virtual AMateria* createMateria(std::string const & type) = 0;
};

#endif