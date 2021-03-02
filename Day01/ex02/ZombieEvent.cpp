#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent()
{
}

ZombieEvent::~ZombieEvent()
{
}

void	ZombieEvent::setZombieType(std::string s_type)
{
	type = s_type;
}

Zombie	ZombieEvent::newZombie(std::string name)
{
	Zombie N_Zombie = Zombie();
	N_Zombie.set_name(name);
	N_Zombie.set_type(type);

	return(N_Zombie);
}

Zombie	ZombieEvent::randomChump()
{
	int rand = (std::rand() % 6);

    std::string names[6];
    names[0] = "Manaccac";
    names[1] = "Jdel-ros";
    names[2] = "Frfrey";
    names[3] = "Tgrangeo";
    names[4] = "Edepauw";
    names[5] = "Rpichon";
	Zombie N_Zombie = newZombie(names[rand]);
	N_Zombie.advret();

	return(N_Zombie);
}
