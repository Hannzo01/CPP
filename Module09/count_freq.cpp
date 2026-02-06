#include <iostream>
#include <map>


using namespace std;
int main()
{
	string s = "kenza rki nadi amyah elik ";


	map<char, int> m;

	for(int i = 0 ; i < s.size() ; i++)
	{
		m[s[i]]++;

	}


	for (auto itr = m.begin(); itr != m.end(); itr++)
	{
		cout << "The char " << itr->first << " Appeared " << itr->second << "time" << endl;
	}
}
