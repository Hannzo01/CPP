#include "ClapTrap.hpp"


int main()
{
	ClapTrap attacker("yoru");

	attacker.attack("yasuo");
	attacker.takeDamage(9);
	attacker.beRepaired(2);

	attacker.takeDamage(1);
	attacker.beRepaired(10);
}