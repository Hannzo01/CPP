#include <iostream>


class boo
{
	public :
	int * data;
	boo()
	{
		std::cout << "Constructor is called\n";
		data = new int[10];
	}
	~boo()
	{
		std::cout << "destructor is called\n";
		delete data;
	}
};

int main()
{
	boo b1;
	boo b2 = b1;
}