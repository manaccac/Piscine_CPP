#ifndef VICTIM_HPP
# define VICTIM_HPP

#include <iostream>

class Victim
{
public:
	Victim(std::string s_name);
	Victim(Victim const &wizar);
	Victim &operator=(Victim const &other);
	~Victim();


private:
	std::string _Name;
};

Victim::Victim()
{
}

Victim::~Victim()
{
}


#endif
