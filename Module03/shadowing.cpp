#include <iostream>

class boo
{
    private:
        int x;
    public :
    void print()
    {
        int x = 7;
        std::cout << x << std::endl;
    }
    boo() : x(5){}
};


int main()
{
    boo k;

    k.print();
}