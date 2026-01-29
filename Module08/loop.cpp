#include <iostream>
#include <vector>
#include <algorithm>
int main()
{
    std::vector<int> v1 = {1,9,7,8,5,2};
    for (int i : v1)
    {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    std::sort(v1.begin(), v1.end());
    if (std::binary_search(v1.begin(), v1.end(), 3))
    std::cout << "Found" << std::endl;
    else
    std::cout << "not found " << std::endl;
    std::cout << std::endl;
}