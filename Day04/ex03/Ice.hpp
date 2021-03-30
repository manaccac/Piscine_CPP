#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"
#include <iostream>

class Ice : public AMateria
{
public:
	Ice();
	Ice(Ice const &s_Ice);
	Ice &operator=(Ice const &s_Ice);
	~Ice();

	void	use(ICharacter &target);
	AMateria* clone() const;
};

#endif
