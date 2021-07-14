#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap() : p_hitPoints(10), p_energyPoints(10), p_attackDamages(0)
{
	p_name = "default";
	std::cout << "ClapTrap " << p_name << " has spawn from default constructor" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : p_hitPoints(10), p_energyPoints(10), p_attackDamages(0)
{
	p_name = name;
	std::cout << "ClapTrap " << p_name << " has spawn from named constructor" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &src)
{
	std::cout << "ClapTrap " << p_name << " has spawn from copy" << std::endl;
	*this = src;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &src)
{
	p_name = src.p_name;
	std::cout << "ClapTrap " << p_name << " has spawn from assignation" << std::endl;
	return *this;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << p_name << " destructed" << std::endl;
}

void ClapTrap::attack(std::string const &target)
{
	p_energyPoints--;
	std::cout << "ClapTrap " << p_name << " attacks " << target << ", causing " << p_attackDamages << " points of damage !" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	p_energyPoints += amount;
	p_hitPoints += amount;
	std::cout << "ClapTrap " << p_name << " be repared with " << amount << " points, has now " << p_hitPoints << " HP" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	p_hitPoints -= amount;
	std::cout << "ClapTrap " << p_name << " has taken " << amount << " points of damage, has now " << p_hitPoints << " HP" << std::endl;
}

void ClapTrap::print_status()
{
	std::cout << "name = " << p_name << ", hit points = " << p_hitPoints << ", energy points = " << p_energyPoints << ", attack damages = " << p_attackDamages << std::endl;
}
