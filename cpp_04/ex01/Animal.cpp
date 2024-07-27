#include "Animal.hpp"

Animal::Animal()
{
    this->type = "Animal";
    std::cout << "Animal: Default constructor called" << std::endl;
};

Animal::Animal(std::string type)
{
    this->type = type;
    std::cout << "Animal: Default constructor called" << std::endl;
};
Animal::Animal(const Animal &copy)
{
    this->type = copy.type;
    std::cout << "Animal: Copy constructor called" << std::endl;
};

Animal::~Animal()
{
    std::cout << "Animal: Destructor called" << std::endl;
};

Animal &Animal::operator=(const Animal &copy)
{
    if (this == &copy)
        return *this;
    this->type = copy.type;
    return *this;
};

std::string Animal::getType(void) const
{
    return this->type;
};

void Animal::set_type(std::string type)
{
    this->type = type;
};

void Animal::makeSound(void) const
{
    std::cout << "Animal sound" << std::endl;
};