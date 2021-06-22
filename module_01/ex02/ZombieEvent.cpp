#include "ZombieEvent.hpp"
#include "Zombie.hpp"

ZombieEvent::ZombieEvent(void)
{
	p_type = "poti zombie";
}

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

std::string gen_random(const int len)
{
	std::string tmp_s;
	static const char alphanum[] =
		"0123456789"
		"ABCDEFGHIJKLMNOPQRSTUVWXYZ"
		"abcdefghijklmnopqrstuvwxyz";
	tmp_s.reserve(len);
	for (int i = 0; i < len; ++i)
		tmp_s += alphanum[rand() % (sizeof(alphanum) - 1)];
	return tmp_s;
}

Zombie *ZombieEvent::randomChump(void)
{
	Zombie *ret;
	std::string str;

	ret = new Zombie;
	ret->setName(gen_random(10));
	ret->setType(p_type);
	return (ret);
}