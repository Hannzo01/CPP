#include <iostream>

class Student
{
	//specificateurs daccess
	public :
	int age;
	std::string name;
	Student()
	{
		age = 0;
		name = "unkown";
		std::cout << "constructor is called\n";
	}
	~Student()
	{
		std::cout << "destructor is called\n";
	}
};

int main()
{
	Student *s1 = new Student[1];
	delete[] s1;
}