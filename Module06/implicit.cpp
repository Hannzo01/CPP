#include <iostream>


class boo{};
class boo1:public boo{};
class boo2:public boo{};


int main()
{
	boo1 b1;

	boo *b = &b1; //implicit reintrepret
	boo *bb = (boo*)&b1; // explicit reintreprt


	boo* parent = &b1;  //upcast 
	boo1 *c = parent;	//downcast
	boo2 *cc = (boo2 *)parent;
}