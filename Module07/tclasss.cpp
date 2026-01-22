#include <iostream>

template <typename T>

class calculator  //generic class taht can hold any data type i want
{
	public:
		T add(T a, T b)
		{
			return a + b;
		}

		T sub(T a, T b)
		{
			return a - b;
		}

};

int main()
{
	calculator <int> intcal;
	std::cout << intcal.add(10,5) <<std::endl;
	std::cout << intcal.sub(10,5)<< std::endl;

}