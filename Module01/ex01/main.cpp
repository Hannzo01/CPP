#include <iostream>
#include "Zombie.hpp"

int main()
{
	int N = 3;
	Zombie *horde = zombieHorde(3, "boo");
	for (int i = 0; i < N; i++)
	{
		horde[i].announce();
	}
	delete[] horde;
}
