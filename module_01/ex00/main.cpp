#include "Pony.hpp"
#include "stdio.h"

void ponyOnTheStack(std::string name, std::string color, bool fly)
{
	Pony *pony;

	pony = new Pony;
	pony->Create(name, color, fly);
	pony->display();
	pony->enableFly();
	pony->display();

	delete pony;
}

void ponyOnTheHeap(std::string name, std::string color, bool fly)
{
	Pony pony;

	pony.Create(name, color, fly);
	pony.display();
	pony.setColor("Yellow");
	pony.display();
	pony.disableFly();
	pony.display();
}

int main(void)
{
	ponyOnTheStack("Gapoulai", "Green", false);
	std::cout << std::endl;
	ponyOnTheHeap("GogoLeDozo", "Blue", true);

	return (0);
}

// clang++ -Wall -Wextra -Werror -std=c++98 *.cpp && ./a.out