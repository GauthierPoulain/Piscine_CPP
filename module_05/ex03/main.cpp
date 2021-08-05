#include "./Bureaucrat.hpp"
#include "./Intern.hpp"
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
		Intern intern;
		Form *form = intern.createForm("shrubbery creation", "pouet");

		if (form)
		{
			form->beSigned(gilbert);
			form->execute(gilbertv2);
			delete form;
		}
	}
	catch (const std::exception &e)
	{
		std::cout << "exception catched: " << e.what() << std::endl;
	}
	try
	{
		Bureaucrat gilbert("gilbert", 72);
		Bureaucrat gilbertv2("gilbert", 45);
		Intern intern;
		Form *form = intern.createForm("robotomy request", "pouet");

		if (form)
		{
			form->beSigned(gilbert);
			form->execute(gilbertv2);
			delete form;
		}
	}
	catch (const std::exception &e)
	{
		std::cout << "exception catched: " << e.what() << std::endl;
	}
	try
	{
		Bureaucrat gilbert("gilbert", 25);
		Bureaucrat gilbertv2("gilbert", 5);
		Intern intern;
		Form *form = intern.createForm("presidential pardon", "pouet");

		if (form)
		{
			form->beSigned(gilbert);
			form->execute(gilbertv2);
			delete form;
		}
	}
	catch (const std::exception &e)
	{
		std::cout << "exception catched: " << e.what() << std::endl;
	}
	return 0;
}
