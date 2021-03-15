#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent()
{
	srand (time(NULL));
}

ZombieEvent::~ZombieEvent()
{
}

void	ZombieEvent::setZombieType(std::string s_type)
{
	type = s_type;
}

Zombie*	ZombieEvent::newZombie(std::string name)
{
	return(new Zombie(name, type));
}

void	ZombieEvent::randomChump()
{
	Zombie *N_Zombie;
	int rand = (std::rand() % 6);

    std::string names[6];
    names[0] = "Manaccac";
    names[1] = "Jdel-ros";
    names[2] = "Frfrey";
    names[3] = "Tgrangeo";
    names[4] = "Edepauw";
    names[5] = "Rpichon";
	N_Zombie = new Zombie(names[rand], type);
	N_Zombie->advert();

	delete N_Zombie;
}
