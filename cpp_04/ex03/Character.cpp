# include "Character.hpp"

Character::Character(std::string const & name): ICharacter(name)
{
    this->name = name;
    std::cout << "Character constructor" << std::endl;
};

Character::Character(Character const & src)
{
    std::cout << "Character copy constructor" << std::endl;
};

Character::~Character()
{
    for (int i = 0; i < 4; i++)
        if (this->inventory[i])
            delete this->inventory[i];
    std::cout << "Character destructor" << std::endl;
};

Character & Character::operator=(Character const & src)
{
    std::cout << "Character assignation operator" << std::endl;
    if (this != &src)
        this->name = src.name;
    return *this;
};

Character::Character(std::string const & name)
{
    std::cout << "Character constructor" << std::endl;
    this->name = name;
    for (int i = 0; i < 4; i++)
        this->inventory[i] = NULL;
};