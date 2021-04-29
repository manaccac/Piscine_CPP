#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <iterator> // for iterators
#include <list>

#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
public:
	MutantStack() : std::stack<T>() {};
	MutantStack(MutantStack const & s_mstack) : std::stack<T>(s_mstack) {};
	MutantStack &operator=(MutantStack const & s_mstack)
	{
		this->_mstack = s_mstack._mstack;
		return (*this);
	}
	virtual ~MutantStack() {};

	typedef typename std::stack<T>::container_type::iterator iterator;

	iterator begin() {return(std::stack<T>::c.begin());}
	iterator end() {return(std::stack<T>::c.end());}
private:
};

#endif