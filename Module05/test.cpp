#include <iostream>


class boo
{
    public :
    void print(){
        std::cout << "printtttt is called" << std::endl;
    }
    void print1(){
        std::cout << "aaaaaaaaaaaaaaaaa is called" << std::endl;
    }
};

int main()
{
    boo b1;
    void (boo::*ptr)() = &boo::print;
    (b1.*ptr)();

    boo *b2 = new boo();
    void (boo::*ptr1)() = &boo::print1;
    (b2->*ptr1)();
    delete b2;
}
