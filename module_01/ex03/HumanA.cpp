#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(std::string name, Weapon &weapon) : p_weapon(weapon)
{
	p_name = name;
	p_weapon = weapon;
}

HumanA::~HumanA()
{
}

void HumanA::setWeapon(Weapon &weapon)
{
	p_weapon = weapon;
}

void HumanA::attack()
{
	std::cout << p_name << " attacks with his " << p_weapon.getType() << std::endl;
}