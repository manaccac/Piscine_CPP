#ifndef	ZOMBIEEVENT_HPP
#define	ZOMBIEEVENT_HPP

#include "Zombie.hpp"
#include <iostream>
#include <string>
#include <cstring>
#include <cstdlib>

class ZombieEvent
{
public:
	ZombieEvent();
	~ZombieEvent();

	void	setZombieType(std::string s_type);
	Zombie	*randomChump();
	Zombie  *newZombie(std::string name);
private:
	std::string type;
};

#endif
