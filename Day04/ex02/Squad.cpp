#include "Squad.hpp"

Squad::Squad() : _count(0), _unit(NULL)
{
}

Squad::Squad(Squad const &s_squad)
{

	if (s_squad.getCount())
	{
		_unit = new ISpaceMarine*[s_squad.getCount()];
		for (int i = 0; i < s_squad.getCount(); i++)
			_unit[i] = s_squad.getUnit(i)->clone();
		_count = s_squad.getCount();
	}
	else
	{
		_count = 0;
		_unit = NULL;
	}
}

Squad &Squad::operator=(Squad const &s_squad)
{
	for (int i = 0; i < _count; i++)
		delete _unit[i];
	_count = 0;
	for (int i = 0; i < _count; i++)
		push(s_squad.getUnit(i)->clone());
	return (*this);

}

Squad::~Squad()
{
	for (int i = 0; i < _count; i++)
		delete _unit[i];
	delete [] _unit;
}

int	Squad::getCount() const
{
	return (_count);
}

ISpaceMarine	*Squad::getUnit(int i) const
{
	if (i < 0 || i >= _count)
		return (NULL);
	return (_unit[i]);
}

int Squad::push(ISpaceMarine* Space_M)
{
	if (Space_M)
	{
		for (int i = 0; i < _count; i++)
			if (_unit[i] == Space_M)
				return (_count);
		ISpaceMarine **tmp = new ISpaceMarine*[_count + 1];
		for (int i = 0; i < _count; i++)
			tmp[i] = _unit[i];
		tmp[_count] = Space_M;
		delete [] _unit;
		_unit = tmp;
		_count++;
	}
	return (_count);
}
