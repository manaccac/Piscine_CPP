#include "Victim.hpp"

Victim::Victim(std::string s_name) : _Name(s_name)
{
	std::cout << "Some random victim called " << _Name << " just appeared!" << std::endl;
}

Victim::Victim(Victim const &timi) : _Name(timi._Name)
{
	std::cout << "Some random victim called " << _Name << " just appeared!" << std::endl;
}

Victim	&Victim::operator=(Victim const &timi)
{
	_Name = timi._Name;
	std::cout << "Some random victim called " << _Name << " just appeared!" << std::endl;
	return (*this);
}

Victim::~Victim()
{
	std::cout << "Victim " << _Name << " just died for no apparent reason!" << std::endl;
}

std::string	Victim::getName() const
{
	return(_Name);
}

void	Victim::getPolymporphed() const
{
	std::cout << _Name << " has been turned into a cute little sheep!" << std::endl;
}

std::ostream &operator<<(std::ostream &os, const Victim &other)
{
	os << "I'm " << other.getName() << " and I like otters!" << std::endl;
	return (os);
}
