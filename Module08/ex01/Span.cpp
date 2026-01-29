#include "Span.hpp"

Span::Span() : _capacity(0){}

Span::Span(unsigned int N) : _capacity(N){}

Span::Span(const Span& other) : _capacity(other._capacity), v(other.v){}

Span& Span::operator=(const Span& other)
{
    if (this != &other)
	{
		_capacity = other._capacity;
		v = other.v;
	}
    return *this;
}

Span::~Span(){}

unsigned int Span::longestSpan()
{
	if (v.size() < 2)
		throw std::out_of_range("Not enough elements to find a span");
	std::sort(v.begin(), v.end());
	return (v.back() - v.front());
}

unsigned int Span::shortestSpan()
{
	if (v.size() < 2)
		throw std::out_of_range("Not enough elements to find a span");
	std::sort(v.begin(), v.end());
	unsigned int diff = std::numeric_limits<int>::max();


	std::vector<int>::iterator it = v.begin();
	for (it = v.begin() ; it < v.end() - 1 ; it++)
	{
		if ((*(it + 1) - *it) < (int)diff)
			diff = *(it + 1) - *it;	
	}
	return (diff);
}

void Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
    unsigned int dis = std::distance(begin, end);

    if (v.size() + dis > _capacity)
        throw std::out_of_range("Span would exceed capacity");

    v.insert(v.end(), begin, end);
}

void Span::addNumber(int n)
{
	if (v.size() >= _capacity)
		throw std::out_of_range("Span would exceed capacity");
	v.push_back(n);
}
