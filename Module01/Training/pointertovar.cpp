#include <iostream>

class boo
{
    public :
    int x;
    boo() : x(0){} 
    void add(void)
    {
        std::cout << "salam" << std::endl;
    }
};

int main()
{   
    boo b1;
    int boo::*p = &boo::x;
    b1.*p = 20;
    std::cout << b1.x << std::endl;
    void (boo::*p1)(void) = &boo::add;

    (b1.*p1)();
    
}