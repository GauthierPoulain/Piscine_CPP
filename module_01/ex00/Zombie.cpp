#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie()
{
	std::cout << "a new zombie is \"alive\"" << std::endl;
}

Zombie::Zombie(std::string name)
{
	p_name = name;
	std::cout << p_name << " is \"alive\"" << std::endl;
}

Zombie::~Zombie()
{
	this->announce();
	std::cout << p_name << " is dead" << std::endl;
}

void Zombie::setName(std::string name)
{
	p_name = name;
}

void Zombie::announce(void)
{
	std::cout << p_name << " BraiiiiiiinnnzzzZ..." << std::endl;
}
