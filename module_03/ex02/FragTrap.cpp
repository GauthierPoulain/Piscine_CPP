#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "FragTrap " << p_name << " has spawn" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << p_name << " destructed" << std::endl;
}

void FragTrap::highFivesGuys()
{
	std::cout << "FragTrap " << p_name << " want to slap some hands" << std::endl;
}
