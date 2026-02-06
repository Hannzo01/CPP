#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> m;
		vector<int> v;
		for (auto it = nums.begin(); it < nums.end(); it++)
		{
			// target = *it + diff == > diff  target - *it
			int diff = target - *it;
			auto itr = m.find(diff);
			if (itr != m.end())
			{
				v.push_back(itr->second);
				v.push_back(it - nums.begin());
				break;
			}
			m[*it] = it - nums.begin();

		}
        return v;
    }
};

int main()
{
	Solution s;
	vector<int> v = {2,2,5,8,2,1};
	vector <int> vv = s.twoSum(v,10);
	for (int i = 0 ; i < 2; i++)
	{
		cout << vv[i] << std::endl;
	}
}
///target = num + diff
// diff = target 
// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         vector<int> v;
// 		for (auto itr = nums.begin(); itr < nums.end(); itr++)
// 		{
// 			int diff  = target - *itr;
// 			auto it = find(nums.begin(), nums.end(), diff);
// 			if (it != itr && it != nums.end())
// 			{
// 				int pos = it - nums.begin();
// 				v.push_back(pos);
// 				int i = itr - nums.begin();
// 				v.push_back(i);
// 				break;
// 			}
// 		}
//         return v;
//     }
// };

// int main()
// {
// 	Solution s;
// 	vector<int> v = {2,2,5,8,2,1};
// 	vector <int> vv = s.twoSum(v, 5);

// 		for (int i = 0 ; i < 2; i++)
// 		{
// 			cout << vv[i] << " ";
// 		}
// 	cout << endl;
// }

// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;
// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         vector<int> v;
//         for (int i = 0; i < nums.size(); i++)
//         {
//             int diff = nums[i] - target;
//             auto itr = find(v.begin(), v.end(), diff);
// 			cout << "\n";
//             if (itr != v.end())
//             {
// 				cout << "test" << std::endl;
//                 int pos = itr - v.begin();
//                 v.push_back(i);
//                 v.push_back(pos);
//                 break;
//             }

//         }
//         return v;
//     }
// };

// int main()
// {
// 	Solution s;
// 	vector<int> v = {2,2,5,8,2,1};
// 	vector <int> vv = s.twoSum(v, 4);
// 	for (int i = 0 ; i < 2; i++)
// 	{
// 		cout << vv[i] << std::endl;
// 	}
// }