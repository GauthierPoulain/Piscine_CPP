#include "Karen.hpp"
#include <iostream>

int main(int argc, char *argv[])
{
	Karen karen;
	std::string filter;
	bool in_types;

	if (argc < 2)
		filter = "DEBUG";
	else
		filter = argv[1];

	in_types = false;
	std::string type[] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"};
	for (size_t i = 0; i < 4; i++)
	{
		if (filter == type[i])
			in_types = true;
	}
	if (!in_types)
	{
		std::cerr << "[ Probably complaining about insignificant problems ]" << std::endl
				  << std::endl;
		return 0;
	}

	karen.complain(filter, "DEBUG");
	karen.complain(filter, "INFO");
	karen.complain(filter, "WARNING");
	karen.complain(filter, "ERROR");
	return 0;
}
