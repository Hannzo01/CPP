#include <iostream>
#include <stdio.h>
#include <string>
#include <cctype>
#include <iomanip>

#include "contact.hpp"

class PhoneBook
{
	int index_contact = 0;
	Contact contacts[8];
	std::string trunc(std::string str)
	{
		if (str.length() > 10)
			return str.substr(0,9) + ".";
		return str;
	}
	public :
	void add_contact(Contact created_contact)
	{
		contacts[index_contact] = created_contact;
		index_contact++;
		if (index_contact == 8)
		index_contact = 0;
	}
	void	display()
	{
		std::cout << std::setw(10) << "index" << " | " << std::setw(10) << "first name" << " | ";
		std::cout << std::setw(10) << "last name" << " | " <<std::setw(10) << "nickname" << std::endl; 
		for (int i = 0; i < 8; i++)
		{
			std::string tmp = contacts[i].get_first_name();
			if (!tmp.empty())
			{
				std::cout << std::setw(10) << i << " | ";
				std::cout << std::setw(10) << trunc(contacts[i].get_first_name()) << " | ";
				std::cout << std::setw(10) << trunc(contacts[i].get_last_name()) << " | ";
				std::cout << std::setw(10) << trunc(contacts[i].get_nickname()) << std::endl;
			}
			else
				break;
		}
		
	}
	void	prompt(std::string index_string)
	{
		int index = atoi(index_string.c_str()); //Converts the C++ string into a C-style string (a pointer to characters atoi() is an old C function, so it needs this format
		if (!(index >= 0 && index <= 7))
			std::cout << "Invalid index";
		else
		{
			std::cout << contacts[index].get_first_name() << std::endl;
			std::cout << contacts[index].get_last_name() << std::endl;
			std::cout << contacts[index].get_nickname() << std::endl;
			std::cout << contacts[index].get_num() << std::endl;
			std::cout << contacts[index].get_secret() << std::endl;
		}
	}
};

int	is_digit(std::string str)
{
	int i = 0;
	if (str.empty())
		return 0;
	if (str.length() != 10)
		return 0;
	while (i < str.length())
	{
		if (!isdigit(str[i]))
			return 0;
		i++;
	}
	return 1;
}

int main()
{
	PhoneBook phonebook;

	while (1)
	{
		std::cout << "Enter Command: - ";
		std::string cmd, first, last, nickname, num, secret;
		std::getline(std::cin, cmd);
		if (cmd == "ADD")
		{
			Contact contact;
			std::cout << "Enter first name: -";
			std::getline(std::cin, first);

			std::cout << "Enter last name: -";
			std::getline(std::cin, last);
		
			std::cout << "Enter nickname: -";
			std::getline(std::cin, nickname);

			std::cout << "Enter phone number: -";
			std::getline(std::cin, num);

			std::cout << "Enter darkest secret: -";
			std::getline(std::cin, secret);

			if (first.empty() || last.empty() || nickname.empty() || num.empty() || secret.empty() || !is_digit(num))
				std::cout << "Invalid" << std::endl ;
			else
			{
				contact.set_field(first, last, nickname, num, secret);
				phonebook.add_contact(contact);
			}
		}
		else if (cmd == "SEARCH") //getter
		{
			phonebook.display();
			std::cout << "Enter the index: ";
			std::string index;
			std::getline(std::cin, index);
			phonebook.prompt(index);
		}
		else if (cmd == "EXIT")
			break ;
	}
}

