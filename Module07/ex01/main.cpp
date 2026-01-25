#include <iostream>
#include "iter.hpp"


void print(int value){
    std::cout << value << " ";
}

void addone(int value){
    std::cout << value + 1 << " ";
}

void refadd(int& value){
   value =  value + 1 ;
}

int main()
{
    int arr[] = {1,2,3,4,5};

    iter(arr, 5, print);
    std::cout << std::endl;
    iter(arr, 5, addone);
    std::cout << std::endl;
    for (int i = 0; i < 5 ; i++)
        std::cout << arr[i] << " ";
    std::cout << std::endl;
    iter(arr, 5, refadd);
    std::cout << std::endl;

    for (int i = 0; i < 5 ; i++)
        std::cout << arr[i] << " ";
    std::cout << std::endl;
    



}
