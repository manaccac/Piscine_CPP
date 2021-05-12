#ifndef	SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

#include "Enemy.hpp"

class SuperMutant : public Enemy
{
public:
	SuperMutant();
	SuperMutant(SuperMutant const& sup);
	SuperMutant &operator=(SuperMutant const& sup);
	virtual ~SuperMutant();

	void	takeDamage(int amount);
private:
};

#endif
