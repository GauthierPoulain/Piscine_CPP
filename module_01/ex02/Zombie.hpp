#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie
{
private:
	std::string p_name;
	std::string p_type;

public:
	void advert(void);
	void setName(std::string name);
	void setType(std::string type);
};

#endif