#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <exception>
#include <ostream>

#include "./Form.hpp"
class Form;

class Bureaucrat
{
private:
	const std::string _name;
	int _grade;

public:
	Bureaucrat();
	Bureaucrat(const Bureaucrat &);
	Bureaucrat(const std::string name, int grade);
	Bureaucrat &operator=(const Bureaucrat &);
	~Bureaucrat();
	const std::string getName() const;
	int getGrade() const;
	void incrementGrade();
	void decrementGrade();
	void executeForm(Form const &form);
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
};

std::ostream &
operator<<(std::ostream &out, const Bureaucrat &);

#endif
