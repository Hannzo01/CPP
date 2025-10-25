#include "HumanB.hpp"

void HumanB::attack()
{
	std::cout << name << " attacks with their " << w1.geType() << std::endl;
}
// HumanB::HumanB(){}

HumanB::HumanB(std::string name_value) : name(name_value){} 
void HumanB::setWeapon(Weapon vandal)
{
	w1 = vandal;
}