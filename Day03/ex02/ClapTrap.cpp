#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string s_name, int hp, int mhp, int ep, int mep, int lvl, int mad, int rad, int adr) :
	_Name(s_name),
	_Hit_points(hp),
	_Max_hit_points(mhp),
	_Energy_points(ep),
	_Max_energy_points(mep),
	_Level(lvl),
	_M_attack_damage(mad),
	_R_attack_damage(rad),
	_A_damage_reduction(adr)
{
	std::cout << "ClapTrap creat" << std::endl << "Let's get this party started!" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &C_Trap) : _Name(C_Trap._Name)
{
	srand (time(NULL));
	_Hit_points = C_Trap._Hit_points;
	_Max_hit_points = C_Trap._Max_hit_points;
	_Energy_points = C_Trap._Energy_points;
	_Max_energy_points = C_Trap._Max_energy_points;
	_Level = C_Trap._Level;
	_M_attack_damage = C_Trap._M_attack_damage;
	_R_attack_damage = C_Trap._R_attack_damage;
	_A_damage_reduction = C_Trap._A_damage_reduction;
	std::cout << "ClapTrap copy" << std::endl << "Let's get this party started!" << std::endl;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &C_Trap)
{
	srand (time(NULL));
	_Hit_points = C_Trap._Hit_points;
	_Max_hit_points = C_Trap._Max_hit_points;
	_Energy_points = C_Trap._Energy_points;
	_Max_energy_points = C_Trap._Max_energy_points;
	_Level = C_Trap._Level;
	_M_attack_damage = C_Trap._M_attack_damage;
	_R_attack_damage = C_Trap._R_attack_damage;
	_A_damage_reduction = C_Trap._A_damage_reduction;
	std::cout << "ClapTrap Assignation" << std::endl << "Let's get this party started!" << std::endl;
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "I'm too pretty to die! Bye" << std::endl;
}

void	ClapTrap::rangedAttack(std::string const & target)
{
	std::cout << _Name << " rock throw " << target << " causing " << _R_attack_damage << " points of damage" << std::endl;
}

void	ClapTrap::meleeAttack(std::string const & target)
{
	std::cout << _Name << " SLAP!!!! " << target << " causing " << _M_attack_damage << " points of damage" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
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
void	ClapTrap::beRepaired(unsigned int amount)
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
