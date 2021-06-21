#include "Pony.hpp"

void Pony::Create(std::string name, std::string color, bool fly)
{
	p_name = name;
	p_color = color;
	p_fly = fly;
}

void Pony::setColor(std::string color)
{
	p_color = color;
}

void Pony::enableFly(void)
{
	p_fly = true;
}

void Pony::disableFly(void)
{
	p_fly = false;
}

void Pony::display(void)
{
	std::cout << "name: " << p_name << std::endl;
	std::cout << "	color: " << p_color << std::endl;
	std::cout << "	fly: " << (p_fly ? "True" : "False") << std::endl;
}