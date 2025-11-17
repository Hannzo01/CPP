#include "FragTrap.hpp"
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	std::cout << "--- Création de Clap (ClapTrap) ---" << std::endl;
	ClapTrap clap("Clappy");
	std::cout << std::endl;

	std::cout << "--- Création de Scav (ScavTrap) ---" << std::endl;
	ScavTrap scav("Scavvy");
	std::cout << std::endl;

	// 1. Montre la chaîne de construction (ClapTrap -> FragTrap)
	std::cout << "--- Création de Frag (FragTrap) ---" << std::endl;
	FragTrap frag("Fraggy"); // 100 HP, 100 EP, 30 AD
	std::cout << std::endl;


	std::cout << "--- Tests des fonctions héritées (sur Frag) ---" << std::endl;
	frag.takeDamage(30); // Devrait appeler ClapTrap::takeDamage
	frag.beRepaired(10); // Devrait appeler ClapTrap::beRepaired
	std::cout << "NOTE: Si beRepaired() a plafonné les HP de Fraggy à 10, c'est le comportement attendu par le sujet !" << std::endl;
	std::cout << std::endl;
	
	// 2. Teste la nouvelle fonction spéciale
	std::cout << "--- Test de la fonction spéciale ---" << std::endl;
	frag.highFivesGuys();
	std::cout << std::endl;

	std::cout << "--- Fin du main (Destruction) ---" << std::endl;
	return 0;
	// 3. Montre la chaîne de destruction (dans l'ordre inverse)
	//    1. Destructeur FragTrap -> Destructeur ClapTrap (pour Fraggy)
	//    2. Destructeur ScavTrap -> Destructeur ClapTrap (pour Scavvy)
	//    3. Destructeur ClapTrap (pour Clappy)
}