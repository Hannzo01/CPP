#include <iostream>

int main()
{
	int *arr = new int[10];
	for (int i = 0; i < 10 ; i++)
	{
		arr[i] = i * i;
		std::cout << arr[i] << std::endl;
	}
	delete[] arr;
}