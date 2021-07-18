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
		delete j; //should not create a leak
		delete i;
	}

	return 0;
}
