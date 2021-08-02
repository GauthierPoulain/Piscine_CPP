#include "./Form.hpp"

Form::Form() : _name(""), _signed(false), _gradeSign(1), _gradeExec(1)
{
}

Form::Form(const std::string name, int gradeSign, int gradeExec) : _name(name), _signed(false), _gradeSign(gradeSign), _gradeExec(gradeExec)
{
	if (_gradeSign < 1 || _gradeExec < 1)
		throw GradeTooHighException();
	else if (_gradeSign > 150 || _gradeExec > 150)
		throw GradeTooLowException();
}

Form::Form(const Form &src) : _name(src._name), _signed(src._signed), _gradeSign(src._gradeSign), _gradeExec(src._gradeExec)
{
}

Form &Form::operator=(const Form &src)
{
	_signed = src._signed;
	return *this;
}

Form::~Form()
{
}

const std::string Form::getName() const
{
	return _name;
}

bool Form::isSigned() const
{
	return _signed;
}

int Form::getGradeSign() const
{
	return _gradeSign;
}

int Form::getGradeExec() const
{
	return _gradeExec;
}

void Form::beSigned(const Bureaucrat &bureaucrat)
{
	if (_signed)
		std::cout << bureaucrat.getName() << " cannot sign " << _name << "because it's already signed" << std::endl;
	else
	{
		if (bureaucrat.getGrade() > _gradeSign)
			std::cout << bureaucrat.getName() << " cannot sign " << _name << "because he's grade too low" << std::endl;
		else
		{
			std::cout << bureaucrat.getName() << " signs " << _name << std::endl;
			_signed = true;
		}
	}
}

void Form::signForm(const Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() > _gradeSign)
		throw GradeTooLowException();
	else
		_signed = true;
}

std::ostream &operator<<(std::ostream &out, const Form &src)
{
	out << "Form " << src.getName() << " is " << (src.isSigned() ? "signed" : "unsigned") << " and has grades sign : " << src.getGradeSign() << " and exec : " << src.getGradeExec();
	return out;
}
