#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap() : ClapTrap()
{
	p_hitPoints = 100;
	p_energyPoints = 50;
	p_attackDamages = 20;
	std::cout << "ScavTrap " << p_name << " has spawn from default constructor" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	p_hitPoints = 100;
	p_energyPoints = 50;
	p_attackDamages = 20;
	std::cout << "ScavTrap " << p_name << " has spawn from named constructor" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &src)
{
	std::cout << "ScavTrap " << p_name << " has spawn from copy" << std::endl;
	*this = src;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &src)
{
	p_name = src.p_name;
	std::cout << "ScavTrap " << p_name << " has spawn from assignation" << std::endl;
	return *this;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << p_name << " destructed" << std::endl;
}

void ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << p_name << " is now gate guardian" << std::endl;
}

void ScavTrap::attack(std::string const &target)
{
	p_energyPoints--;
	std::cout << "ScavTrap " << p_name << " attacks " << target << ", causing " << p_attackDamages << " points of damage !" << std::endl;
}