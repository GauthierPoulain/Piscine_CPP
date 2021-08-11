// clang++ main.cpp -Wall -Wextra -Werror -g -std=c++98 -fsanitize=address && ./a.out

#include <vector>
#include <iostream>
#include "easyfind.hpp"

int main()
{
	std::vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(5);

	try
	{
		std::cout << easyfind(v, 2) << std::endl;
		std::cout << easyfind(v, 10) << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}