#pragma once

#include <iostream>

class Zombie
{
	public:
		Zombie(std::string name);
		void announce(void);

	private:
		std::string _name;
};