#include "HumanB.hpp"

HumanB::HumanB(std::string s_name) : _name(s_name)
{
}

HumanB::~HumanB()
{
}

void	HumanB::setWeapon(Weapon &s_weapon)
{
	_weapon = &s_weapon;
}

void	HumanB::attack()
{
	std::cout << _name << " attacks with his " << _weapon->getType() << std::endl;
}
