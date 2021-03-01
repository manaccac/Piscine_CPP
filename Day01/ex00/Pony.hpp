#ifndef PONY_HPP
# define PONY_HPP

#include <iostream>
#include <string>

class Pony
{
public:
	Pony(std::string pony_name, int pony_year);
	~Pony();

	void	set_name(std::string pony_name);
	void	set_year(int pony_year);

	std::string get_name();
	int			get_year();

	void	cute();
private:
	int	year;
	std::string	name;
};

#endif