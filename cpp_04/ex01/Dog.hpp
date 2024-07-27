#ifndef _DOG_H_
# define _DOG_H_

# include "Animal.hpp"
# include <iostream>

class Dog : public Animal
{
    private:
        Brain *brain;

    public:
        Dog(void);
        Dog(Dog &copy);
        ~Dog();
        Dog& operator=(const Dog &copy);
        void makeSound(void) const;
};


#endif