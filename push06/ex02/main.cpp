#include <iostream>
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include "ft.hpp"
#include <ctime>
#include <cstdlib>

Base* generate(void)
{
	Base *b;
	int r = rand() % 3;
	if (r == 0)
	{
		std::cout << "A class generated" << std::endl;
		b = new A;
	}		
	else if (r == 1)
	{
		std::cout << "B class generated" << std::endl;
		b = new B;
	}
	else if (r == 2)
	{ std::cout << "C class generated" << std::endl;
		b = new C;
	}
	return dynamic_cast<Base *>(b);
}

void identify(Base* p)
{
	if (dynamic_cast<A*>(p) != NULL)
		std::cout << "The actual type of object pointed to by p is: A " << std::endl;
	else if (dynamic_cast<B*>(p) != NULL)
		std::cout << "The actual type of object pointed to by p is: B " << std::endl;
	else if(dynamic_cast<C*>(p) != NULL)
		std::cout << "The actual type of object pointed to by p is: C " << std::endl; 
}

void identify(Base& p)
{
	try
	{
		(void)dynamic_cast<A&>(p);
		std::cout << "The actual type of object referenced to by p is: A " << std::endl;
	}
	catch(std::exception& e)
	{}
	try
	{
		(void)dynamic_cast<B&>(p);
		std::cout << "The actual type of object referenced to by p is: B " << std::endl;

	}
	catch(const std::exception& e)
	{}
	try
	{
		(void)dynamic_cast<C&>(p);
		std::cout << "The actual type of object referenced to by p is: C " << std::endl;
	}
	catch(const std::exception& e)
	{}
}

int main(void)
{
	srand(time(NULL));
	Base* t = generate();
	identify(t);
	identify(*t);
	delete t;
}
