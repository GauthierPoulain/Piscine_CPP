#ifndef PONY_HPP
#define PONY_HPP

#include <string>
#include <iostream>

class Pony
{

public:
	void Create(std::string name, std::string color, bool fly);
	void setColor(std::string color);
	void display(void);
	void enableFly(void);
	void disableFly(void);

private:
	std::string p_name;
	std::string p_color;
	bool p_fly;
};

#endif