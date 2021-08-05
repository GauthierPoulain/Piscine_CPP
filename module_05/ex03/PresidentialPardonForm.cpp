#include "./PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("Presidential pardon form", 25, 5), _target("no_target")
{
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("Presidential pardon form", 25, 5), _target(target)
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &src) : Form("Presidential pardon form", 25, 5), _target(src._target)
{
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &src)
{
	_target = src._target;
	return *this;
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	if (!Form::isSigned())
		throw NotSignedException();
	else if (executor.getGrade() > Form::getGradeExec())
		throw GradeTooLowException();
	else
		std::cout << _target << " has been pardoned by Zafod Beeblebrox" << std::endl;
}
