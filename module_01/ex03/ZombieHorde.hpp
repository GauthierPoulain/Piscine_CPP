#ifndef ZOMBIEHORDE_HPP
#define ZOMBIEHORDE_HPP

#include "Zombie.hpp"

class ZombieHorde
{
private:
	Zombie *p_horde;
	size_t p_size;

public:
	ZombieHorde(size_t size);
};

#endif