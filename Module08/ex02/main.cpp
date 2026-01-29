#include "MutantStack.hpp"
#include <algorithm>
#include <list>
int main()
{
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;   //17
    mstack.pop(); // now only 5 remains
    std::cout << mstack.size() << std::endl; // size == 1
    mstack.push(3); // 5 3 
    mstack.push(5); // 5 3 5
    mstack.push(737); // 5 3 5 737
    mstack.push(0); // 5 3 5 737 0
    MutantStack<int>::iterator it = mstack.begin(); // it points to 5
    MutantStack<int>::iterator ite = mstack.end(); 
    ++it; // it points to 3 now
    --it;  // it points to 5 again
    while (it != ite) 
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::stack<int> s(mstack);

    std::cout << "-----CONST TEST-----" << std::endl;
    MutantStack<int> ss;
    ss.push(1);
    ss.push(15);
    ss.push(45);
    ss.push(9);

    const MutantStack<int>& cs = ss;
    MutantStack<int>::const_iterator cit = cs.begin();
    MutantStack<int>::const_iterator cite = cs.end();
    
    while (cit != cite) {
        std::cout << *cit << std::endl;
        cit++;
    }

    std::cout << "--- TEST : STD::LIST ---" << std::endl;
    
    std::list<int> mlist;
    
    mlist.push_back(5);
    mlist.push_back(17);
    std::cout << mlist.back() << std::endl;
    mlist.pop_back();
    std::cout << mlist.size() << std::endl;
    mlist.push_back(3); 
    mlist.push_back(5); 
    mlist.push_back(737); 
    mlist.push_back(0); 
    std::list<int>::iterator itt = mlist.begin(); 
    std::list<int>::iterator itte = mlist.end(); 
    ++itt; 
    --itt;
    while (itt != itte) 
    { 
        std::cout << *itt << std::endl; 
        ++itt; 
    }
}