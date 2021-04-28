#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>

class Span
{
public:
	Span(unsigned int s_N);
	Span(Span const & s_span);
	Span &operator=(Span const & s_span);
	~Span();

	void addNumber(int add_nb);
	void addNumber(unsigned int to_nb1, unsigned int to_nb2);
	unsigned int getN() const {return(_N);};
	std::vector<int> getVec() const {return(_vec);};

	long shortestSpan();
	long longestSpan();

    class MaxElementException : public std::exception { virtual const char *what() const throw(); };
    class EmptySpanException : public std::exception { virtual const char *what() const throw(); };

private:
	Span();
	unsigned int _N;
	std::vector<int> _vec;
};

#endif