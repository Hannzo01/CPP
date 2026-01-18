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
		b = new A;
	else if (r == 1)
		b = new B;
	else
		b = new C;
	return b;
}

// void identify(Base* p)
// {

// }

// void identify(Base& p)
// {

// }

int main(void)
{
	srand(time(NULL));
	Base* t = generate();
	(void)t;
	return (0);
}
