#include "Span.hpp"

int main()
{
	{
		Span sp = Span(5);
		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	{
		std::cout << "MAX and MIN" << std::endl;
		Span sp = Span(2);
		sp.addNumber(2147483647);
		sp.addNumber(-2147483648);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	{
		std::cout << "negative" << std::endl;
		Span sp = Span(3);
		sp.addNumber(-8);
		sp.addNumber(-5);
		sp.addNumber(10);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	{
		std::cout << "Max size" << std::endl;
		try
		{
			Span sp = Span(1);
			sp.addNumber(5);
			sp.addNumber(8);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl << std::endl;
		}
	}
	{
		std::cout << "1 Element compare" << std::endl;
		try
		{
			Span sp = Span(1);
			sp.addNumber(5);
			std::cout << sp.shortestSpan() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl << std::endl;
		}
	}
	{
		std::cout << "empty" << std::endl;
		try
		{
			Span sp = Span(1);
			std::cout << sp.shortestSpan() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl << std::endl;
		}
	}

	{
		std::cout << "normal range" << std::endl;
		try
		{
			Span sp = Span(10000);
			sp.addNumber(0, 9999);
			std::cout << sp.shortestSpan() << std::endl;
			std::cout << sp.longestSpan() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl << std::endl;
		}
	}
	{
		std::cout << "Too large range" << std::endl;
		try
		{
			Span sp = Span(50);
			sp.addNumber(0, 9999);
			std::cout << sp.shortestSpan() << std::endl;
			std::cout << sp.longestSpan() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl << std::endl;
		}
	}
	{
		std::cout << "Construct by copy" << std::endl;
		try
		{
			Span sp = Span(50);
			sp.addNumber(0, 49);
			Span sp2(sp);
			std::cout << sp.shortestSpan() << std::endl;
			std::cout << sp2.shortestSpan() << std::endl;
			std::cout << sp.longestSpan() << std::endl;
			std::cout << sp2.longestSpan() << std::endl << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl << std::endl;
		}
	}
	{
		std::cout << "Construct by assignation" << std::endl;
		try
		{
			Span sp = Span(50);
			sp.addNumber(0, 49);
			Span sp2 = sp;
			std::cout << sp.shortestSpan() << std::endl;
			std::cout << sp2.shortestSpan() << std::endl;
			std::cout << sp.longestSpan() << std::endl;
			std::cout << sp2.longestSpan() << std::endl << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl << std::endl;
		}
	}
	return (0);
}
