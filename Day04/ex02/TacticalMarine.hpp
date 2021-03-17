#ifndef TACTICALMARINE_HPP
#define TACTICALMARINE_HPP

#include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine
{
public:
	TacticalMarine();
	TacticalMarine(TacticalMarine const &s_tactic);
	TacticalMarine &operator=(TacticalMarine const &s_tactic);
	~TacticalMarine();

	ISpaceMarine* clone() const;
	void	battleCry() const;
	void	rangedAttack() const;
	void	meleeAttack() const;
private:
};

#endif
