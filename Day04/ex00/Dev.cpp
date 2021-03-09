#include "Dev.hpp"

Dev::Dev(std::string s_name) : Victim(s_name)
{
	std::cout << "01100010 01101111 01101110 01101010 01101111 01110101 01110010" << std::endl;
}

Dev::Dev(Dev const &shreck) : Victim(shreck)
{
	std::cout << "01100010 01101111 01101110 01101010 01101111 01110101 01110010" << std::endl;
}

Dev	&Dev::operator=(Dev const &shreck)
{
	std::cout << "01100010 01101111 01101110 01101010 01101111 01110101 01110010" << std::endl;
	Victim::operator=(shreck);
	return (*this);
}

Dev::~Dev()
{
	std::cout << "01000010 01111001 01100101" << std::endl;
}

void	Dev::getPolymporphed() const
{
	std::cout << getName() << " has been turned into a code line !" << std::endl;
}

std::ostream &operator<<(std::ostream &os, const Dev &other)
{
	os << "I'm " << other.getName() << " and I like ASM!" << std::endl;
	return (os);
}
