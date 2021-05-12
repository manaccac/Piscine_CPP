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

Character::Character(Character const &s_chara)
{
	*this = s_chara;
}

Character &Character::operator=(Character const &s_chara)
{
	_name = s_chara._name;
	for (int i = 0; i != 4; i++)
	{
		_spell[i] = NULL;
	}
	int i = 0;
	while (s_chara._spell[i])
	{
		_spell[i] = s_chara._spell[i];
		i++;
	}


	return (*this);
}

Character::~Character()
{
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
			std::cout << "equipe OK" << std::endl;
			break;
		}
	}
}

void	Character::unequip(int idx)
{
	if (idx >= 0 && idx <= 3)
	{
		if (_spell[idx])
		{
			std::cout << "unequipe idx = " << idx << " OK" << std::endl;
			_spell[idx] = NULL;
		}
	}
}

void	Character::use(int idx, ICharacter &target)
{
	if ((idx >= 0 && idx <= 3) && _spell[idx])
		_spell[idx]->use(target);
}
