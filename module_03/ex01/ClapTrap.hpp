#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>

class ClapTrap
{
protected:
	std::string p_name;
	int p_hitPoints;
	int p_energyPoints;
	unsigned int p_attackDamages;

public:
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap &);
	~ClapTrap();
	void attack(std::string const &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

#endif
