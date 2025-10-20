#include "PhoneBook.hpp"
#include <cstdlib>

PhoneBook::PhoneBook()
{
	index_contact = 0;
}

std::string PhoneBook::trunc(std::string str)
{
	if (str.length() > 10)
		return str.substr(0,9) + ".";
	return str;
}
void PhoneBook::add_contact(Contact created_contact)
{
	contacts[index_contact] = created_contact;
	index_contact++;
	if (index_contact == 8)
	index_contact = 0;
}

void	PhoneBook::display()
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
void	PhoneBook::prompt(std::string index_string)
{
	int index = atoi(index_string.c_str()); //Converts the C++ string into a C-style string (a pointer to characters atoi() is an old C function, so it needs this format
	if (!(index >= 0 && index <= 7))
		std::cout << "Invalid index\n";
	else if (contacts[index].get_first_name().empty())
		std::cout << "No contact at this index\n";
	else
	{
		std::cout << contacts[index].get_first_name() << std::endl;
		std::cout << contacts[index].get_last_name() << std::endl;
		std::cout << contacts[index].get_nickname() << std::endl;
		std::cout << contacts[index].get_num() << std::endl;
		std::cout << contacts[index].get_secret() << std::endl;
	}
}
