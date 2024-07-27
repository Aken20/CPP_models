#ifndef _CAT_H_
# define _CAT_H_

#include "Animal.hpp"
# include <iostream>

class Cat : public Animal
{
    public:
        Cat(void);
        Cat(Cat &copy);
        ~Cat();
        Cat& operator=(const Cat &copy);
        void makeSound(void) const;
};


#endif