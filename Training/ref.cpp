#include <iostream>

void incremenet (int& value)
{
	value++;
}

int main()
{
	int val = 5;
	int val2 = 4;
	incremenet(val);
	std::cout << val << std::endl;

	int& ref = val;
	ref = val2;

	std::cout << val << std::endl;
	std::cout << val2 << std::endl;

}