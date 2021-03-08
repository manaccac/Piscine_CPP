#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string s_name) : ClapTrap(s_name, 100, 100, 50, 50, 1, 20, 15, 3)
{
	std::cout << "ScavTrap creat" << std::endl << "Look out everybody! Things are about to get awesome!" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &S_Trap) : ClapTrap(
	S_Trap._Name,
	S_Trap._Hit_points,
	S_Trap._Max_hit_points,
	S_Trap._Energy_points,
	S_Trap._Max_energy_points,
	S_Trap._Level,
	S_Trap._M_attack_damage,
	S_Trap._R_attack_damage,
	S_Trap._A_damage_reduction)
{
	srand (time(NULL));
	std::cout << "ScavTrap copy" << std::endl << "Look out everybody! Things are about to get awesome!" << std::endl;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &S_Trap)
{
	srand (time(NULL));
	_Hit_points = S_Trap._Hit_points;
	_Max_hit_points = S_Trap._Max_hit_points;
	_Energy_points = S_Trap._Energy_points;
	_Max_energy_points = S_Trap._Max_energy_points;
	_Level = S_Trap._Level;
	_M_attack_damage = S_Trap._M_attack_damage;
	_R_attack_damage = S_Trap._R_attack_damage;
	_A_damage_reduction = S_Trap._A_damage_reduction;
	std::cout << "ScavTrap assigne" << std::endl << "Look out everybody! Things are about to get awesome!" << std::endl;
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "Robot down!" << std::endl;
}

void	ScavTrap::challengeNewcomer(std::string const & target)
{
	int random;
	if (_Energy_points == 0)
		std::cout << "Battery low you can enter" << std::endl;
	else
	{
		_Energy_points -= 25;
		random = rand()%4;
		if (random == 0)
			std::cout << "Dance battle" << std::endl << "Time to dance battle if you beat me i will let you enter " << target << std::endl;
		if (random == 1)
			std::cout << "Make me laugh" << std::endl << "If you make me laugh I'll let you in " << target << std::endl;
		if (random == 2)
			std::cout << "How sorry you lose Take Minigun" << std::endl << "Ratattattattatta! Powpowpowpow! Powpowpowpow! Pew-pew, pew-pew-pewpew! DIE " << target << std::endl;
		if (random == 3)
			std::cout << "How many fingers I have " << target << std::endl;
	}
	std::cout << "Energy = " << _Energy_points << std::endl;
}
