#include <iostream>

int main()
{
	char c = 'k';
	int *p = (int )&c;
	// int *p1 = static_cast<int *>(&c);

	*p = 3;
	std::cout << c << std::endl;
		std::cout << *p << std::endl;

		std::cout << c+1 << std::endl;
				std::cout << c+2 << std::endl;
		std::cout << c+3 << std::endl;
				std::cout << c+4 << std::endl;


}