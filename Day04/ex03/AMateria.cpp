#include "AMateria.hpp"

AMateria::AMateria(std::string const &s_type) : _type(s_type)
{
	_xp = 0;
}

AMateria::AMateria(AMateria const & s_mat)
{
	_xp = s_mat.getXP();
	_type = s_mat.getType();
}

AMateria	&AMateria::operator=(AMateria const & s_mat)
{
	_xp = s_mat.getXP();
	_type = s_mat.getType();
	return (*this);
}

AMateria::~AMateria()
{
}

const std::string &AMateria::getType() const
{
	return (_type);
}

unsigned int AMateria::getXP() const
{
	return (_xp);
}

void	AMateria::use(ICharacter &target)
{
	(void)target;
	_xp += 10;
}
