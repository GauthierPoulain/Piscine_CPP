#include "Zombie.hpp"

void Zombie::setName(std::string name)
{
	p_name = name;
}

void Zombie::setType(std::string type)
{
	p_type = type;
}

void Zombie::advert(void)
{
	std::cout << "<" << p_name << " (" << p_type << ")> Braiiiiiiinnnssss ..." << std::endl;
}