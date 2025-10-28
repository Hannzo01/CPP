#include <iostream>
#include <string>

#include "Contact.hpp"
#include "PhoneBook.hpp"

int	isValidPhoneNumber(std::string str)
{
	size_t i = 0;
	if (str.empty())
		return 0;
	if (str.length() != 10)
		return 0;
	while (i < str.length())
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
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

			if (first.empty() || last.empty() || nickname.empty() || num.empty() || secret.empty())
				std::cout << "at least one of the fields is empty" << std::endl ;
			else if (!isValidPhoneNumber(num)) 
				std::cout << "your number should be 10 digits long" << std::endl;
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

