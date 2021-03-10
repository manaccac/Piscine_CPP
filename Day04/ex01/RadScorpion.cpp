#include "RadScorpion.hpp"

RadScorpion::RadScorpion() : Enemy(80, "RadScorpion")
{
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::RadScorpion(RadScorpion const &sup) : Enemy(sup.getHP(), sup.getType())
{
	std::cout << "* click click click *" << std::endl;
}

RadScorpion &RadScorpion::operator=(RadScorpion const &sup)
{
	Enemy::operator=(sup);
	std::cout << "* click click click *" << std::endl;
	return (*this);
}

RadScorpion::~RadScorpion()
{
	std::cout << "SPROTCH" << std::endl;
}
