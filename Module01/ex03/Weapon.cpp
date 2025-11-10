#include "Weapon.hpp"

void Weapon::setType(std::string new_value)
{
	type = new_value;
}

const std::string& Weapon::getType() const
{
	return type;
}
Weapon::Weapon(std::string name) : type(name){}

