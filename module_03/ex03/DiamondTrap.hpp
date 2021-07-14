#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include <string>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
private:
	std::string p_name;

public:
	DiamondTrap();
	DiamondTrap(std::string name);
	DiamondTrap(const DiamondTrap &);
	DiamondTrap &operator=(const DiamondTrap &);
	~DiamondTrap();
	void attack(std::string const &target);
	void whoAmI();
	using FragTrap::p_hitPoints;
	using FragTrap::p_attackDamages;
	using ScavTrap::p_energyPoints;
};

#endif