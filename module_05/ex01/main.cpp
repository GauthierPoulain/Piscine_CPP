#include "./Bureaucrat.hpp"
#include "./Form.hpp"
#include <iostream>

int main(void)
{
	{
		try
		{
			Form form("testForm", 0, 0);
		}
		catch (const std::exception &e)
		{
			std::cerr << "exception catched : " << e.what() << std::endl;
		}
	}
	{
		try
		{
			Form form("testForm", 151, 151);
		}
		catch (const std::exception &e)
		{
			std::cerr << "exception catched : " << e.what() << std::endl;
		}
	}
	{
		try
		{
			Bureaucrat bureaucrat("John", 5);
			Form form("testForm", 10, 5);

			std::cout << form << std::endl;
			std::cout << bureaucrat << std::endl;
			form.beSigned(bureaucrat);
		}
		catch (const std::exception &e)
		{
			std::cerr << "exception catched : " << e.what() << std::endl;
		}
	}
	{
		try
		{
			Bureaucrat bureaucrat("John", 15);
			Form form("testForm", 10, 5);

			std::cout << form << std::endl;
			std::cout << bureaucrat << std::endl;
			form.beSigned(bureaucrat);
		}
		catch (const std::exception &e)
		{
			std::cerr << "exception catched : " << e.what() << std::endl;
		}
	}
	{
		try
		{
			Bureaucrat bureaucrat("John", 15);
			Form form("testForm", 10, 5);

			std::cout << form << std::endl;
			std::cout << bureaucrat << std::endl;
			bureaucrat.signForm(form);
		}
		catch (const std::exception &e)
		{
			std::cerr << "exception catched : " << e.what() << std::endl;
		}
	}

	return 0;
}
