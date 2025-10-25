#include <iostream>

void byref(std::string &str)
{
	str = str + "hannzo";
}

void byaddress(std::string *str)
{
	*str = *str + "hannzowa";
}

int main()
{
	std::string str = "kenza";

	byref(str);
	std::cout << str << std::endl;
	byaddress(&str);
	std::cout << str << std::endl;


}