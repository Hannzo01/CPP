#include <iostream>
class base
{
    public :
    void print()
    {
        std::cout << "salam" << std::endl;
    }
};

class derieved : public base
{
    public :
    void print()
    {
        std::cout << "salam2" << std::endl;
    }
};

int main()
{
    derieved b1;
    b1.print();
    b1.base::print();
}