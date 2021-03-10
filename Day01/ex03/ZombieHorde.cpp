#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n)
{
	srand (time(NULL));
	nb = n;
	if (n < 0)
		return ;
	Zombies = new Zombie[n];
	for (int i = 0; i != n; i++)
	{
		randomname(&Zombies[i]);
		randomtype(&Zombies[i]);
	}
}

ZombieHorde::~ZombieHorde()
{
	if (nb < 0)
		return ;
	delete [] Zombies;
}

Zombie	ZombieHorde::newZombie(std::string name)
{
	Zombie N_Zombie = Zombie();
	N_Zombie.set_name(name);

	return(N_Zombie);
}

void	ZombieHorde::randomname(Zombie * Zombies)
{
	int rand = (std::rand() % 6);

    std::string names[6];
    names[0] = "Manaccac";
    names[1] = "Jdel-ros";
    names[2] = "Frfrey";
    names[3] = "Tgrangeo";
    names[4] = "Edepauw";
    names[5] = "Rpichon";
	Zombies->set_name(names[rand]);
}

void	ZombieHorde::randomtype(Zombie * Zombies)
{
	int rand = (std::rand() % 3);

    std::string types[3];
    types[0] = "toxic";
    types[1] = "enfant";
    types[2] = "mastodonte";

	Zombies->set_type(types[rand]);
}

void	ZombieHorde::advert()
{
	if (nb < 0)
		return ;
	for (int i = 0; i < nb; i++)
		Zombies[i].advert();
}
