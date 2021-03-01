#include "Zombie.hpp"

Zombie::Zombie(std::string s_name, std::string s_type)
{
	set_name(s_name);
	set_type(s_type);

	advret();
}

Zombie::~Zombie()
{
}

void	Zombie::advret()
{
	std::cout << "< " << get_name() << " " << get_type << " >" << " Braiiiiiiinnnssss ..."<< std::endl;
}

void	Zombie::set_name(std::string s_name)
{
	name = s_name;
}

void	Zombie::set_type(std::string s_type)
{
	type = s_type;
}

std::string	Zombie::get_name()
{
	return(name);
}

std::string	Zombie::get_type()
{
	return(type);
}