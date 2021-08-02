#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include <fstream>

#include "./Form.hpp"

class ShrubberyCreationForm : public Form
{
private:
	std::string _target;

public:
	ShrubberyCreationForm();
	ShrubberyCreationForm(std::string traget);
	ShrubberyCreationForm(const ShrubberyCreationForm &);
	~ShrubberyCreationForm();
	ShrubberyCreationForm &operator=(const ShrubberyCreationForm &);
	virtual void execute(Bureaucrat const &executor) const;
};

ShrubberyCreationForm::ShrubberyCreationForm() : Form("Shrubbery creation form", 145, 137), _target("no_target")
{
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("Shrubbery creation form", 145, 137), _target(target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src) : Form("Shrubbery creation form", 145, 137), _target(src._target)
{
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &src)
{
	_target = src._target;
	return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	if (!Form::isSigned())
		throw NotSignedException();
	else if (executor.getGrade() > Form::getGradeExec())
		throw GradeTooLowException();
	else
	{
		std::ofstream file((_target + "_shrubbery").c_str());
		file << "       _-_\n\
    /~~   ~~\\\n\
 /~~         ~~\\\n\
{      :)       }\n\
 \\  _-     -_  / \n\
   ~  \\\\ //  ~ \n\
_- -   | | _- _\n\
  _ -  | |   -_\n\
      // \\\\\n";
	}
}

#endif
