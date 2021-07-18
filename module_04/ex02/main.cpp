#include <iostream>
#include "./Animal.hpp"
#include "./Dog.hpp"
#include "./Cat.hpp"

int main()
{
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
