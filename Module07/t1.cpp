#include <iostream>

// one template ft that gonna work every data type

// T in one a generic type
template <typename T>

T add(T a, T b)
{
	return a + b;
}


// float addfloat(float a, float b){
// 	return a + b;
// }

// int addint(int a, int b){
// 	return a + b;
// }

int main()
{

	std::cout << add(10.5,2.54) << std::endl;
	std::cout << add(10,5) << std::endl;
	// std::cout << add(10.2,5) << std::endl;

}