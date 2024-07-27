#ifndef _WRONG_ANIMAL_H_
# define _WRONG_ANIMAL_H_

# include <iostream>

class WrongAnimal
{
    protected:
        std::string type;

    public:
        WrongAnimal();
        WrongAnimal(std::string Type);
        WrongAnimal(const WrongAnimal &copy);
        ~WrongAnimal();
        WrongAnimal& operator=(const WrongAnimal &copy);
        std::string getType(void) const;
        void set_type(std::string name);
        void makeSound(void) const;
};

#endif