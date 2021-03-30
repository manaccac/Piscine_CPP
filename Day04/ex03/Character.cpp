#include "Character.hpp"

Character::Character()
{
	_name = "Timeo";
	for (int i = 0; i != 4; i++)
		_spell[i] = NULL;
}

Character::Character(std::string const s_name) : _name(s_name)
{
	for (int i = 0; i != 4; i++)
		_spell[i] = NULL;
}

Character::Character(Character const &s_chara) : _name(s_chara._name)
{
	for (int i = 0; i != 4; i++)
		_spell[i] = NULL;
}

Character &Character::operator=(Character const &s_chara)
{
	_name = s_chara._name;
	for (int i = 0; i != 4; i++)
		_spell[i] = NULL;
	return (*this);
}

Character::~Character()
{
	for (int i = 0; i != 4; i++)
		if (_spell[i])
			delete _spell[i];
}

std::string const &Character::getName() const
{
	return (_name);
}

void	Character::equip(AMateria *m)
{
	for (int i = 0; i != 4; i++)
	{
		if (!_spell[i])
		{
			_spell[i] = m;
			break;
		}
	}
}

void	Character::unequip(int idx)
{
	if (idx >= 0 && idx <= 3)
		_spell[idx] = NULL;
}

void	Character::use(int idx, ICharacter &target)
{
	if ((idx >= 0 && idx <= 3) && _spell[idx])
		_spell[idx]->use(target);
}
