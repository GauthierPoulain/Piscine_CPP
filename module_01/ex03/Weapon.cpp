#include "Weapon.hpp"

Weapon::Weapon(void)
{
	p_type = "";
}

Weapon::Weapon(std::string type)
{
	p_type = type;
}

Weapon::~Weapon(void)
{
}

const std::string &Weapon::getType(void)
{
	return p_type;
}

void Weapon::setType(std::string type)
{
	p_type = type;
}