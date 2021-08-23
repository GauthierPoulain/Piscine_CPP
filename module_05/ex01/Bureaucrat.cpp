#include "./Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name(""), _grade(150)
{
}

Bureaucrat::Bureaucrat(const Bureaucrat &src) : _name(src._name), _grade(src._grade)
{
	_grade = src._grade;
}

Bureaucrat::Bureaucrat(const std::string name, int grade) : _name(name), _grade(grade)
{
	if (_grade < 1)
		throw GradeTooHighException();
	else if (_grade > 150)
		throw GradeTooLowException();
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &src)
{
	_grade = src._grade;
	return *this;
}

Bureaucrat::~Bureaucrat()
{
}

const std::string Bureaucrat::getName() const
{
	return _name;
}

int Bureaucrat::getGrade() const
{
	return _grade;
}

void Bureaucrat::incrementGrade()
{
	if (_grade >= 150)
		throw GradeTooLowException();
	else
		_grade++;
}

void Bureaucrat::decrementGrade()
{
	if (_grade <= 1)
		throw GradeTooHighException();
	else
		_grade--;
}

void Bureaucrat::signForm(Form &form)
{
	if (form.isSigned())
		std::cout << _name << " cannot sign " << form.getName() << " because it's already signed" << std::endl;
	else
	{
		try
		{
			form.beSigned(*this);
			std::cout << _name << " signs " << form.getName() << std::endl;
		}
		catch (const Form::GradeTooLowException &e)
		{
			std::cout << _name << " cannot sign " << form.getName() << " because he's grade too low" << std::endl;
		}
	}
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &src)
{
	out << src.getName() << ", bureaucrat grade " << src.getGrade();
	return out;
}
