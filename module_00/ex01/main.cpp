#include "contact.hpp"

void print_process(std::string str);
std::string itoa(int i);

void search(contact contacts[], int size)
{
	std::string input;
	int i;

	print_process("index");
	std::cout << "|";
	print_process("first name");
	std::cout << "|";
	print_process("last name");
	std::cout << "|";
	print_process("nickname");
	std::cout << std::endl;
	i = 0;
	while (i < size)
	{
		contacts[i].print_row(i);
		i++;
	}
	std::cout << "get details for index: ";
	std::getline(std::cin, input);
	if (std::cin.eof() == 1)
		exit(0);
	if (atoi(input.c_str()) < 0 || atoi(input.c_str()) >= size)
		std::cout << "invalid selection" << std::endl;
	else
		contacts[atoi(input.c_str())].print_details();
}

int main()
{
	std::string input;
	contact contacts[8];
	int size;

	size = 0;
	while (true)
	{
		std::cout << "ADD, SEARCH, EXIT ?" << std::endl;
		std::getline(std::cin, input);
		if (input == "EXIT" || std::cin.eof())
			exit(0);
		else if (input == "ADD")
			contacts[size++].add();
		else if (input == "SEARCH")
			search(contacts, size);
	}
	return 0;
}
