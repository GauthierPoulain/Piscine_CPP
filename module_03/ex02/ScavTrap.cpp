#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap " << p_name << " has spawn" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << p_name << " destructed" << std::endl;
}

void ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << p_name << " is now gate guardian" << std::endl;
}
