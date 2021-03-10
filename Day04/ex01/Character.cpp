#include "Character.hpp"

Character::Character(std::string const & s_name) : _Name(s_name)
{
	_AP = 40;
}

Character::Character(Character const &chara)
{
	_Name = chara._Name;
	_AP = chara._AP;
}

Character	&Character::operator=(Character const &chara)
{
	_Name = chara._Name;
	_AP = chara._AP;
	return (*this);
}

Character::~Character()
{
}

void	Character::recoverAP()
{
	if (_AP + 10 >= 40)
		_AP = 40;
	else
		_AP += 10;
}

void	Character::equip(AWeapon *weap)
{
}

void	Character::attack(Enemy *ad)
{
}

std::string	Character::getName() const
{
	return (_Name);
}
