#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name);

int main(void)
{
	Zombie *horde;

	horde = zombieHorde(10, "roger");
	horde[5].setName("MONSIEUR GAPOULAI");
	for (int i = 0; i < 10; i++)
		horde[i].announce();
	delete[] horde;
	return 0;
}
