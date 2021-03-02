#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
#include <string>
#include <cstring>

class Weapon
{
public:
	Weapon(std::string str);
	~Weapon();

	void	setType(std::string s_type);
	std::string const getType();

private:
	std::string _type;
};

#endif
