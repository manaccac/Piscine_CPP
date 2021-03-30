#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i != 4; i++)
		_spell[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const &s_matsource)
{
	for (int i = 0; i != 4; i++)
	{
		if (s_matsource._spell[i])
			learnMateria(s_matsource._spell[i]->clone());
	}
}

MateriaSource &MateriaSource::operator=(MateriaSource const &s_matsource)
{
	for (int i = 0; i != 4; i++)
		_spell[i] = s_matsource._spell[i];
	return (*this);
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i != 4; i++)
		if (_spell[i])
			delete _spell[i];
}

void	MateriaSource::learnMateria(AMateria *s_spell)
{
	for (int i = 0; i != 4; i++)
	{
		if (!_spell[i])
		{
			_spell[i] = s_spell;
			break;
		}
	}
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i != 4; i++)
	{
		if (_spell[i] && (_spell[i]->getType() == type))
			return (_spell[i]->clone());
	}
	return (0);
}
