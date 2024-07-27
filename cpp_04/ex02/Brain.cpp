# include "Brain.hpp"

Brain::Brain()
{
    std::cout << "A Brain has been Created" << std::endl;
}

Brain::Brain(const Brain &copy)
{
    std::cout << "A Brain has been copyed" << std::endl;
    for (int i = 0; i < 100; i++)
        this->ideas[i] = copy.ideas[i];
}

Brain::~Brain()
{
    std::cout << "A Brain has been deleted" << std::endl;
}

Brain &Brain::operator=(const Brain &copy)
{
    std::cout << "A Brain has been copyed" << std::endl;
    if (this == &copy)
        return *this;
    for (int i = 0; i < 100; i++)
        this->ideas[i] = copy.ideas[i];
    return *this;
}