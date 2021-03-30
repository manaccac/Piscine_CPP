#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"
#include <iostream>

class Cure : public AMateria
{
public:
	Cure();
	Cure(Cure const &s_cure);
	Cure &operator=(Cure const &s_cure);
	~Cure();

	void	use(ICharacter &target);
	AMateria* clone() const;
};

#endif
