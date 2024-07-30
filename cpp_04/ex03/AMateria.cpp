# include "AMateria.hpp"

AMateria::AMateria(std::string const & type)
{
    // std::cout << "AMateria constructor" << std::endl;
    this->type = type;
};

AMateria::AMateria(AMateria const & copy)
{
    // std::cout << "AMateria copy constructor" << std::endl;
    *this = copy;
};

AMateria & AMateria::operator=(AMateria const & copy)
{
    // std::cout << "AMateria assignation operator" << std::endl;
    if (this != &copy)
        this->type = copy.type;
    return *this;
};

AMateria::~AMateria()
{
    // std::cout << "AMateria destructor" << std::endl;
};

std::string const & AMateria::getType() const
{
    return this->type;
};

void AMateria::use(ICharacter& target)
{
    std::cout << "* uses some materia on " << target.getName() << " *" << std::endl;
}