#include <iostream>
#include <string>

int main(void)
{
	while (1)
	{
		std::string choice;

		std::cout << "ADD, SEARCH, EXIT ?" << std::endl;
		std::getline(std::cin, choice);
		if (choice == "ADD")
		{
		}
		if (choice == "SEARCH")
		{
		}
		if (choice == "EXIT" || std::cin.eof() == 1)
		{
			exit(0);
		}
	}
	return (0);
}
