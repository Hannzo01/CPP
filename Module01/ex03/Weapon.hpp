#pragma once
#include <iostream>

class Weapon
{
	std::string type;
	public:
	std::string&  getType() ;
	void setType(std::string new_value);
	Weapon(std::string name);
	Weapon();
};
