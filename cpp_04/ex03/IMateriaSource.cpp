# include "IMateriaSource.hpp"

IMateriaSource::IMateriaSource()
{
    std::cout << "IMateriaSource constructor" << std::endl;
};

IMateriaSource::IMateriaSource(IMateriaSource const & copy)
{
    std::cout << "IMateriaSource copy constructor" << std::endl;
};

IMateriaSource::~IMateriaSource()
{
    std::cout << "IMateriaSource destructor" << std::endl;
};

IMateriaSource & IMateriaSource::operator=(IMateriaSource const & copy)
{
    std::cout << "IMateriaSource assignation operator" << std::endl;
    // if (this != &copy)
    //     this->materia = copy.materia;
    return *this;
};
