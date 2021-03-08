#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("Deafault", 100, 100, 100, 100, 1, 30, 20, 5)
{
	std::cout << "FragTrap creat" << std::endl << "Directive one: Protect humanity! Directive two: Obey Jack at all costs. Directive three: Dance!" << std::endl;
}

FragTrap::FragTrap(std::string s_name) : ClapTrap(s_name, 100, 100, 100, 100, 1, 30, 20, 5)
{
	std::cout << "FragTrap creat" << std::endl << "Directive one: Protect humanity! Directive two: Obey Jack at all costs. Directive three: Dance!" << std::endl;
}

FragTrap::FragTrap(FragTrap const &F_Trap) : ClapTrap(
	F_Trap._Name,
	F_Trap._Hit_points,
	F_Trap._Max_hit_points,
	F_Trap._Energy_points,
	F_Trap._Max_energy_points,
	F_Trap._Level,
	F_Trap._M_attack_damage,
	F_Trap._R_attack_damage,
	F_Trap._A_damage_reduction)
{
	srand (time(NULL));
	std::cout << "FragTrap copy" << std::endl << "Directive one: Protect humanity! Directive two: Obey Jack at all costs. Directive three: Dance!" << std::endl;
}

FragTrap &FragTrap::operator=(FragTrap const &F_Trap)
{
	srand (time(NULL));
	_Hit_points = F_Trap._Hit_points;
	_Max_hit_points = F_Trap._Max_hit_points;
	_Energy_points = F_Trap._Energy_points;
	_Max_energy_points = F_Trap._Max_energy_points;
	_Level = F_Trap._Level;
	_M_attack_damage = F_Trap._M_attack_damage;
	_R_attack_damage = F_Trap._R_attack_damage;
	_A_damage_reduction = F_Trap._A_damage_reduction;
	std::cout << "FragTrap assigne" << std::endl << "Directive one: Protect humanity! Directive two: Obey Jack at all costs. Directive three: Dance!" << std::endl;
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "I'M DEAD I'M DEAD OHMYGOD I'M DEAD!" << std::endl;
}

void	FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	int random;
	if (_Energy_points < 25)
		std::cout << "No Energy but you can Meet professor punch!" << std::endl;
	else
	{
		_Energy_points -= 25;
		random = rand()%5;
		if (random == 0)
			std::cout << "Take Flame Thrower" << std::endl << "It's time to play with fire BUUUUURN DIE " << target << std::endl;
		if (random == 1)
			std::cout << "Take Grenade" << std::endl << "How many ways can I say... THROWING GRENADE?! DIE " << target << std::endl;
		if (random == 2)
			std::cout << "Take Minigun" << std::endl << "Ratattattattatta! Powpowpowpow! Powpowpowpow! Pew-pew, pew-pew-pewpew! DIE " << target << std::endl;
		if (random == 3)
			std::cout << "Take Lasers" << std::endl<< "Laaasers! DIE " << target << std::endl;
		if (random == 4)
			std::cout << "Take SMGs" << std::endl<< "I'm a tornado of death and bullets! DIE " << target << std::endl;
	}
	std::cout << "Energy = " << _Energy_points << std::endl;
}
