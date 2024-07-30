# include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    for (int i = 0; i < 4; i++)
        this->materia[i] = NULL;
};

MateriaSource::MateriaSource(MateriaSource const & copy)
{
    for (int i = 0; i < 4; i++)
        this->materia[i] = copy.materia[i];
};

MateriaSource & MateriaSource::operator=(MateriaSource const & copy)
{
    for (int i = 0; i < 4; i++)
        this->materia[i] = copy.materia[i];
    return (*this);
};

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4; i++)
        delete this->materia[i];
};

void MateriaSource::learnMateria(AMateria* m)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->materia[i] == NULL)
        {
            this->materia[i] = m;
            break;
        }
    }
};

AMateria* MateriaSource::createMateria(std::string const & type)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->materia[i] != NULL && this->materia[i]->getType() == type)
            return (this->materia[i]->clone());
    }
    return (NULL);
};