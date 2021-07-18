#include <iostream>
#include "./Animal.hpp"
#include "./Dog.hpp"
#include "./Cat.hpp"

int main()
{
	{
		size_t nb = 10;
		Animal *list[nb];
		for (size_t i = 0; i < nb / 2; i++)
			list[i] = new Dog();
		for (size_t i = nb / 2; i < nb; i++)
			list[i] = new Cat();
		for (size_t i = 0; i < nb; i++)
			delete list[i];
	}
	{
		const Animal *j = new Dog();
		const Animal *i = new Cat();

		delete j;
		delete i;
	}
	{
		Cat *homie = new Cat();
		homie->setIdea(3, "I'm a cat!");
		for (int i = 0; i < 10; i++)
			std::cout << homie->getIdea(i) << std::endl;
		delete homie;
		Dog *doge = new Dog();
		doge->setIdea(3, "I'm a dog!");
		for (int i = 0; i < 10; i++)
			std::cout << doge->getIdea(i) << std::endl;
		delete doge;

	}
	return 0;
}
