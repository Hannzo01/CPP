#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <string>

class Contact
{
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string darkest_secret;

	public:
	void	set_field(std::string first, std::string last, std::string nicknam, std::string num, std::string secret);
	std::string get_first_name() const;
	std::string get_last_name() const;
	std::string get_nickname() const;
	std::string get_num() const;
	std::string get_secret() const;
};
#endif
