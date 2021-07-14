#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap(std::string name) : p_hitPoints(100), p_energyPoints(100), p_attackDamages(30)
{
	p_name = name;
	std::cout << "ClapTrap " << p_name << " has spawn" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &src)
{
	*this = src;
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
	p_hitPoints+=amount;
	std::cout << "ClapTrap " << p_name << " be repared with " << amount << " points, has now " << p_hitPoints << " HP" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	p_hitPoints -=amount;
	std::cout << "ClapTrap " << p_name << " has taken " << amount << " points of damage, has now " << p_hitPoints << " HP" << std::endl;
}
