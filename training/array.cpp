#include <iostream>

int main()
{
	int arr[5];
	arr[0] = 1;
	arr[1] = 2;
	arr[2] = 3;
	arr[3] = 4;
	arr[4] = 5;


	std::cout << arr << std::endl; //add 
	std::cout << arr[0] << std::endl; // 1
	std::cout << &arr[0] << std::endl; // add 
	std::cout << *arr+1 << std::endl; // 1
	std::cout << arr[-1] << std::endl; // 2

}