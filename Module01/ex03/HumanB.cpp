#include "HumanB.hpp"

void HumanB::attack()
{
	if (w1 != NULL)
		std::cout << name << " attacks with their " << w1->getType() << std::endl;
	else
		std::cout << name << " had no weapon" << std::endl;

}

HumanB::HumanB(std::string name_value) : name(name_value){
		w1 = NULL;
} 
void HumanB::setWeapon(Weapon &vandal)
{
	w1 = &vandal;
}