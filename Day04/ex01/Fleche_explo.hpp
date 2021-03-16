#ifndef FLECHE_EXPLO_HPP
# define FLECHE_EXPLO_HPP

#include "AWeapon.hpp"

class Fleche_explo : public AWeapon
{
public:
	Fleche_explo();
	Fleche_explo(Fleche_explo const& fleche);
	Fleche_explo &operator=(Fleche_explo const& fleche);
	~Fleche_explo();

	void attack() const;
private:
};

#endif
