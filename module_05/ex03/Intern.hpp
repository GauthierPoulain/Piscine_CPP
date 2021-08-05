#ifndef INTERN_HPP
#define INTERN_HPP

#include <string>
#include <iostream>
#include <string.h>

#include "./Form.hpp"
#include "./ShrubberyCreationForm.hpp"
#include "./RobotomyRequestForm.hpp"
#include "./PresidentialPardonForm.hpp"

class Intern
{
private:
public:
	Intern();
	Intern(const Intern &);
	Intern &operator=(const Intern &);
	~Intern();
	Form *createForm(const std::string type, const std::string target);
};

#endif
