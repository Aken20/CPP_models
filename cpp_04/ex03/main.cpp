#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"

int main()
{
    std::cout << "1 --------------" << std::endl;
    IMateriaSource* copy = new MateriaSource();
    copy->learnMateria(new Ice());
    copy->learnMateria(new Cure());
    std::cout << "2 --------------" << std::endl;
    Character* me = new Character("me");
    AMateria* tmp;
    tmp = copy->createMateria("ice");
    me->equip(tmp);
    std::cout << "3 --------------" << std::endl;
    tmp = copy->createMateria("cure");
    me->equip(tmp);
    Character* bob = new Character("bob");
    me->use(0, *bob);
    me->use(1, *bob);
    me->use(2, *bob);
    std::cout << "4 --------------" << std::endl;
    *bob = *me;
    std::cout << "5 --------------" << std::endl;
    bob->use(0, *me);
    bob->use(1, *me);
    bob->use(2, *me);
    std::cout << "6 --------------" << std::endl;
    delete bob;
    delete me;
    delete copy;
    return 0;
}