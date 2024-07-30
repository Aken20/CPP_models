#include "Cat.hpp"

Cat::Cat(void): Animal("Cat")
{
    this->type = "Cat";
    this->brain = new Brain();
    std::cout << "Cat: Default constructor called" << std::endl;
};
Cat::Cat(Cat &copy): Animal(copy)
{
    this->type = copy.type;
    this->brain = new Brain(*copy.brain);
    std::cout << "Cat: Copy constructor called" << std::endl;
};

Cat::~Cat()
{
    delete this->brain;
    std::cout << "Cat: Destructor called" << std::endl;
};
void Cat::makeSound(void) const
{
    std::cout << "Meow Meow" << std::endl;
};

Cat &Cat::operator=(const Cat &copy)
{
    if (this == &copy)
        return *this;
    delete this->brain;
    this->brain = new Brain(*copy.brain);
    this->type = copy.type;
    return *this;
};
