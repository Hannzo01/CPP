#include <iostream>

class Book
{
	//specificateurs dacces
	public :
	std::string *title;
	int pages;

	//constructor ; 
	Book(int pagess, std::string name)
	{
		title = new std::string(name);
		pages = pagess;
		std::cout << "cosntructor is created with title :" << *title << " and num of pages:" << pages << std::endl;
	}
	//destructor;
	~Book()
	{
		std::cout << "destructor is called\n";
		delete title;
		std::cout << "memory is freed\n";
	}
};

int main()
{
	Book b1(100, "kenza");
	Book b2(200, "salam");

}