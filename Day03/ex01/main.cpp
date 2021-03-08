#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main() {

	FragTrap frag("F_manaccac");
	std::cout << std::endl;
	frag.vaulthunter_dot_exe("Shreck");
	std::cout << std::endl;
	frag.meleeAttack("Shreck");
	std::cout << std::endl;
	frag.rangedAttack("Shreck");
	std::cout << std::endl;
	frag.takeDamage(24);
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
	std::cout << std::endl;


	ScavTrap frag2("S_manaccac");
	std::cout << std::endl;
	frag2.challengeNewcomer("fiona");
	std::cout << std::endl;
	frag2.meleeAttack("fiona");
	std::cout << std::endl;
	frag2.rangedAttack("fiona");
	std::cout << std::endl;
	frag2.takeDamage(24);
	std::cout << std::endl;
	frag2.beRepaired(50);
	std::cout << std::endl;
	frag2.takeDamage(42);
	std::cout << std::endl;
	frag2.takeDamage(100);
	std::cout << std::endl;
	frag2.beRepaired(125);
	std::cout << std::endl;
	frag2.challengeNewcomer("fiona");
	std::cout << std::endl;
	frag2.challengeNewcomer("fiona");
	std::cout << std::endl;
	return 0;
}
