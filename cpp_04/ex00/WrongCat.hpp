#ifndef _WRONG_Cat_H_
# define _WRONG_Cat_H_

#include "WrongAnimal.hpp"
# include <iostream>

class WrongCat : public WrongAnimal
{
    public:
        WrongCat(void);
        WrongCat(WrongCat &copy);
        ~WrongCat();
        WrongCat& operator=(const WrongCat &copy);
        void makeSound(void) const;
};


#endif