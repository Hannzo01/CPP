#pragma once
#include <iostream>
#include "Weapon.hpp"
class HumanA
{
	std::string name;
	Weapon w1;
	public :
	void attack();
	HumanA(std::string name, Weapon knife);
};


