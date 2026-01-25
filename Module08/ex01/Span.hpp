#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <algorithm>
#include <iostream>
#include <limits>
#include <stdexcept>
class Span
{
	private:
		unsigned int _capacity;
		std::vector<int> v;
		
		public:
	//==ORTHODOX CANONICAL FORM==//
		Span();
		Span(unsigned int N);
		Span(const Span& other);
		Span& operator=(const Span& other);
		~Span();

	//==METHOD==//
		void	addNumber(int n);
		void 	addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);
		unsigned int shortestSpan();
		unsigned int longestSpan();
};



#endif