#ifndef DEV_HPP
# define DEV_HPP

#include <iostream>
#include "Victim.hpp"

class Dev : public Victim
{
public:
	Dev(std::string s_name);
	Dev(Dev const &shreck);
	Dev &operator=(Dev const &shreck);
	~Dev();

	void	getPolymporphed() const;
private:
	Dev();
};

std::ostream &operator<<(std::ostream &os, Dev const &other);

#endif
