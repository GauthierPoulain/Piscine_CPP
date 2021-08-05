#include "./Bureaucrat.hpp"
#include "./ShrubberyCreationForm.hpp"
#include "./RobotomyRequestForm.hpp"
#include <iostream>

int main(void)
{
	Bureaucrat gilbert("gilbert", 1);
	ShrubberyCreationForm form("pouet");

	form.beSigned(gilbert);
	form.execute(gilbert);

	return 0;
}
