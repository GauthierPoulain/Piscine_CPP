#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstring>
#include <limits.h>

void manageChar(double value)
{
	std::cout << "char: ";
	if (std::isnan(value) || value < CHAR_MIN || value > CHAR_MAX)
		std::cout << "impossible";
	else if (!isprint(static_cast<int>(value)))
		std::cout << "Non displayable";
	else
		std::cout << "'" << static_cast<char>(value) << "'";
	std::cout << std::endl;
}

void manageInt(double value)
{
	std::cout << "int: ";
	if (std::isnan(value) || value < INT_MIN || value > INT_MAX)
		std::cout << "impossible";
	else
		std::cout << static_cast<int>(value);
	std::cout << std::endl;
}

void manageFloat(double value)
{
	std::cout << "float: ";
	if (ceil(static_cast<float>(value)) == static_cast<float>(value))
		std::cout << std::setprecision(1) << std::fixed << static_cast<float>(value) << "f";
	else
		std::cout << static_cast<float>(value) << "f";
	std::cout << std::endl;
}

void manageDouble(double value)
{
	std::cout << "double: ";
	if (std::ceil(value) == value)
		std::cout << std::setprecision(1) << std::fixed << value << std::endl;
	else
	std::cout << value << std::endl;
	std::cout << std::endl;
}

int main(int argc, char *argv[])
{
	double value;

	if (argc != 2)
	{
		std::cerr << "1 argument expected" << std::endl;
		return (1);
	}
	else if (isprint(argv[1][0]) && !isdigit(argv[1][0]) && strlen(argv[1]) == 1)
		value = (int)argv[1][0];
	else
		value = atof(argv[1]);
	manageChar(value);
	manageInt(value);
	manageFloat(value);
	manageDouble(value);
	return (0);
}