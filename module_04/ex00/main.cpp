#include <iostream>
#include "./Animal.hpp"
#include "./Dog.hpp"
#include "./Cat.hpp"
#include "./WrongAnimal.hpp"
#include "./WrongCat.hpp"

int main()
{
	{
		const Animal *meta = new Animal();
		const Animal *i = new Cat();
		const Animal *j = new Dog();

		std::cout << i->getType() << std::endl;
		std::cout << j->getType() << std::endl;
		i->makeSound();
		j->makeSound();
		meta->makeSound();

		delete meta;
		delete j;
		delete i;
	}
	{
		const WrongAnimal *meta = new WrongAnimal();
		const WrongAnimal *i = new WrongCat();

		std::cout << i->getType() << std::endl;
		i->makeSound();
		meta->makeSound();

		delete meta;
		delete i;
	}
	return 0;
}
