# include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
    std::cout << "Ice constructor" << std::endl;
};

Ice::Ice(Ice const & copy) : AMateria(copy)
{
    std::cout << "Ice copy constructor" << std::endl;
};

Ice::~Ice()
{
    std::cout << "Ice destructor" << std::endl;
};

Ice & Ice::operator=(Ice const & copy)
{
    std::cout << "Ice assignation operator" << std::endl;
    if (this != &copy)
        this->type = copy.type;
    return *this;
};

AMateria* Ice::clone() const
{
    return new Ice(*this);
};

void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
};
