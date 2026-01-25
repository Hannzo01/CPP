#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <vector>



template<typename T>
int easyfind(T v, int value)
{
	typename T::iterator it;
	// std::vector<int>::iteator it;
	it = std::find(v.begin(), v.end(), value);
	if (it == v.end())
		throw 1;
	return value;
}


#endif