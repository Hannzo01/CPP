#pragma once
#include <iostream>

class Zombie
{
	std::string name;
	public :
	void announce(void);
	Zombie();
	void set_name(std::string);
	~Zombie();
};

Zombie* zombieHorde( int N, std::string name );

