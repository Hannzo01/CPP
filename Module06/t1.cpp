#include <iostream>
int main()
{
	int a = 1337;
	int *p = &a;

	uintptr_t i = reinterpret_cast<uintptr_t>(p);
	std::cout << i + 10 << "  *";
	std::cout << p + 10;



}