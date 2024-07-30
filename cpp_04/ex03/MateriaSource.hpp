#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class AMateria;

class MateriaSource : public IMateriaSource
{
    private:
        AMateria* materia[4];

    public:
        MateriaSource();
        MateriaSource(MateriaSource const & copy);
        MateriaSource & operator=(MateriaSource const & copy);
        ~MateriaSource();
        void learnMateria(AMateria*);
        AMateria* createMateria(std::string const & type);
};

#endif