#pragma once
#include <iostream>

class Zombie
{
	std::string name;
	public :
	void announce(void);
	Zombie(std::string name);
	~Zombie();
};

Zombie *newZombie(std::string name);
void randomChump(std::string name);
