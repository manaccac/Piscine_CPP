#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <iostream>
#include <string>
#include <cstring>
#include "Weapon.hpp"

class HumanB
{
public:
	HumanB(std::string s_name);
	~HumanB();

	void	attack();
	void	setWeapon(Weapon &s_weapon);

private:
	std::string _name;
	Weapon *_weapon;
};

#endif
