#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string s_name) : _Name(s_name)
{
	srand (time(NULL));
	_Hit_points = 100;
	_Max_hit_points = 100;
	_Energy_points = 50;
	_Max_energy_points = 50;
	_Level = 1;
	_M_attack_damage = 20;
	_R_attack_damage = 15;
	_A_damage_reduction = 3;
	std::cout << "ScavTrap creat" << std::endl << "Look out everybody! Things are about to get awesome!" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &F_Trap) : _Name(F_Trap._Name)
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
	std::cout << "ScavTrap copy" << std::endl << "Look out everybody! Things are about to get awesome!" << std::endl;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &F_Trap)
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
	std::cout << "ScavTrap assigne" << std::endl << "Look out everybody! Things are about to get awesome!" << std::endl;
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "Robot down!" << std::endl;
}

void	ScavTrap::rangedAttack(std::string const & target)
{
	std::cout << _Name << " rock throw " << target << " causing " << _R_attack_damage << " points of damage" << std::endl;
}

void	ScavTrap::meleeAttack(std::string const & target)
{
	std::cout << _Name << " slap " << target << " causing " << _M_attack_damage << " points of damage" << std::endl;
}

void	ScavTrap::takeDamage(unsigned int amount)
{
	if (_Hit_points <= amount - _A_damage_reduction)
	{
		_Hit_points = 0;
		std::cout << "I have many regrets!" << std::endl;
	}
	else
	{
		_Hit_points -= (amount - _A_damage_reduction);
		std::cout << "You will do better the next time!" << std::endl;
	}
	std::cout << "Hit point = " << _Hit_points << std::endl;
}
void	ScavTrap::beRepaired(unsigned int amount)
{
	if (_Hit_points == 0)
		std::cout << "Can I just say... yeehaw." << std::endl;
	if (_Hit_points + amount > _Max_hit_points)
	{
		_Hit_points = _Max_hit_points;
		std::cout << "I'm Full repair. It's time to dance!!!" << std::endl;
	}
	else
	{
		_Hit_points += amount;
		std::cout << "Not full repair but i'm going to kick your butt!" << std::endl;
	}
	std::cout << "Hit point = " << _Hit_points << std::endl;
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
