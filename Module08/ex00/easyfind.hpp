#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <vector>

template<typename T>
typename T::iterator easyfind(T &v, int value)
{
	return (std::find(v.begin(), v.end(), value));
}


#endif