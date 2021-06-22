#include "Zombie.hpp"
#include "ZombieHorde.hpp"

int main(void)
{
	ZombieHorde *horde = new ZombieHorde(10);

	horde->announce();
	return 0;
}
