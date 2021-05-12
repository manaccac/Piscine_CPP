#ifndef POWERFIST_HPP
# define POWERFIST_HPP

#include "AWeapon.hpp"

class PowerFist : public AWeapon
{
public:
	PowerFist();
	PowerFist(PowerFist const& power);
	PowerFist operator=(PowerFist const& power);
	virtual ~PowerFist();

	void	attack() const;
private:

};

#endif
