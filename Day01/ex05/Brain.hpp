#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <string>
#include <cstring>
#include <sstream>

class Brain
{
public:
	Brain();
	~Brain();

	std::string identify() const;
private:
	std::string neurone;
};

#endif
