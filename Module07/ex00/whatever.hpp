#ifndef WHATEVER_HPP
#define WHATEVER_HPP

template <typename T>

T min(T a, T b)
{
	if (a < b) return a;
	else return b;
}
template <typename T>

void swap(T &param1, T &param2)
{
	T param3 = param1;
	param1 = param2;
	param2 = param3;
}
template <typename T>
T max(T a, T b)
{
	if (a > b) return a;
	else return b;
}

#endif