#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
}

ScavTrap::~ScavTrap()
{
}

void ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << p_name << " is now gate guardian" << std::endl;
}
