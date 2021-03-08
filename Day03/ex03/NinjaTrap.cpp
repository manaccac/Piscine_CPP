#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(std::string s_name) : ClapTrap(s_name, 60, 60, 120, 120, 1, 60, 5, 0)
{
	std::cout << "NinjaTrap creat" << std::endl << "Recompiling my combat code!" << std::endl;
}

NinjaTrap::NinjaTrap(NinjaTrap const &N_Trap) : ClapTrap(
	N_Trap._Name,
	N_Trap._Hit_points,
	N_Trap._Max_hit_points,
	N_Trap._Energy_points,
	N_Trap._Max_energy_points,
	N_Trap._Level,
	N_Trap._M_attack_damage,
	N_Trap._R_attack_damage,
	N_Trap._A_damage_reduction)
{
	srand (time(NULL));
	std::cout << "NinjaTrap copy" << std::endl << "Recompiling my combat code!" << std::endl;
}

NinjaTrap &NinjaTrap::operator=(NinjaTrap const &N_Trap)
{
	srand (time(NULL));
	_Hit_points = N_Trap._Hit_points;
	_Max_hit_points = N_Trap._Max_hit_points;
	_Energy_points = N_Trap._Energy_points;
	_Max_energy_points = N_Trap._Max_energy_points;
	_Level = N_Trap._Level;
	_M_attack_damage = N_Trap._M_attack_damage;
	_R_attack_damage = N_Trap._R_attack_damage;
	_A_damage_reduction = N_Trap._A_damage_reduction;
	std::cout << "NinjaTrap assigne" << std::endl << "Recompiling my combat code!" << std::endl;
	return (*this);
}

NinjaTrap::~NinjaTrap()
{
	std::cout << "I'll die the way I lived: annoying!" << std::endl;
}

void NinjaTrap::ninjaShoebox(const NinjaTrap &N_trap)
{
	if (_Energy_points < 25)
		std::cout << "No Energy i don't know if you are a real Ninja" << std::endl;
	else
	{
		_Energy_points -= 25;
    	std::cout << _Name << " You are real Ninja " << N_trap.getName() << std::endl;
	}
	std::cout << "Energy = " << _Energy_points << std::endl;
}

void NinjaTrap::ninjaShoebox(const ClapTrap &C_trap)
{
	if (_Energy_points < 25)
		std::cout << "No Energy i don't know if you are a real Ninja" << std::endl;
	else
	{
		_Energy_points -= 25;
		std::cout << _Name << " You are not a Ninja " << C_trap.getName() << std::endl;
	}
	std::cout << "Energy = " << _Energy_points << std::endl;
}
