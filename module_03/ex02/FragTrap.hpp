#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include <string>

class FragTrap : public ClapTrap
{
public:
	FragTrap(std::string);
	~FragTrap();
	void highFivesGuys(void);
};

#endif
