# include "Character.hpp"

Character::Character(std::string const & name)
{
    std::cout << "Character constructor" << std::endl;
    this->name = name;
    for (int i = 0; i < 4; i++)
        this->materia[i] = NULL;
};

Character::Character(Character const & copy)
{
    this->name = copy.name;
    for (int i = 0; i < 4 && copy.materia[i]; i++)
    {
        if (this->materia[i])
            delete this->materia[i];
        this->materia[i] = copy.materia[i]->clone();
    }
    std::cout << "Character copy constructor" << std::endl;
};

Character::~Character()
{
    for (int i = 0; i < 4; i++)
        if (this->materia[i])
            delete this->materia[i];
    std::cout << "Character destructor" << std::endl;
};

Character & Character::operator=(Character const & copy)
{
    if (this != &copy)
    {
        this->name = copy.name;
    for (int i = 0; i < 4 && copy.materia[i]; i++)
    {
        if (this->materia[i])
            delete this->materia[i];
        this->materia[i] = copy.materia[i]->clone();
    }
    }
    return *this;
};

std::string const & Character::getName() const
{
    return (this->name);
};

void Character::equip(AMateria* m)
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

void Character::unequip(int idx)
{
    if (idx >= 0 && idx < 4)
        this->materia[idx] = NULL;
};

void Character::use(int idx, ICharacter& target)
{
    if (idx >= 0 && idx < 4 && this->materia[idx])
        this->materia[idx]->use(target);
};
