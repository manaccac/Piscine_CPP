#include "Peon.hpp"

Peon::Peon(std::string s_name) : Victim(s_name)
{
	std::cout << "Zog zog." << std::endl;
}

Peon::Peon(Peon const &shreck) : Victim(shreck)
{
	std::cout << "Zog zog." << std::endl;
}

Peon	&Peon::operator=(Peon const &shreck)
{
	std::cout << "Zog zog." << std::endl;
	Victim::operator=(shreck);
	return (*this);
}

Peon::~Peon()
{
	std::cout << "Bleuark..." << std::endl;
}

void	Peon::getPolymporphed() const
{
	std::cout << getName() << " has been turned into a pink pony!" << std::endl;
}

std::ostream &operator<<(std::ostream &os, const Peon &other)
{
	os << "I'm " << other.getName() << " and I like otters!" << std::endl;
	return (os);
}
