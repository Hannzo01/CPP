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
		std::cout << "not found!" << std::endl;
	else
		std::cout << "the value "<<*it << " is found!" << std::endl;

	it = easyfind(v, 65);
	
	if (it == v.end())
		std::cout << "not found!" << std::endl;
	else
		std::cout << "the value "<<*it << " is found!" << std::endl;
}