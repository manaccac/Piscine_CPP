#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

int main()
{
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

	ScavTrap scav("S_manaccac");
	std::cout << std::endl;
	scav.challengeNewcomer("fiona");
	std::cout << std::endl;
	scav.meleeAttack("fiona");
	std::cout << std::endl;
	scav.rangedAttack("fiona");
	std::cout << std::endl;
	scav.takeDamage(24);
	std::cout << std::endl;
	scav.beRepaired(50);
	std::cout << std::endl;
	scav.takeDamage(42);
	std::cout << std::endl;
	scav.takeDamage(100);
	std::cout << std::endl;
	scav.beRepaired(125);
	std::cout << std::endl;
	scav.challengeNewcomer("fiona");
	std::cout << std::endl;
	scav.challengeNewcomer("fiona");
	std::cout << std::endl;

	NinjaTrap ninja("N_manaccac");
	NinjaTrap *test = new NinjaTrap("ImTest");
	ninja.ninjaShoebox(ninja);
	ninja.meleeAttack("L'ane");
	ninja.rangedAttack("L'ane");
	ninja.takeDamage(24);
	ninja.beRepaired(50);
	ninja.takeDamage(42);
	ninja.takeDamage(100);
	ninja.beRepaired(125);
	ninja.ninjaShoebox(frag);
	ninja.ninjaShoebox(scav);
	ninja.ninjaShoebox(*test);
	ninja.ninjaShoebox(frag);
	delete test;
	return 0;
}
