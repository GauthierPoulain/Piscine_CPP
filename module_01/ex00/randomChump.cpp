#include "Zombie.hpp"

void randomChump(std::string name)
{
	Zombie chump;

	chump.setName(name);
	chump.announce();
}