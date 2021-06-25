#include "contact.hpp"

void contact::print_details(void)
{
	std::cout << "first name: " << p_firstName << std::endl;
	std::cout << "last name: " << p_lastName << std::endl;
	std::cout << "nickname: " << p_nickname << std::endl;
	std::cout << "phone number: " << p_phoneNumber << std::endl;
	std::cout << "darkest secret: " << p_darkestSecret << std::endl;
}

void contact::add(void)
{
	std::cout << "first name: ";
	std::getline(std::cin, p_firstName);
	if (std::cin.eof() == 1)
		exit(0);
	std::cout << "last name: ";
	std::getline(std::cin, p_lastName);
	if (std::cin.eof() == 1)
		exit(0);
	std::cout << "nickname: ";
	std::getline(std::cin, p_nickname);
	if (std::cin.eof() == 1)
		exit(0);
	std::cout << "phone number: ";
	std::getline(std::cin, p_phoneNumber);
	if (std::cin.eof() == 1)
		exit(0);
	std::cout << "darkest secret: ";
	std::getline(std::cin, p_darkestSecret);
	if (std::cin.eof() == 1)
		exit(0);
}

void print_process(std::string str)
{
	std::cout.width(10);
	if (str.size() > 10)
	{
		str.resize(9);
		std::cout << str + ".";
	}
	else
		std::cout << str;
}

std::string itoa(int i)
{
	std::stringstream cast;

	cast << i;
	return (cast.str());
}

void contact::print_row(int id)
{
	print_process(itoa(id));
	std::cout << "|";
	print_process(p_firstName);
	std::cout << "|";
	print_process(p_lastName);
	std::cout << "|";
	print_process(p_nickname);
	std::cout << std::endl;
}