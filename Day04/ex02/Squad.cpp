#include "Squad.hpp"

Squad::Squad() : _count(0), _unit(NULL)
{
}

Squad::Squad(Squad const &s_squad) : _count(0), _unit(NULL)
{
	for (int i = 0; i < _count; i++)
		push(s_squad.getUnit(i)->clone());
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

int Squad::push(ISpaceMarine* Tp)
{
	if (Tp)
	{
		for (int i = 0; i < _count; i++)
			if (_unit[i] == Tp)
				return (_count);
		ISpaceMarine **tmp = new ISpaceMarine*[_count + 1];
		for (int i = 0; i < _count; i++)
			tmp[i] = _unit[i];
		tmp[_count] = Tp;
		delete [] _unit;
		_unit = tmp;
		_count++;
	}
	return (_count);
}
