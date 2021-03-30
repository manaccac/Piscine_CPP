#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
}

Ice::Ice(Ice const &s_Ice) : AMateria(s_Ice)
{
}

Ice &Ice::operator=(Ice const &s_Ice)
{
	AMateria::operator=(s_Ice);
	return (*this);
}

Ice::~Ice()
{
}

void	Ice::use(ICharacter &target)
{
	_xp += 10;
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

AMateria *Ice::clone() const
{
	return (new Ice(*this));
}
