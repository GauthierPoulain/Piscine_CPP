#include "ZombieEvent.hpp"
#include "Zombie.hpp"

void ZombieEvent::setZombieType(std::string type)
{
	p_type = type;
}

Zombie *ZombieEvent::newZombie(std::string name)
{
	Zombie *ret;

	ret = new Zombie;
	ret->setName(name);
	ret->setType(p_type);
	return (ret);
}
