#include "PowerFist.hpp"

PowerFist::PowerFist() : AWeapon("Power Fist", 8, 50)
{
}

PowerFist::PowerFist(PowerFist const& power) : AWeapon(power.getName(), power.getAPCost(), power.getDamage())
{
}

PowerFist	PowerFist::operator=(PowerFist const& power)
{
	AWeapon::operator=(power);
	return (*this);
}

PowerFist::~PowerFist()
{
}

void	PowerFist::attack()	const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}
