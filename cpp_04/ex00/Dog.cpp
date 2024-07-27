#include "Dog.hpp"

Dog::Dog(): Animal("Dog")
{
    this->type = "Dog";
    std::cout << "Dog: Default constructor called" << std::endl;
};
Dog::Dog(Dog &copy): Animal(copy)
{
    this->type = copy.type;
    std::cout << "Dog: Copy constructor called" << std::endl;
};

Dog::~Dog()
{
    std::cout << "Dog: Destructor called" << std::endl;
};

void Dog::makeSound(void) const
{
    std::cout << "Woof Woof" << std::endl;
};

Dog &Dog::operator=(const Dog &copy)
{
    if (this == &copy)
        return *this;
    this->type = copy.type;
    return *this;
};
