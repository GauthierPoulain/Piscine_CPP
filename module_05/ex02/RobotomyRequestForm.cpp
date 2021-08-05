#include "./RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("Robotomy request form", 72, 45), _target("no_target")
{
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("Robotomy request form", 72, 45), _target(target)
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src) : Form("Robotomy request form", 72, 45), _target(src._target)
{
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &src)
{
	_target = src._target;
	return *this;
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	if (!Form::isSigned())
		throw NotSignedException();
	else if (executor.getGrade() > Form::getGradeExec())
		throw GradeTooLowException();
	else
	{
		srand(time(NULL));
		if (rand() % 2)
			std::cout << _target << " has been robotomized successfully" << std::endl;
		else
			std::cout << _target << " robotomization failed" << std::endl;
	}
}
