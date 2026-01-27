#include "easyfind.hpp"


int main()
{
	std::vector<int> v;
	v.push_back(0);
	v.push_back(15);
	v.push_back(65);
	v.push_back(5);
	v.push_back(75);


	std::vector<int>::iterator it = easyfind(v, 2);
	if (it == v.end())
		std::cout << "maghtwsalxi";
	else
		std::cout << *it << std::endl;
	// try 
	// {
	// 	std::cout << easyfind(v, 2) << std::endl;
	// }
	// catch (int i)
	// {
	// 	std::cout << "No occurence is found" << std::endl;
	// }
	// try 
	// {
	// 	std::cout << easyfind(v, 5) << std::endl;

	// }
	// catch (int i)
	// {
	// 	std::cout << "No occurence is found" << std::endl;
	// }
	// try
	// {
	// 	std::cout << easyfind(v, 14) << std::endl;
	// }
	// catch (int i)
	// {
	// 	std::cout << "No occurence is found" << std::endl;
	// }
}