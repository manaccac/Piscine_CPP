#ifndef	ZOMBIEHORDE_HPP
#define	ZOMBIEHORDE_HPP

#include "Zombie.hpp"
#include <iostream>
#include <string>
#include <cstring>
#include <cstdlib>

class ZombieHorde
{
public:
	ZombieHorde(int n);
	~ZombieHorde();

	void	randomname(Zombie * Zombies);
	void	randomtype(Zombie * Zombies);
	void	announce();
private:
	Zombie	newZombie (std::string name);
	Zombie	*Zombies;
	int		nb;
};

#endif
