#include "./Bureaucrat.hpp"
#include <iostream>

int main(void)
{
	{
		try
		{
			Bureaucrat test("John", 0);
		}
		catch (const std::exception &e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	{
		try
		{
			Bureaucrat test("John", 151);
		}
		catch (const std::exception &e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	{
		try
		{
			Bureaucrat test("John", 2);
			std::cout << test << std::endl;
			test.decrementGrade();
			std::cout << test << std::endl;
			test.decrementGrade();
			std::cout << test << std::endl;
			test.decrementGrade();
			std::cout << test << std::endl;
		}
		catch (const std::exception &e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	{
		try
		{
			Bureaucrat test("John", 149);
			std::cout << test << std::endl;
			test.incrementGrade();
			std::cout << test << std::endl;
			test.incrementGrade();
			std::cout << test << std::endl;
			test.incrementGrade();
			std::cout << test << std::endl;
		}
		catch (const std::exception &e)
		{
			std::cerr << e.what() << '\n';
		}
	}

	return 0;
}
