#include "./Intern.hpp"

Intern::Intern()
{
}

Intern::Intern(const Intern &src)
{
	(void)src;
}

Intern &Intern::operator=(const Intern &src)
{
	(void)src;
	return *this;
}

Intern::~Intern()
{
}

int get_string_id(const char *str, const char **lst)
{
	char **ptr = (char **)lst;

	while (*ptr && strcmp(str, *ptr))
		ptr++;
	if (*ptr && !strcmp(str, *ptr))
		return (int)((const char **)ptr - lst);
	else
		return -1;
}

Form *Intern::createForm(const std::string type, const std::string target)
{
	Form *newForm;
	const char *lst[] = {"shrubbery creation",
						 "robotomy request",
						 "presidential pardon", 0};

	switch (get_string_id(type.c_str(), lst))
	{
	case 0:
		newForm = new ShrubberyCreationForm(target);
		break;
	case 1:
		newForm = new RobotomyRequestForm(target);
		break;
	case 2:
		newForm = new PresidentialPardonForm(target);
		break;
	default:
		std::cout << "Unknown form type" << std::endl;
		return 0;
	}
	std::cout << "Intern create " << type << " form" << std::endl;
	return newForm;
}