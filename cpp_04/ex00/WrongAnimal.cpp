#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    this->type = "WrongAnimal";
    std::cout << "WrongAnimal: Default constructor called" << std::endl;
};

WrongAnimal::WrongAnimal(std::string type)
{
    this->type = type;
    std::cout << "WrongAnimal: Default constructor called" << std::endl;
};
WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
    this->type = copy.type;
    std::cout << "WrongAnimal: Copy constructor called" << std::endl;
};

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal: Destructor called" << std::endl;
};

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &copy)
{
    if (this == &copy)
        return *this;
    this->type = copy.type;
    return *this;
};

std::string WrongAnimal::getType(void) const
{
    return this->type;
};

void WrongAnimal::set_type(std::string type)
{
    this->type = type;
};

void WrongAnimal::makeSound(void) const
{
    std::cout << "WrongAnimal sound" << std::endl;
};