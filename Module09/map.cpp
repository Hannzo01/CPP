#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

int main(){

	vector<int> v = {5,10,15};
	// key --> num   value-->index
	unordered_map<int,int> map;

	for (auto it = v.begin(); it != v.end(); it++)
	{
        cout << "Value: " << *it << ", Index: " << it - v.begin() << endl;
		int double_va = *it * 2;
		auto itr = map.find(double_va);
		if (itr != map.end())
		{
			int pos = it - v.begin();
			cout << "Found previous double at index " << pos << endl;
		}
		map[*it] = it - v.begin();
	}

	for (auto itr = map.begin(); itr != map.end(); itr++)
	{
		cout << itr->first << " -> " << itr->second << endl;
	}
}

