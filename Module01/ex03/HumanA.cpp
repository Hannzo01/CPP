#include "HumanA.hpp"

void HumanA::attack()
{
	std::cout << name << " attacks with their " << w1.getType() << std::endl;
}

HumanA::HumanA(std::string name, Weapon &knife) : name(name), w1(knife) {
	w1 = knife;
}
