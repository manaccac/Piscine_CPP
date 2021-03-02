#ifndef HUMAN_HPP
# define HUMAN_HPP

#include <iostream>
#include <string>
#include <cstring>
#include "Brain.hpp"

class Human
{
public:
	Human();
	~Human();
	std::string identify() const;
	const Brain &getBrain() const;
private:
	const Brain brain;
};

#endif
