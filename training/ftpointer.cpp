#include <iostream>



class boo
{
	public :
	int x;
	void foo(int x)
	{
		std::cout<< x <<" the function is called\n";
	}
	boo() : x(0) {}
};

int main()
{
	// syntax 
	// declatration
	
	
	// int boo::*p1 = &boo::x;
	// boo b;

	// b.*p1 = 42;
	// std::cout << b.*p1 << std::endl;


	boo *b;

	void (boo ::*p1)(int) = &boo::foo;
	(b->*p1)(4);

}