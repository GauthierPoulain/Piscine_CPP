#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap(std::string name)
{
	p_name = name;
	std::cout << "CL4P-TP " << p_name << " has spawn" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "CL4P-TP " << p_name << " destructed" << std::endl;
}

void ClapTrap::attack(std::string const &target)
{
	p_attackDamages += p_hitPoints;
	std::cout << "CL4P-TP " << p_name << " attacks " << target << ", causing " << p_hitPoints << " points of damage !" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	p_energyPoints += amount;
	std::cout << "CL4P-TP " << p_name << " be repared with " << amount << " points, has now " << p_energyPoints << " energy points" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	p_energyPoints -= amount;
	std::cout << "CL4P-TP " << p_name << " has taken " << amount << " points of damage, has now " << p_energyPoints << " energy points" << std::endl;
}
