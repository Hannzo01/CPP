#pragma once
#include <iostream>

class Zombie
{
	//specificateurs daccess
	std::string name;
	public :
	void annouce(void);
	//constructor
	Zombie();
	void set_name(std::string);
	//destructor 
	~Zombie();
};

Zombie* zombieHorde( int N, std::string name );

