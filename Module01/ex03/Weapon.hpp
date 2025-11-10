#pragma once
#include <iostream>

class Weapon
{
	std::string type;
	public:
	const std::string&  getType() const;
	void setType(std::string new_value);
	Weapon(std::string name);
};
