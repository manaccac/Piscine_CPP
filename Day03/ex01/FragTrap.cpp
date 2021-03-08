#include "FragTrap.hpp"

FragTrap::FragTrap(std::string s_name) : _Name(s_name)
{
	srand (time(NULL));
	_Hit_points = 100;
	_Max_hit_points = 100;
	_Energy_points = 100;
	_Max_energy_points = 100;
	_Level = 1;
	_M_attack_damage = 30;
	_R_attack_damage = 20;
	_A_damage_reduction = 5;
	std::cout << "FragTrap creat" << std::endl << "Directive one: Protect humanity! Directive two: Obey Jack at all costs. Directive three: Dance!" << std::endl;
}

FragTrap::FragTrap(FragTrap const &F_Trap) : _Name(F_Trap._Name)
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

void	FragTrap::rangedAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << _Name << " attack " << target << " at range, causing " << _R_attack_damage << " points of damage" << std::endl;
}

void	FragTrap::meleeAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << _Name << " attack " << target << " at melee, causing " << _M_attack_damage << " points of damage" << std::endl;
}

void	FragTrap::takeDamage(unsigned int amount)
{
	if (_Hit_points <= amount - _A_damage_reduction)
	{
		_Hit_points = 0;
		std::cout << "Am I dead?" << std::endl;
	}
	else
	{
		_Hit_points -= (amount - _A_damage_reduction);
		std::cout << "I bet your mom could do better!" << std::endl;
	}
	std::cout << "Hit point = " << _Hit_points << std::endl;
}
void	FragTrap::beRepaired(unsigned int amount)
{
	if (_Hit_points == 0)
		std::cout << "You can't keep a good 'bot down!" << std::endl;
	if (_Hit_points + amount > _Max_hit_points)
	{
		_Hit_points = _Max_hit_points;
		std::cout << "Ready to go on where you are, friend. I'm Full repair" << std::endl;
	}
	else
	{
		_Hit_points += amount;
		std::cout << "Not full repair but let's go do some: Dance battle! Or, you know... regular battle." << std::endl;
	}
	std::cout << "Hit point = " << _Hit_points << std::endl;
}

void	FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	int random;
	if (_Energy_points == 0)
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
