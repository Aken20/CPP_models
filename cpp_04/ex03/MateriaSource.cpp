# include "MateriaSource.hpp"

MateriaSource::MateriaSource(): IMateriaSource()
{
    for (int i = 0; i < 4; i++)
        this->_materia[i] = NULL;
};

MateriaSource::MateriaSource(MateriaSource const & copy)
{
    for (int i = 0; i < 4; i++)
        this->_materia[i] = copy._materia[i];
};

MateriaSource & MateriaSource::operator=(MateriaSource const & copy)
{
    for (int i = 0; i < 4; i++)
        this->_materia[i] = copy._materia[i];
    return (*this);
};

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4; i++)
        delete this->_materia[i];
};

void MateriaSource::learnMateria(AMateria* m)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->_materia[i] == NULL)
        {
            this->_materia[i] = m;
            break;
        }
    }
};

AMateria* MateriaSource::createMateria(std::string const & type)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->_materia[i] != NULL && this->_materia[i]->getType() == type)
            return (this->_materia[i]->clone());
    }
    return (NULL);
};