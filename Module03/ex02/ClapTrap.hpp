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
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap& other);
		ClapTrap& operator=(const ClapTrap& other);
		~ClapTrap();
};

#endif
