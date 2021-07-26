//TODO: check assignation and copy

#include "./Character.hpp"
#include "./Ice.hpp"
#include "./Cure.hpp"
#include "./MateriaSource.hpp"

int main(void)
{
	{
		IMateriaSource *src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());

		ICharacter *me = new Character("me");
		std::cout << "new character: " << me->getName() << std::endl;

		AMateria *tmp;
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);

		ICharacter *bob = new Character("bob");
		std::cout << "new character: " << bob->getName() << std::endl;

		me->use(0, *bob);
		me->unequip(0);
		me->use(1, *bob);
		me->unequip(1);
		tmp = src->createMateria("cure");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);

		me->use(2, *bob);
		me->unequip(2);
		me->use(2, *bob);

		delete bob;
		delete me;
		delete src;
	}
	if (false)
	{
		IMateriaSource *src = new MateriaSource();
		src->learnMateria(new Ice());

		Character *me = new Character("me");
		std::cout << "new character: " << me->getName() << std::endl;

		Character *test = new Character();
		test = me;

		test->equip(src->createMateria("ice"));
		std::cout << test->getName() << std::endl;
		std::cout << me->getName() << std::endl;
		me->use(0, *test);
		test->use(0, *me);

		delete me;
		delete src;
		delete test;
	}
	return 0;
}
