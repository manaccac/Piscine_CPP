#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
}

Cure::Cure(Cure const &s_cure) : AMateria(s_cure)
{
}

Cure &Cure::operator=(Cure const &s_cure)
{
	AMateria::operator=(s_cure);
	return (*this);
}

Cure::~Cure()
{
}

void	Cure::use(ICharacter &target)
{
	_xp += 10;
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

AMateria *Cure::clone() const
{
	return (new Cure(*this));
}
