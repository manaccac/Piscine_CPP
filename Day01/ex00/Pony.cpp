#include "Pony.hpp"

Pony::Pony(std::string pony_name, int pony_year)
{
	set_name(pony_name);
	set_year(pony_year);
}

Pony::~Pony()
{
}

void		Pony::set_name(std::string pony_name)
{
	name = pony_name;
}

void		Pony::set_year(int pony_year)
{
	year = pony_year;
}

std::string		Pony::get_name()
{
	return (name);
}

int				Pony::get_year()
{
	return (year);
}

void			Pony::cute()
{
	std::cout << "Tout à coup le poney " << get_name() << " âgé de " << get_year() << " vous fait des calins" << std::endl;
}