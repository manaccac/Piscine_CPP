#include "Weapon.hpp"

Weapon::Weapon(std::string str) : _type(str)
{
}

Weapon::~Weapon()
{
}

void	Weapon::setType(std::string s_type)
{
	_type = s_type;
}

std::string	const & Weapon::getType()
{
	return (this->_type);
}
