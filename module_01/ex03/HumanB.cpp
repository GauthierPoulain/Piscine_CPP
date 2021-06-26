#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string name)
{
	p_name = name;
}

HumanB::~HumanB()
{
}

void HumanB::setWeapon(Weapon &weapon)
{
	p_weapon = &weapon;
}

void HumanB::attack()
{
	std::cout << p_name << " attacks with his " << p_weapon->getType() << std::endl;
}