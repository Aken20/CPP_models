#ifndef _ANIMAL_H_
# define _ANIMAL_H_

# include <iostream>
# include "Brain.hpp"

class Animal
{
    protected:
        std::string type;

    public:
        Animal();
        Animal(std::string Type);
        Animal(const Animal &copy);
        virtual ~Animal();
        Animal& operator=(const Animal &copy);
        std::string getType(void) const;
        void set_type(std::string name);
        virtual void makeSound(void) const = 0;
};


#endif