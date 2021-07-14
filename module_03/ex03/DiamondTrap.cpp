#include "DiamondTrap.hpp"
#include <iostream>

DiamondTrap::DiamondTrap() : ClapTrap("default_clap_name"), FragTrap("default"), ScavTrap("default")
{
	p_hitPoints = FragTrap::p_hitPoints;
	p_energyPoints = ScavTrap::p_energyPoints;
	p_attackDamages = FragTrap::p_attackDamages;
	std::cout << "DiamondTrap " << p_name << " has spawn from default constructor" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name), FragTrap(name + "_clap_name"), ScavTrap(name)
{
	p_hitPoints = FragTrap::p_hitPoints;
	p_energyPoints = ScavTrap::p_energyPoints;
	p_attackDamages = FragTrap::p_attackDamages;
	std::cout << ClapTrap::p_name << std::endl;
	std::cout << FragTrap::p_name << std::endl;
	std::cout << ScavTrap::p_name << std::endl;
	std::cout << "ScavTrap " << p_name << " has spawn from named constructor" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &src)
{
	std::cout << "DiamondTrap " << p_name << " has spawn from copy" << std::endl;
	*this = src;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &src)
{
	p_name = src.p_name;
	std::cout << "DiamondTrap " << p_name << " has spawn from assignation" << std::endl;
	return *this;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << p_name << " destructed" << std::endl;
}

void DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap = '" << p_name << "', ClapTrap = '" << ClapTrap::p_name << "'" << std::endl;
}