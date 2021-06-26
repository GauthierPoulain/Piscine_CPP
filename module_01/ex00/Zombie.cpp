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
}

void Zombie::setName(std::string name)
{
	p_name = name;
}


void Zombie::announce(void)
{
	std::cout << "<" << p_name << "> BraiiiiiiinnnzzzZ.." << std::endl;
}
