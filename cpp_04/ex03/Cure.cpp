# include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
    // std::cout << "Cure constructor" << std::endl;
};

Cure::Cure(Cure const & copy) : AMateria(copy)
{
    // std::cout << "Cure copy constructor" << std::endl;
};

Cure::~Cure()
{
    // std::cout << "Cure destructor" << std::endl;
};

Cure & Cure::operator=(Cure const & copy)
{
    // std::cout << "Cure assignation operator" << std::endl;
    if (this != &copy)
        this->type = copy.type;
    return *this;
};

AMateria* Cure::clone() const
{
    return new Cure(*this);
};

void Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
};