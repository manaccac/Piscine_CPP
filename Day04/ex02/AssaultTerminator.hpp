#ifndef ASSAULTTERMINATOR_HPP
# define ASSAULTTERMINATOR_HPP

#include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine
{
public:
	AssaultTerminator();
	AssaultTerminator(AssaultTerminator const &s_assault);
	AssaultTerminator &operator=(AssaultTerminator const &s_assault);
	~AssaultTerminator();

	ISpaceMarine* clone() const;
	void	battleCry() const;
	void	rangedAttack() const;
	void	meleeAttack() const;
private:
};

#endif
