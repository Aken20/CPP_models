#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
    Dog* j = new Dog();
    Dog j2;
    Animal* i = new Cat();

    j2 = *j;
    std::cout << i->getType() << std::endl;
    std::cout << j->getType() << std::endl;
    i->makeSound();
    j->makeSound();
    delete j;
    delete i;
    return 0;
}