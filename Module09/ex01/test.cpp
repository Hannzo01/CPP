#include <iostream>
#include <stack>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> stack;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[')
                stack.push(s[i]);
            else
            {
				if (stack.size() != 0)
				{
                	char a = stack.top();
					if (s[i] == '(')
						if (a != ')')
							return false;
					if (a - 2 != s[i])
							return false;
					else
						stack.pop();
				}
			}
		}
            
			return true;
        }
	};