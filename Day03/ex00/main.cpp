#include "FragTrap.hpp"

int main() {
    FragTrap frag("Manaccac");
	std::cout << std::endl;
	frag.vaulthunter_dot_exe("Shreck");
	std::cout << std::endl;
	frag.meleeAttack("Shreck");
	std::cout << std::endl;
	frag.rangedAttack("Shreck");
	std::cout << std::endl;
	frag.takeDamage(25);
	std::cout << std::endl;
	frag.beRepaired(50);
	std::cout << std::endl;
	frag.takeDamage(42);
	std::cout << std::endl;
	frag.takeDamage(100);
	std::cout << std::endl;
	frag.beRepaired(125);
	std::cout << std::endl;
	frag.vaulthunter_dot_exe("Shreck");
	std::cout << std::endl;
	frag.vaulthunter_dot_exe("Shreck");
	std::cout << std::endl;
	frag.vaulthunter_dot_exe("Shreck");
	std::cout << std::endl;
	frag.vaulthunter_dot_exe("Shreck");

    return 0;
}
