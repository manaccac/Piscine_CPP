#include "SuperMutant.hpp"

SuperMutant::SuperMutant() : Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::SuperMutant(SuperMutant const &sup) : Enemy(sup.getHP(), sup.getType())
{
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant &SuperMutant::operator=(SuperMutant const &sup)
{
	Enemy::operator=(sup);
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
	return (*this);
}

SuperMutant::~SuperMutant()
{
	std::cout << "Aaargh..." << std::endl;
}

void	SuperMutant::takeDamage(int amount)
{
	amount = amount - 3;
	if (_HP - amount <= 0)
	{
		_HP = 0;
		delete this;
	}
	else
		_HP -= amount;
}

