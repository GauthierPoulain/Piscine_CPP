#include "./Bureaucrat.hpp"
#include "./ShrubberyCreationForm.hpp"
#include <iostream>

int main(void)
{
	Bureaucrat gilbert("gilbert", 1);
	ShrubberyCreationForm form("home");

	form.beSigned(gilbert);
	form.execute(gilbert);

	return 0;
}
