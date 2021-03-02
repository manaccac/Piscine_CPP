#include "HumanA.hpp"

HumanA::HumanA(std::string s_name, Weapon &s_weapon) : _name(s_name), _weapon(s_weapon)
{
}

HumanA::~HumanA()
{
}

void	HumanA::attack()
{
	std::cout << _name << " attacks with his " << _weapon.getType() << std::endl;
}
