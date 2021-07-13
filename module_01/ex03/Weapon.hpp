#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>

class Weapon
{
private:
	std::string p_type;

public:
	Weapon(void);
	Weapon(std::string type);
	~Weapon(void);
	const std::string &getType(void);
	void setType(std::string type);
};

#endif