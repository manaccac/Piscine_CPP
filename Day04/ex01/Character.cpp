#include "Character.hpp"

Character::Character(std::string const & s_name) : _Name(s_name)
{
	_AP = 40;
	_Hweap = 0;
}

Character::Character(Character const &chara)
{
	_Name = chara._Name;
	_AP = chara._AP;
	_Hweap = chara._Hweap;
}

Character	&Character::operator=(Character const &chara)
{
	_Name = chara._Name;
	_AP = chara._AP;
	_Hweap = chara._Hweap;
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
	_Weapon = weap;
	_Hweap = 1;
}

void	Character::attack(Enemy *ad)
{
	if (ad->getHP() == 0)
	{
		std::cout << "already dead" << std::endl;
		return ;
	}
	if (!_Weapon)
	{
		std::cout << getName() << " attacks " << ad->getType() << "and is unarmed"  << std::endl;
		return ;
	}
	if (_AP < _Weapon->getAPCost())
	{
		std::cout << "Need reload" << std::endl;
		return ;
	}
	_AP -= _Weapon->getAPCost();
	_Enemy = ad;
	std::cout << getName() << " attacks " << ad->getType() << "with a " << _Weapon->getName() << std::endl;
	_Weapon->attack();
	ad->takeDamage(_Weapon->getDamage());
}

std::string const	Character::getName() const
{
	return (_Name);
}

int	Character::getAP() const
{
	return (_AP);
}

AWeapon	const * Character::getWeapon() const
{
	if (_Hweap == 0)
		return (NULL);
	return (_Weapon);
}

std::ostream &operator<<(std::ostream &o, Character const &_chara)
{
	if (_chara.getWeapon() == NULL)
		o << _chara.getName() << " has " << _chara.getAP() << " and is unarmed"<< std::endl;
	else
		o << _chara.getName() << " has " << _chara.getAP() << " and wields a " << _chara.getWeapon()->getName() << std::endl;
	return (o);
}
