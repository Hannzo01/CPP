#include <iostream>
#include <exception>


class boo
{
    int *p;
    public :
        boo(){
            std::cout << "constructor is called" << std::endl;

           p = new int[5];
            for (int i = 0; i < 5; i++)
            {
                p[i] = i;
            }
        }
        int print()
        {
            for (int i = 0; i < 5; i++)
            {
                std::cout << p[i] << std::endl;
            }
            return 1;
        }
        ~boo(){
            std::cout << "destructor is called" << std::endl;
            delete[] p;
        }
};


int main()
{

    boo b1;
    try
    {
        // int *p2 = new int(2);
        if (b1.print() == 1)
            throw 10;
        int *p1 = new int(5);
    }
    // catch (int e)
    // {
    //     std::cout << "list is printed" << std::endl;
    // }
    catch ()
    catch (...)
    {
        std::cout << "catched" << std::endl;
    }
    std::cout << "test" << std::endl;
}