#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie()
{
}

Zombie::Zombie(std::string name)
{
	p_name = name;
}

Zombie::~Zombie()
{
	this->announce();
}

void Zombie::setName(std::string name)
{
	p_name = name;
}

void Zombie::announce(void)
{
	std::cout << p_name << " est mort comme un turbo looser" << std::endl;
}
