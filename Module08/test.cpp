#include <iostream>
#include <array>
#include <algorithm>
#include <vector>
#include <list>


using namespace std;

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int index =0;
        vector<int>tmp;
        std::sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i++)
        {
            if (i + 1 < nums.size() && nums[i] != nums[i + 1])
                index++;
            tmp.push_back(index);

        }
        return tmp;
    }
};

int main()
{
    std::vector<int> v = {8,1,2,2,3};
    for (int i = 0; i < 5; i++)
        std::cout << v[i] << " ";
    std::cout << std::endl;
    Solution obj;
    std::vector<int> tmp;
    tmp = obj.smallerNumbersThanCurrent(v);
    for (int i = 0; i < 5; i++)
        std::cout << tmp[i] << " ";
    std::cout << std::endl;
}