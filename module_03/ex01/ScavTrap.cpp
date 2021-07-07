#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap(std::string name)
{
	p_name = name;
	std::cout << "SC4V-TP " << p_name << " has spawn" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "SC4V-TP " << p_name << " destructed" << std::endl;
}

void ScavTrap::attack(std::string const &target)
{
	p_attackDamages += p_hitPoints;
	std::cout << "SC4V-TP " << p_name << " attacks " << target << ", causing " << p_hitPoints << " points of damage !" << std::endl;
}

void ScavTrap::beRepaired(unsigned int amount)
{
	p_energyPoints += amount;
	std::cout << "SC4V-TP " << p_name << " be repared with " << amount << " points, has now " << p_energyPoints << " energy points" << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount)
{
	p_energyPoints -= amount;
	std::cout << "SC4V-TP " << p_name << " has taken " << amount << " points of damage, has now " << p_energyPoints << " energy points" << std::endl;
}
