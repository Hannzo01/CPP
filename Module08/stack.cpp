#include <iostream>
#include <stack>
#include <vector>

void printstackelement(std::stack<int>s)
{
    while (!s.empty())
    {
        std::cout << s.top() << std::endl;
        s.pop();
    }
}


int main()
{
    // 5 FUNCTIONS : empty() size() push() pop() top()
    std::stack<int> s;

    s.push(5);
    s.push(6);
    s.push(7);

    if (!s.empty())
        std::cout << "stack is not empty" << std::endl;
    else
        std::cout << "stack is empty" << std::endl;
    
    std::cout << s.size() << std::endl;

    printstackelement(s);
}