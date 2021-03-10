#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP

#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
public:
	PlasmaRifle();
	PlasmaRifle(PlasmaRifle const& plasma);
	PlasmaRifle &operator=(PlasmaRifle const& plasma);
	~PlasmaRifle();

	void attack() const;
private:
};

#endif
