#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
    Animal* meta = new Animal();
    Dog* j = new Dog();
    Dog j2;
    Animal* i = new Cat();

    j2 = *j;
    std::cout << i->getType() << std::endl;
    std::cout << j->getType() << std::endl;
    std::cout << meta->getType() << std::endl;
    i->makeSound();
    j->makeSound();
    meta->makeSound();
    delete meta;
    delete j;
    delete i;
    return 0;
}