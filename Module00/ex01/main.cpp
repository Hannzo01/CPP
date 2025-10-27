#include <iostream>
#include <string>

#include "Contact.hpp"
#include "PhoneBook.hpp"

int	is_digit(std::string str)
{
	size_t i = 0;
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
				std::cout << "Invalid input try again" << std::endl ;
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

