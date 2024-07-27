#ifndef _BRAIN_H_
# define _BRAIN_H_

#include <iostream>

class Brain
{
    public:
        std::string ideas[100];
        Brain();
        ~Brain();
        Brain(const Brain &copy);
        Brain& operator=(const Brain &copy);
};

#endif