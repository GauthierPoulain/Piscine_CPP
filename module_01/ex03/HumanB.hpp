#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <string>
#include "Weapon.hpp"

class HumanB
{
private:
	std::string p_name;
	Weapon *p_weapon;

public:
	HumanB(std::string name);
	~HumanB();
	void setWeapon(Weapon &weapon);
	void attack();
};

#endif