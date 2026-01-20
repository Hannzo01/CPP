#include <iostream>

class student
{
	//specificateurs daccess
	public:
	std::string student_name;
	int student_age;
		//default constructor
		student()
		{
			std::cout << "default constructor\n";
			student_name = "unknown\n";
			student_age = 0;
			std::cout << student_age << " " << student_name << std::endl;

		}
		//constructor with param
		student (std::string name, int age)  : student_age(age), student_name(name){
			std::cout << "Constructor with parameters is called\n";
			std::cout << student_age << " " << student_name << std::endl;
		}
		//destructor
		~student(){ std::cout << "destructor is called\n";}
};

int main()
{
	// student student1;
	// student student2("kenza", 23);


	std::cout << "\nheap allocated\n";
	student *h_student1 = new student[2]; 
	h_student1[0] = student("kenza", 23); // here a temporary object created, that has no var name,
					//lives untile the end of the statement ;  is created to be used immediately in this case for assignement
	h_student1[1] = student("said", 24);



	std::cout << "--------\n";
	delete[] h_student1;





	// student *h_student2 = new student[2];
	// h_student2[0].student_name = "yakout";
	// h_student2[0].student_age = 1;
	// h_student2[1].student_name = "morjane";
	// h_student2[1].student_age = 1;
	// std::cout << h_student2[0].student_age << " " << h_student2[0].student_name << std::endl;
	// std::cout << h_student2[1].student_age << " " << h_student2[1].student_name << std::endl;



	
	// delete[] h_student2;
}