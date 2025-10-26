#pragma once 
#include "Contact.hpp"
#include <iomanip>
#include <iostream>
class PhoneBook
{
	int index_contact;
	Contact contacts[8];
	std::string trunc(std::string str);

	public :
	PhoneBook();
	void	add_contact(Contact created_contact);
	void	display();
	void	prompt(std::string index_string);
};

int	is_digit(std::string str);