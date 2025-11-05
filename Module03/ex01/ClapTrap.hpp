#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP


#include <iostream>

class ClapTrap
{
	protected :
		std::string _name;
		int _Hit_points;
		int _Energy_points;
		int _Attack_damage;
	//Ce constructeur n'est pas pour le public, 
	//c'est un outil interne que mes enfants peuvent utiliser pour se construire correctement
	public :
		virtual void attack(const std::string& target); //function overrriding 
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap& other);
		ClapTrap& operator=(const ClapTrap& other);
		~ClapTrap();
};

#endif

//Si tu le mets en public : N'importe qui, dans le main, pourra créer un ClapTrap avec des stats invalides : ClapTrap cheater("Cheater", 9999, 9999, 9999); Cela casse les règles de ton exercice 00,\
// qui dit qu'un ClapTrap normal doit avoir 10 HP, 10 EP, et 0 AD .