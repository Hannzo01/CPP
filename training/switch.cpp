#include <iostream>



int main()
{
	char c = 't';


	switch(c) //conditional statement 
	{
		case 't':
			std::cout << "V\n";
		case 'b':
			std::cout << "b\n";
		case 'a':
			std::cout << "a\n";
			break;
		default:
			std::cout << "not found \n";
			break;

	}
}
