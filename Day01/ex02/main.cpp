#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int main(void)
{
    Zombie  Mac = Zombie("Mac", "Slow-Walker");
    Zombie  Nac = Zombie("Nac", "Fast-Walker");

    Mac.advert();
    Nac.advert();


    ZombieEvent Zombie_H;

    Zombie_H.setZombieType("Super-Fast-Walker");
    Zombie *createdOnHeap = Zombie_H.newZombie("name");
    for (int i = 0; i < 2; i++)
        Zombie_H.randomChump();
    createdOnHeap->advert();
    delete createdOnHeap;
}
