
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> v;
		vector<int> numst = nums;;

        sort(numst.begin(), numst.end());
        for (int i = 0 ; i < nums.size(); i++)
        {
			int pos = lower_bound(numst.begin(), numst.end(), nums[i]) - numst.begin();
            v.push_back(pos);
        }
        return v;
    }
};

int main()
{
	Solution s;
	vector<int> n1 = {8,1,2,2,3};
	vector<int> n = s.smallerNumbersThanCurrent(n1);
	for (int i = 0; i < n.size(); i++)
	{
		std::cout <<n[i] << " ";
	}
	std::cout << std::endl;
}