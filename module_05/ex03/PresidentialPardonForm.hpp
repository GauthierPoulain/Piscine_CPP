#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "./Form.hpp"

class PresidentialPardonForm : public Form
{
private:
	std::string _target;

public:
	PresidentialPardonForm();
	PresidentialPardonForm(std::string traget);
	PresidentialPardonForm(const PresidentialPardonForm &);
	~PresidentialPardonForm();
	PresidentialPardonForm &operator=(const PresidentialPardonForm &);
	virtual void execute(Bureaucrat const &executor) const;
};

#endif
