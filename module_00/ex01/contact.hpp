#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>
#include <iostream>
#include <stdlib.h>
#include <sstream>

class contact
{
private:
	std::string p_firstName;
	std::string p_lastName;
	std::string p_nickname;
	std::string p_phoneNumber;
	std::string p_darkestSecret;

public:
	void print_details(void);
	void add(void);
	void print_row(int id);
};

#endif