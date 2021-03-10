#include "Zombie.hpp"

Zombie::Zombie()
{
}

Zombie::Zombie(std::string s_name, std::string s_type) : name(s_name), type(s_type)
{
}

Zombie::~Zombie()
{
}

void	Zombie::advert()
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
