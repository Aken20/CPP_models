#include "Dog.hpp"

Dog::Dog(): Animal("Dog")
{
    this->type = "Dog";
    this->brain = new Brain();
    std::cout << "Dog: Default constructor called" << std::endl;
};
Dog::Dog(Dog &copy): Animal(copy)
{
    this->type = copy.type;
    this->brain = new Brain(*copy.brain);
    std::cout << "Dog: Copy constructor called" << std::endl;
};

Dog::~Dog()
{
    delete this->brain;
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
    delete this->brain;
    this->brain = new Brain(*copy.brain);
    this->type = copy.type;
    return *this;
};
