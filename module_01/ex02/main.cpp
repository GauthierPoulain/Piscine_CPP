#include <string>
#include <iostream>

int main(void)
{
	std::string brain;
	std::string *stringPTR;

	brain = "HI THIS IS BRAIN";
	stringPTR = &brain;
	std::string &stringREF = brain;

	std::cout << "print address:" << std::endl;
	std::cout << "using pointer: " << stringPTR << std::endl;
	std::cout << "using reference: " << &stringREF << std::endl;
	std::cout << std::endl;
	std::cout << "print string:" << std::endl;
	std::cout << "using pointer: " << *stringPTR << std::endl;
	std::cout << "using reference: " << stringREF << std::endl;

	return 0;
}
