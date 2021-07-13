#include "Karen.hpp"
#include <iostream>

typedef void (Karen::*pfunc)(void);

void Karen::debug(void)
{
	std::cout << "I love to get extra baconfor my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void Karen::info(void)
{
	std::cout << "I cannot believe adding extrabacon cost more money. You don’t put enough! If you did I would not have to askfor it!" << std::endl;
}

void Karen::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve beencoming here for years and you just started working here last month." << std::endl;
}

void Karen::error(void)
{
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

void Karen::complain(std::string level)
{
	typedef void (Karen::*p_pfunc)(void);

	std::string type[] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"};
	p_pfunc func[] = {
		&Karen::debug,
		&Karen::info,
		&Karen::warning,
		&Karen::error};

	for (size_t i = 0; i < 4; i++)
	{
		if (level == type[i])
		{
			(this->*func[i])();
			return;
		}
	}
	std::cerr << "function: " << level << " not found" << std::endl;
}
