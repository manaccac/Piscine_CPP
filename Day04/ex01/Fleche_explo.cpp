#include "Fleche_explo.hpp"

Fleche_explo::Fleche_explo() : AWeapon("Fleche explosive", 20, 180)
{
}

Fleche_explo::Fleche_explo(Fleche_explo const& fleche) : AWeapon(fleche.getName(), fleche.getAPCost(), fleche.getDamage())
{
}

Fleche_explo	&Fleche_explo::operator=(Fleche_explo const& fleche)
{
	AWeapon::operator=(fleche);
	return (*this);
}

Fleche_explo::~Fleche_explo()
{
}

void	Fleche_explo::attack()	const
{
	std::cout << "* warbam: Dans ta mere d'outomai *" << std::endl;
}
