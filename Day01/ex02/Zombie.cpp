#include "Zombie.hpp"

Zombie::Zombie()
{
}

Zombie::~Zombie()
{
}

void	Zombie::advret()
{
	std::cout << "< " << name << " (" << type << ") >" << " Braiiiiiiinnnssss ..."<< std::endl;
}

void	Zombie::set_name(std::string s_name)
{
	name = s_name;
}

void	Zombie::set_type(std::string s_type)
{
	type = s_type;
}
