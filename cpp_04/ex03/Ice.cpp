# include "Ice.hpp"

Ice::Ice() : AMateria("Ice")
{
    std::cout << "Ice constructor" << std::endl;
};

Ice::Ice(Ice const & src) : AMateria(src)
{
    std::cout << "Ice copy constructor" << std::endl;
};

Ice::~Ice()
{
    std::cout << "Ice destructor" << std::endl;
};

Ice & Ice::operator=(Ice const & src)
{
    std::cout << "Ice assignation operator" << std::endl;
    if (this != &src)
        this->type = src.type;
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
