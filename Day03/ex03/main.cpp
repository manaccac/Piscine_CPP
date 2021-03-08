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
	std::cout << std::endl;
	NinjaTrap *test = new NinjaTrap("ImTest");
	std::cout << std::endl;
	ninja.ninjaShoebox(ninja);
	std::cout << std::endl;
	ninja.meleeAttack("L'ane");
	std::cout << std::endl;
	ninja.rangedAttack("L'ane");
	std::cout << std::endl;
	ninja.takeDamage(24);
	std::cout << std::endl;
	ninja.beRepaired(50);
	std::cout << std::endl;
	ninja.takeDamage(42);
	std::cout << std::endl;
	ninja.takeDamage(100);
	std::cout << std::endl;
	ninja.beRepaired(125);
	std::cout << std::endl;
	ninja.ninjaShoebox(frag);
	std::cout << std::endl;
	ninja.ninjaShoebox(scav);
	std::cout << std::endl;
	ninja.ninjaShoebox(*test);
	std::cout << std::endl;
	ninja.ninjaShoebox(frag);
	std::cout << std::endl;
	delete test;
	return 0;
}
