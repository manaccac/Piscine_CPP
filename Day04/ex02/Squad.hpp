#ifndef SQUAD_HPP
# define SQUAD_HPP

#include "ISquad.hpp"
#include "ISpaceMarine.hpp"

class Squad : public ISquad
{
public:
	Squad();
	Squad(Squad const &s_squad);
	Squad &operator=(Squad const &s_squad);
	~Squad();

	int getCount() const;
	ISpaceMarine* getUnit(int i) const;
	int push(ISpaceMarine*);
private:
	int	_count;
	ISpaceMarine** _unit;
};

#endif
