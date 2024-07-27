#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
    Animal* meta = new Animal();
    Animal* j = new Dog();
    Animal* i = new Cat();
    WrongAnimal* wrong_meta = new WrongAnimal();
    WrongAnimal* wrong_i = new WrongCat();

    std::cout << i->getType() << std::endl;
    std::cout << j->getType() << std::endl;
    std::cout << wrong_i->getType() << std::endl;
    std::cout << meta->getType() << std::endl;
    std::cout << wrong_meta->getType() << std::endl;
    i->makeSound();
    j->makeSound();
    wrong_i->makeSound();
    meta->makeSound();
    wrong_meta->makeSound();
    delete meta;
    delete j;
    delete i;
    delete wrong_meta;
    delete wrong_i;
    return 0;
}