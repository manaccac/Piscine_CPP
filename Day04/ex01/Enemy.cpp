#include "Enemy.hpp"

Enemy::Enemy(int s_hp, std::string const&  s_type) : _HP(s_hp), _Type(s_type)
{
}

Enemy::Enemy(Enemy const& enem)
{
	_HP = enem._HP;
	_Type = enem._Type;
}

Enemy &Enemy::operator=(Enemy const& enem)
{
	_HP = enem._HP;
	_Type = enem._Type;
	return (*this);
}

Enemy::~Enemy()
{
}

std::string	Enemy::getType() const
{
	return (_Type);
}

int			Enemy::getHP() const
{
	return (_HP);
}

void	Enemy::takeDamage(int amount)
{
	if (_HP - amount <= 0)
		_HP = 0;
	else
		_HP -= amount;
}
