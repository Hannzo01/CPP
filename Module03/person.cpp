#include <iostream>

// base class
//parent class
class Person
{
    private :
        std::string name;
        int age;
    public :
        Person();
        Person(int a, std::string n) : name(n) , age(a){};
        void set_age(int a);
        void set_name(std::string n);
        std::string get_name()const ;
        int get_age()const;
        void display();
        ~Person()
        {
            std::cout << "Parent destructor is called" << std::endl;
        }
};

void Person::display()
{
    std::cout << age << std::endl;
    std::cout << name << std::endl;
}

Person::Person()
{

    std::cout << "Person default constructor is called" << std::endl;
    name = "unkown";
    age = 0;
}

void Person::set_age(int a)
{
    age = a;
}

void Person::set_name(std::string n)
{
    name = n;
}

int Person::get_age()const
{
    return age;
}

std::string Person::get_name() const 
{
    return name;
}

//derived class
// synatx to create child class 
// name of this clas      name of the class that im taking from it inheritance
//public is access modifier

//              public means im taking from u thoses things and ill treat them like this
class Student : public Person{
    
    int lvl;
    public :
    int get_lvl()const;
    void set_lvl (int l);
    Student (int l, std::string n, int a) : Person(a, n)
    {
        l = lvl;
    }
    Student()
    {
        std::cout << "Student default constructor is called" << std::endl;
    }
    ~Student()
    {
        std::cout << "Student destructor is called" << std::endl;
    }
    void display() : Person display()
    {
        
    }
};

int Student::get_lvl()const
{
    return lvl;
}

void Student::set_lvl(int l )
{
    lvl = l;
}

int main()
{
    Student s1(10, "kenza", 24);
    s1.display(); // didnt display level

}