#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <string>

class ClapTrap
{
private:
	std::string p_name;
	int p_hitPoints = 10;
	int p_energyPoints = 10;
	unsigned int p_attackDamages = 0;

public:
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap &);
	~ClapTrap();
	void attack(std::string const &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

#endif
