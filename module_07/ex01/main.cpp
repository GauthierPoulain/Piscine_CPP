#include <iostream>
#include "iter.hpp"

template <typename T>
void print_content(T data)
{
	std::cout << "<" << data << ">" << std::endl;
}

void get_mult_table(int value)
{
	std::cout << "mult table for " << value << " = ";
	for (int i = 0; i <= 10; i++)
		std::cout << value * i << (i != 10 ? ", " : "");
	std::cout << std::endl;
}

int main(void)
{
	{
		int array[] = {1, 3, 5, 7};

		::iter(array, 4, get_mult_table);
	}
	{
		char array[] = {97,
						98,
						99,
						100};

		::iter(array, 4, print_content);
	}
}
