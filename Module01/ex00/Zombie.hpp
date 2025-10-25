#pragma once
#include <iostream>

class Zombie
{
	//specificateurs daccess
	std::string name;
	public :
	void annouce(void);
	//constructor
	Zombie(std::string name);
	//destructor 
	~Zombie();
};

Zombie *newZombie(std::string name);
void randomChump(std::string name);
