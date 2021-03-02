#include "ZombieEvent.hpp"
#include "Zombie.hpp"
#include <iostream>

int main() {
    ZombieEvent *factory = new ZombieEvent();

    factory->setZombieType("Zombie moche");
    Zombie zombie1 = factory->randomChump();
    factory->setZombieType("Zombie");
    Zombie zombie2 = factory->randomChump();
    factory->setZombieType("Zombie chauve");
    Zombie zombie3 = factory->randomChump();
    delete factory;
    return (0);
}
