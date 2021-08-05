#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include <time.h>
#include <stdlib.h>
#include "./Form.hpp"

class RobotomyRequestForm : public Form
{
private:
	std::string _target;

public:
	RobotomyRequestForm();
	RobotomyRequestForm(std::string traget);
	RobotomyRequestForm(const RobotomyRequestForm &);
	~RobotomyRequestForm();
	RobotomyRequestForm &operator=(const RobotomyRequestForm &);
	virtual void execute(Bureaucrat const &executor) const;
};

#endif
