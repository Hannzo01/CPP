#include <iostream>


int main()
{
    int var = 4;
    int &ref = var;
    ref = 5;
    std::cout << var << std::endl;
}