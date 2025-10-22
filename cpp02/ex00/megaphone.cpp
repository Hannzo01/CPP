#include <iostream>
#include <string>
#include <cstdio>

int main(int argc, char *argv[])
{
	if (argc != 1)
	{
		int i = 1;
		while (i < argc)
		{
			std::string str = argv[i];
			size_t j = 0;
			while (j < str.length())
			{
				std::cout << (char)toupper(str[j]);
				j++;
			}
			i++;
		}
		std::cout << std::endl;
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
}
