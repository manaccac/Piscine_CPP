#include "ZombieHorde.hpp"
#include "Zombie.hpp"
#include <iostream>

int main() {
    ZombieHorde *horde = new ZombieHorde(10);
    horde->announce();
    delete horde;
    return (0);
}
