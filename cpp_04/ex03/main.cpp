#include "AMateria.hpp"
#include "Character.hpp"

int main()
{
    IMateriaSource* copy = new MateriaSource();
    copy->learnMateria(new Ice());
    copy->learnMateria(new Cure());
    ICharacter* me = new Character("me");
    AMateria* tmp;
    tmp = copy->createMateria("ice");
    me->equip(tmp);
    tmp = copy->createMateria("cure");
    me->equip(tmp);
    ICharacter* bob = new Character("bob");
    me->use(0, *bob);
    me->use(1, *bob);
    delete bob;
    delete me;
    delete copy;
    return 0;
}