#ifndef TEMPLATES_TEST_HPP
#define TEMPLATES_TEST_HPP

#include <iostream>

template <typename T, typename U>

int search(T array[],int size ,U value)
{
    for (int i = 0 ; i < size; i++)
    {
        if (value == array[i])
            return i;
    }
    return -1;
}

template <typename T, typename U>


bool are_equal(T a, U b)
{
    if (a == b)
        return true;
    return false;
}


#endif