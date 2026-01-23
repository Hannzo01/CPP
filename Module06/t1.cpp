#include <iostream>
int main()
{
	int a = 1337;
	int *p = &a;

	uintptr_t i = reinterpret_cast<uintptr_t>(p);
<<<<<<< HEAD
	std::cout << i + 10 << "  *";
	std::cout << p + 10;

=======
	std::cout << i + 10;
>>>>>>> 203c00f3d20d3f960ceffb79d4c2912a65d7ae32


}