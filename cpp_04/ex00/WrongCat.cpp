#include "WrongCat.hpp"

WrongCat::WrongCat(void): WrongAnimal("WrongCat")
{
    this->type = "WrongCat";
    std::cout << "WrongCat: Default constructor called" << std::endl;
};
WrongCat::WrongCat(WrongCat &copy): WrongAnimal(copy)
{
    this->type = copy.type;
    std::cout << "WrongCat: Copy constructor called" << std::endl;
};

WrongCat::~WrongCat()
{
    std::cout << "WrongCat: Destructor called" << std::endl;
};
void WrongCat::makeSound(void) const
{
    std::cout << "Wrong cat sound" << std::endl;
};

WrongCat &WrongCat::operator=(const WrongCat &copy)
{
    if (this == &copy)
        return *this;
    this->type = copy.type;
    return *this;
};
