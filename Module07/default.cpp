#include <iostream>

template <typename T, typename A = double>

T tadd(T a, T b, A c)
{
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << c << std::endl;

	return a + b + c;
}

int main()
{
	std::cout << tadd<double, char>(10.2,2.25, 'c') << std::endl;

}