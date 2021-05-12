#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const & s_name, int s_apcost, int s_damage) : _Name(s_name), _Apcost(s_apcost), _Damage(s_damage)
{
}

AWeapon::AWeapon(AWeapon const& weapon)
{
	_Name = weapon._Name;
	_Apcost = weapon._Apcost;
	_Damage = weapon._Damage;
}

AWeapon	&AWeapon::operator=(AWeapon const& weapon)
{
	_Name = weapon._Name;
	_Apcost = weapon._Apcost;
	_Damage = weapon._Damage;
	return (*this);
}

AWeapon::~AWeapon()
{
}

std::string const	AWeapon::getName() const
{
	return (_Name);
}

int			AWeapon::getAPCost() const
{
	return (_Apcost);
}

int			AWeapon::getDamage() const
{
	return (_Damage);
}
