#include <iostream>


class student
{
    int counter;
    public :
    student() : counter(0) 
    {   
        std::cout << "Constructor is called" << std::endl;
    }
    student (int c ) : counter(c){}
    ~student()
    {
        std::cout << "Destructor is called" << std::endl;
    }
    int get_count()
    {
        return counter;
    }
    student operator ++() //unary operator , postfix ++i
    {
        ++counter;
        return student(counter);
    }
    // prefix i++
    student operator ++(int)
    {
        counter++;
        return student(counter);
    } 
};

int main()
{
    student s1(1);
    student s2(2);
    student s3 =  s1++;
    std::cout << s3.get_count() << std::endl;
}

