#include "Contact.hpp"

void	Contact::set_field(std::string first, std::string last, std::string nicknam, std::string num, std::string secret)
{
	first_name = first;
	last_name = last;
	nickname = nicknam;
	phone_number = num;
	darkest_secret = secret;
}

std::string Contact::get_first_name() const
{
	return first_name;
}

std::string Contact::get_last_name() const
{
	return last_name;
}
std::string Contact::get_nickname() const
{
	return nickname;
}

std::string Contact::get_num() const
{
	return phone_number;
}

std::string Contact::get_secret() const
{
	return darkest_secret;
}
