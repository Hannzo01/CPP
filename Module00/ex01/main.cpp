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
		if (!std::getline(std::cin, cmd))
		{
			std::cout << std::endl;
			break;
		}
		if (cmd == "ADD")
		{
			Contact contact;
			std::cout << "Enter first name: -";
			if (!std::getline(std::cin, first))
				break;

			std::cout << "Enter last name: -";
			if (!std::getline(std::cin, last))
				break;
			std::cout << "Enter nickname: -";
			if (!std::getline(std::cin, nickname)) 
				break;
			std::cout << "Enter phone number: -";
			if (!std::getline(std::cin, num)) 
				break;
			std::cout << "Enter darkest secret: -";
			if (!std::getline(std::cin, secret))
				break;

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
			if (!std::getline(std::cin, index))
			{
				std::cout << std::endl;
				break;
			}
			phonebook.prompt(index);
		}
		else if (cmd == "EXIT")
			break ;
	}
	return 0; 
}

