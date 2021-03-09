#ifndef VICTIM_HPP
# define VICTIM_HPP

#include <iostream>

class Victim
{
public:
	Victim(std::string s_name);
	Victim(Victim const &timi);
	Victim &operator=(Victim const &timi);
	virtual ~Victim();

	std::string		getName() const;
	virtual void	getPolymporphed() const;
private:
	Victim();
	std::string _Name;
};

std::ostream &operator<<(std::ostream &os, Victim const &other);

#endif
