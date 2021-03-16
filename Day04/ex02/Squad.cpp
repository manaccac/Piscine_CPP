#include "Squad.hpp"

Squad::Squad() : _count(0)
{
}

Squad::Squad(Squad const &s_squad) : _count(0)
{
}

Squad &Squad::operator=(Squad const &s_squad)
{
}

Squad::~Squad()
{
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
