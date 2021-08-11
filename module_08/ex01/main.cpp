// clang++ main.cpp span.cpp -Wall -Wextra -Werror -g -std=c++98 -fsanitize=address && ./a.out

#include <iostream>
#include <stdlib.h>
#include "span.hpp"

int main()
{
	try
	{
		Span sp(10);

		sp.addNumber(5);
		sp.addNumber(10);
		sp.addNumber(19);
		sp.addNumber(40);
		sp.addNumber(28);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		Span sp(1);

		sp.addNumber(5);
		sp.addNumber(10);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		Span sp(10);

		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		Span sp(5000);

		srand(time(NULL));
		for (size_t i = 0; i < 5000; i++)
			sp.addNumber(rand() % 5000);

		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return 0;
}
