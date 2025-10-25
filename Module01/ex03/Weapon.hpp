#pragma once
#include <iostream>

class Weapon
{
	std::string type;
	//specificateurs dacess
	public:
	std::string&  geType() ;
	void setType(std::string new_value);
	Weapon(std::string name);
	Weapon();
};
