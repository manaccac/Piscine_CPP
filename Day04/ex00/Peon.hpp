#ifndef PEON_HPP
# define PEON_HPP

#include <iostream>
#include "Victim.hpp"

class Peon : public Victim
{
public:
	Peon(std::string s_name);
	Peon(Peon const &shreck);
	Peon &operator=(Peon const &shreck);
	~Peon();

	void	getPolymporphed() const;
private:
	Peon();
};

std::ostream &operator<<(std::ostream &os, Peon const &other);

#endif
