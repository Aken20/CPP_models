# include "AMateria.hpp"

AMateria::AMateria(std::string const & type)
{
    std::cout << "AMateria constructor" << std::endl;
    this->type = type;
};

AMateria::~AMateria()
{
    std::cout << "AMateria destructor" << std::endl;
};

std::string const & AMateria::getType() const
{
    return this->type;
};

void AMateria::use(ICharacter& target)
{
    std::cout << "* uses some materia on " << target.getName() << " *" << std::endl;
}