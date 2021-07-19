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
		me->use(1, *bob);

		delete bob;
		delete me;
		delete src;
	}
	if (false)
	{
		IMateriaSource *src = new MateriaSource();
		src->learnMateria(new Ice());

		ICharacter *me = new Character("me");
		std::cout << "new character: " << me->getName() << std::endl;

		delete me;
		delete src;
	}
	return 0;
}
