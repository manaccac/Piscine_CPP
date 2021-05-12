#ifndef AWEAPON_HPP
#define AWEAPON_HPP

#include <iostream>

class AWeapon
{
public:
	AWeapon(std::string const &s_name, int s_apcost, int s_damage);
	AWeapon(AWeapon const &weapon);
	AWeapon &operator=(AWeapon const &weapon);
	virtual ~AWeapon();

	std::string const getName() const;
	int getAPCost() const;
	int getDamage() const;
	virtual void attack() const = 0;

protected:
	AWeapon();
	std::string	_Name;
	int			_Apcost;
	int			_Damage;
};

#endif
