#ifndef FORM_HPP
#define FORM_HPP

#include <string>
#include <exception>
#include <iostream>

#include "./Bureaucrat.hpp"
class Bureaucrat;

class Form
{
private:
	const std::string _name;
	bool _signed;
	const int _gradeSign;
	const int _gradeExec;

public:
	Form();
	Form(const Form &);
	Form(const std::string name, int gradeSign, int gradeExec);
	virtual Form &operator=(const Form &);
	virtual ~Form() = 0;
	const std::string getName() const;
	bool isSigned() const;
	int getGradeSign() const;
	int getGradeExec() const;
	void beSigned(const Bureaucrat &);
	void signForm(const Bureaucrat &);
	virtual void execute(Bureaucrat const &executor) const = 0;
	class GradeTooHighException : public std::exception
	{
		const char *what() const throw()
		{
			return "Grade too high";
		}
	};
	class GradeTooLowException : public std::exception
	{
		const char *what() const throw()
		{
			return "Grade too low";
		}
	};

	class NotSignedException : public std::exception
	{
		const char *what() const throw()
		{
			return "Form not signed";
		}
	};
};

std::ostream &operator<<(std::ostream &out, const Form &);

#endif
