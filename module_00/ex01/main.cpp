#include <iostream>
#include <string>
#include "class.hpp"

void add_contact(contact contacts[8], int *last)
{
	contact new_contact;

	std::cout << "first name : ";
	std::getline(std::cin, new_contact.first_name);
	if (std::cin.eof() == 1)
		exit(0);
	std::cout << "last name : ";
	std::getline(std::cin, new_contact.last_name);
	if (std::cin.eof() == 1)
		exit(0);
	std::cout << "nickname : ";
	std::getline(std::cin, new_contact.nickname);
	if (std::cin.eof() == 1)
		exit(0);
	std::cout << "login : ";
	std::getline(std::cin, new_contact.login);
	if (std::cin.eof() == 1)
		exit(0);
	std::cout << "postal address: ";
	std::getline(std::cin, new_contact.postal_address);
	if (std::cin.eof() == 1)
		exit(0);
	std::cout << "email address: ";
	std::getline(std::cin, new_contact.email_address);
	if (std::cin.eof() == 1)
		exit(0);
	std::cout << "phone number: ";
	std::getline(std::cin, new_contact.phone_number);
	if (std::cin.eof() == 1)
		exit(0);
	std::cout << "birthday date: ";
	std::getline(std::cin, new_contact.birthday_date);
	if (std::cin.eof() == 1)
		exit(0);
	std::cout << "favorite meal: ";
	std::getline(std::cin, new_contact.favorite_meal);
	if (std::cin.eof() == 1)
		exit(0);
	std::cout << "underwear color: ";
	std::getline(std::cin, new_contact.underwear_color);
	if (std::cin.eof() == 1)
		exit(0);
	std::cout << "darkest secret: ";
	std::getline(std::cin, new_contact.darkest_secret);
	if (std::cin.eof() == 1)
		exit(0);

	contacts[*last] = new_contact;
	*last += 1;
}

int main(void)
{
	contact contacts[8];
	int last;

	last = 0;
	while (1)
	{
		std::string choice;

		std::cout << last << std::endl;
		std::cout << "ADD, SEARCH, EXIT ?" << std::endl;
		std::getline(std::cin, choice);
		if (choice == "ADD")
		{
			if (last == 8)
				std::cout << "can't add more than 8 contacts" << std::endl;
			else
				add_contact(contacts, &last);
		}
		if (choice == "SEARCH")
		{
		}
		if (choice == "EXIT" || std::cin.eof() == 1)
			exit(0);
	}
	return (0);
}
