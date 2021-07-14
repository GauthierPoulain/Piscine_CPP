#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap() : ClapTrap()
{
	p_hitPoints = 100;
	p_energyPoints = 100;
	p_attackDamages = 30;
	std::cout << "ScavTrap " << p_name << " has spawn from default constructor" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	p_hitPoints = 100;
	p_energyPoints = 100;
	p_attackDamages = 30;
	std::cout << "ScavTrap " << p_name << " has spawn from named constructor" << std::endl;
}

FragTrap::FragTrap(const FragTrap &src)
{
	std::cout << "FragTrap " << p_name << " has spawn from copy" << std::endl;
	*this = src;
}

FragTrap &FragTrap::operator=(const FragTrap &src)
{
	p_name = src.p_name;
	std::cout << "FragTrap " << p_name << " has spawn from assignation" << std::endl;
	return *this;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << p_name << " destructed" << std::endl;
}

void FragTrap::highFivesGuys()
{
	std::cout << "FragTrap " << p_name << " want to slap some hands" << std::endl;
}

void FragTrap::attack(std::string const &target)
{
	p_energyPoints--;
	std::cout << "FragTrap " << p_name << " attacks " << target << ", causing " << p_attackDamages << " points of damage !" << std::endl;
}