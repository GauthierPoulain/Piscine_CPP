#include "Zombie.hpp"

Zombie *newZombie(std::string name);
void randomChump(std::string name);

int main(void)
{
	Zombie *roger;
	Zombie *christian;

	roger = newZombie("Roger");
	roger->announce();
	christian = newZombie("Christian");
	christian->announce();
	delete christian;
	roger->announce();
	delete roger;

	randomChump("pouet v1");
	randomChump("pouet v2");

	return 0;
}
