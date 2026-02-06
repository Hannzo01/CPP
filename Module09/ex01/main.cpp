#include <iostream>
#include <exception>
#include <stack>
using namespace std;

int main(int argc, char *argv[])
{
	(void) argc;

	try
	{
			std::string line = argv[1];
	std::stack<int> stack;

	for (int i = 0; i < line.size(); i++)
	{
		if (isdigit(line[i]))
			stack.push(line[i] - '0');
		if (line[i] == '-' || line[i] == '+' ||  line[i] == '*' || line[i] == '/' )
		{
			if (stack.size() < 2)
				throw std::runtime_error("not enough elements in the stack");
			else
			{
				int b = stack.top();
				stack.pop();
				int a = stack.top();
				stack.pop();
				int res;
				switch(line[i])
				{
					case('+'):
						res = a + b;
						stack.push(res);
						break;
					case('-'):
						res = a - b;
						stack.push(res);
						break;					
					case('*'):
						res = a * b;
						stack.push(res);
						break;					
					case('/'):
						if (b == 0 )
							throw std::logic_error("ERROR");
						res = a / b;
						stack.push(res);

						break;
				}

			}
		}

	}if (stack.size() != 1)
			throw std::runtime_error("Error !");
		cout << stack.top() << std::endl;
	}		
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	


	//if digit --> convert + push 
	// if + = - --> check if the stackl has 2 elements if yes do it 
	//else throw error 
  // 1 ->   2->     1 2


	//if we finsihed and the stack doesnt contain only one value the res then we throw error


}