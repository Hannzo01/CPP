#include "Span.hpp"

int main()
{
	try
	{
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout <<"shortest span" <<sp.shortestSpan() << std::endl;
		std::cout << "longest span" << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
	    Span s(10000);
	    std::vector<int> numbers;

   			for (int i = 0; i < 10000; i++)
        	numbers.push_back(i);
		s.addNumber(numbers.begin(), numbers.end());
		std::cout << "shortest span" << s.shortestSpan() << std::endl;
		std::cout << "longest span" << s.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Span sp2 = Span(3);
		sp2.addNumber(1);
		sp2.addNumber(2);
		sp2.addNumber(3);
		sp2.addNumber(4);
		std::cout << "shortest span" << sp2.shortestSpan() << std::endl;
		std::cout << "longest span" << sp2.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

}
