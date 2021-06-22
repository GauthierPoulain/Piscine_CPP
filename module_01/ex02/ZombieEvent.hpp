#ifndef ZOMBIEEVENT_HPP
#define ZOMBIEEVENT_HPP

#include <string>
#include "Zombie.hpp"

class ZombieEvent
{
private:
	std::string p_type;

public:
	ZombieEvent(void);
	void setZombieType(std::string type);
	Zombie *newZombie(std::string name);
};

#endif
