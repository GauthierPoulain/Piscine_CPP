#include "Zombie.hpp"

	Zombie *newZombie(std::string name)
{
	Zombie *res;

	res = new Zombie(name);
	return res;	
}