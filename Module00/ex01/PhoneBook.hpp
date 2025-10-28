#ifndef PHONENOOK_HPP
#define  PHONEBOOK_HPP
#include "Contact.hpp"
#include <iomanip>
#include <iostream>
#include <sstream>
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

#endif 