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

void print_process(std::string str)
{
	std::cout.width(10);
	if (str.size() > 10)
	{
		str.resize(9);
		std::cout << str + ".";
	}
	else
		std::cout << str;
}

void search(contact contacts[8], int last)
{
	int i;
	std::string entry;

	print_process("index");
	std::cout << "|";
	print_process("first name");
	std::cout << "|";
	print_process("last name");
	std::cout << "|";
	print_process("nickname");
	std::cout << std::endl;
	i = 0;
	while (i < last)
	{
		print_process(std::to_string(i));
		std::cout << "|";
		print_process(contacts[i].first_name);
		std::cout << "|";
		print_process(contacts[i].last_name);
		std::cout << "|";
		print_process(contacts[i].nickname);
		std::cout << std::endl;
		i++;
	}
	std::cout << "details for index: ";
	std::getline(std::cin, entry);
	i = 0;
	while (i < last)
	{
		if (std::to_string(i) == entry)
		{
			std::cout << "first name: " << contacts[i].first_name << std::endl;
			std::cout << "last name: " << contacts[i].last_name << std::endl;
			std::cout << "nickname: " << contacts[i].nickname << std::endl;
			std::cout << "login: " << contacts[i].login << std::endl;
			std::cout << "postal address: " << contacts[i].postal_address << std::endl;
			std::cout << "phone number: " << contacts[i].phone_number << std::endl;
			std::cout << "birthday date: " << contacts[i].birthday_date << std::endl;
			std::cout << "favorite meal: " << contacts[i].favorite_meal << std::endl;
			std::cout << "underwear color: " << contacts[i].underwear_color << std::endl;
			std::cout << "darkest color: " << contacts[i].darkest_secret << std::endl;
			return;
		}
		i++;
	}
	std::cout << "can't find any results for: " + entry << std::endl;
}

int main(void)
{
	contact contacts[8];
	int last;

	last = 0;
	while (1)
	{
		std::string choice;

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
			search(contacts, last);
		if (choice == "EXIT" || std::cin.eof() == 1)
			exit(0);
	}
	return (0);
}
