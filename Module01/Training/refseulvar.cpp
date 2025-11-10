#include <iostream>


int main()
{
    int var = 5;
    int var2 =6;

    int &ref = var ;
    std::cout << ref << std::endl;

    ref = var2; //la c pas une reinitialisatuon mais c plutot un changement de la variable var 
    // ref still lalias de var;
    std::cout << ref << std::endl;

    std::cout << var << std::endl;
    std::cout << var2 << std::endl;

}