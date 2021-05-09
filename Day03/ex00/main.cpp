#include "FragTrap.hpp"

int main() {
	FragTrap frag("Manaccac");
	std::cout << std::endl;
	frag.vaulthunter_dot_exe("Shrek");
	std::cout << std::endl;
	frag.meleeAttack("Shrek");
	std::cout << std::endl;
	frag.rangedAttack("Shrek");
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
	frag.vaulthunter_dot_exe("Shrek");
	std::cout << std::endl;
	frag.vaulthunter_dot_exe("Shrek");
	std::cout << std::endl;
	frag.vaulthunter_dot_exe("Shrek");
	std::cout << std::endl;
	frag.vaulthunter_dot_exe("Shrek");

	return 0;
}
