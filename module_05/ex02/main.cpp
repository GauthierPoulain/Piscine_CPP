#include "./Bureaucrat.hpp"
#include "./ShrubberyCreationForm.hpp"
#include "./RobotomyRequestForm.hpp"
#include "./PresidentialPardonForm.hpp"
#include <iostream>

int main(void)
{
	try
	{
		Bureaucrat gilbert("gilbert", 145);
		Bureaucrat gilbertv2("gilbert", 137);
		ShrubberyCreationForm form("pouet");

		form.beSigned(gilbert);
		form.execute(gilbertv2);
	}
	catch (const std::exception &e)
	{
		std::cout << "exception catched: " << e.what() << std::endl;
	}
	try
	{
		Bureaucrat gilbert("gilbert", 72);
		Bureaucrat gilbertv2("gilbert", 45);
		RobotomyRequestForm form("pouet");

		form.beSigned(gilbert);
		form.execute(gilbertv2);
	}
	catch (const std::exception &e)
	{
		std::cout << "exception catched: " << e.what() << std::endl;
	}
	try
	{
		Bureaucrat gilbert("gilbert", 25);
		Bureaucrat gilbertv2("gilbert", 5);
		PresidentialPardonForm form("pouet");

		form.beSigned(gilbert);
		form.execute(gilbertv2);
	}
	catch (const std::exception &e)
	{
		std::cout << "exception catched: " << e.what() << std::endl;
	}
	return 0;
}
