#include "FragTrap.hpp"
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	std::cout << "--- ClapTrap ---" << std::endl;
	ClapTrap clap("Cla");
	std::cout << std::endl;

	std::cout << "--- ScavTrap ---" << std::endl;
	ScavTrap scav("Sca");
	std::cout << std::endl;

	std::cout << "--- FragTrap ---" << std::endl;
	FragTrap frag("Fra");
	std::cout << std::endl;


	std::cout << "--- Functions tests frag ---" << std::endl;
	frag.takeDamage(30);
	frag.beRepaired(10);
	std::cout << std::endl;
	
	std::cout << "--- Test special function ---" << std::endl;
	frag.highFivesGuys();
	std::cout << std::endl;

	std::cout << "--- (Destructions) ---" << std::endl;
	return 0;
}