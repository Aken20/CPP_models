# include "ICharacter.hpp"

ICharacter::ICharacter()
{
    std::cout << "ICharacter constructor" << std::endl;
};

ICharacter::ICharacter(ICharacter const & copy)
{
    std::cout << "ICharacter copy constructor" << std::endl;
};

ICharacter::~ICharacter()
{
    std::cout << "ICharacter destructor" << std::endl;
};

ICharacter & ICharacter::operator=(ICharacter const & copy)
{
    std::cout << "ICharacter assignation operator" << std::endl;
    if (this != &copy)
        this->name = copy.name;
    return *this;
};
