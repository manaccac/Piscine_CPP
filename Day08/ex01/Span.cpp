#include "Span.hpp"

Span::Span(unsigned int s_N) : _N(s_N)
{
}

Span::Span(Span const & s_span) : _N(s_span._N), _vec(std::vector<int>(s_span._vec))
{
}

Span	&Span::operator=(Span const & s_span)
{
	_N = s_span.getN();
	_vec = s_span.getVec();
	return(*this);
}

void	Span::addNumber(int add_nb)
{
	if (_vec.size() == _N)
		throw (MaxElementException());
	else
		_vec.push_back(add_nb);
}

void	Span::addNumber(unsigned int to_nb1, unsigned int to_nb2)
{
	if (to_nb1 > to_nb2)
		std::swap(to_nb1, to_nb2);
	if (to_nb1 >= _N || to_nb2 >= _N)
		throw (MaxElementException());
	while(to_nb1 != to_nb2)
		_vec.push_back(to_nb1++);
}

Span::~Span()
{
}

long	Span::shortestSpan()
{
	if (_vec.size() <= 1)
		throw (EmptySpanException());
	else
	{
		long res = static_cast<long>(_vec[1] - static_cast<long>(_vec[0]));
		for (unsigned int i = 0; i != _N; i++)
		{
			if (res < static_cast<long>(_vec[i + 1] - static_cast<long>(_vec[i])))
				res = static_cast<long>(_vec[1] - static_cast<long>(_vec[0]));
		}
		if (res < 0)
			res = res * -1;
		return (res);
	}
}

long	Span::longestSpan()
{
	if (_vec.size() <= 1)
		throw (EmptySpanException());
	long min = static_cast<long>(*std::min_element(_vec.begin(), _vec.end()));
	long max = static_cast<long>(*std::max_element(_vec.begin(), _vec.end()));
	return (max - min);
}

const char *Span::MaxElementException::what() const throw()
{
	return ("Error: Maximum number of elements reached");
}

const char *Span::EmptySpanException::what() const throw()
{
	return ("Error: Span is empty or just have one element");
}