#include "Weapon.hpp"

void Weapon::setType(std::string new_value)
{
	type = new_value;
}

std::string& Weapon::geType()
{
	return type;
}
Weapon::Weapon(std::string name) : type(name){}

Weapon::Weapon(){}