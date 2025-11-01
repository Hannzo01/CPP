#include <iostream>
#include "Sed.hpp"

int main(int argc, char *argv[])
{
	
	if (argc == 4)
	{
		std::string filename = argv[1];
		std::string s1 = argv[2];
		std::string s2 = argv[3];

		if (s1.empty())
		{
			std::cerr << "Error: The string to be replaced (s1) cannot be empty." << std::endl;
			return 1;
		}

		Sed replacer(s1, s2, filename);
		return replacer.execute_replacement();
	}
	else
	{
		std::cerr << "Error ! Invalid input " << std::endl;
		return (1);
	}
}
