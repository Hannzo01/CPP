#pragma once
#include <iostream>
#include "Weapon.hpp"
class HumanB
{
	std::string name;
	Weapon *w1;
	public :
	void attack();
	void setWeapon(Weapon &vandal);
	HumanB(std::string name_value);
};
