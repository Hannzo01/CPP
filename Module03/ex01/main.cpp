#include "ScavTrap.hpp"

int main()
{
	ClapTrap attacker("yoru");
	ScavTrap defender("yasuo");

	attacker.attack("yasuo");
	defender.attack("yoru");
	attacker.takeDamage(9);
	attacker.beRepaired(2);
	defender.takeDamage(1);
	attacker.takeDamage(100);
	defender.beRepaired(10);
	attacker.attack("yasuo");
	defender.attack("yoru");
	defender.guardGate();
}