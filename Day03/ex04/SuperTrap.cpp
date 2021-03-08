#include "SuperTrap.hpp"

SuperTrap::SuperTrap(std::string s_name) : ClapTrap(s_name, 100, 100, 120, 120, 1, 60, 20, 5)
{
	std::cout << "SuperTrap creat" << std::endl << "Who's a badass robot? This guy!" << std::endl;
}

SuperTrap::SuperTrap(SuperTrap const &S_Trap) : ClapTrap(
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
	std::cout << "SuperTrap copy" << std::endl << "Who's a badass robot? This guy!" << std::endl;
}

SuperTrap &SuperTrap::operator=(SuperTrap const &S_Trap)
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
	std::cout << "SuperTrap assigne" << std::endl << "Who's a badass robot? This guy!" << std::endl;
	return (*this);
}

SuperTrap::~SuperTrap()
{
	std::cout << "No, nononono NO!" << std::endl;
}

void SuperTrap::meleeAttack(const std::string &target) {
    NinjaTrap::meleeAttack(target);
}

void SuperTrap::rangedAttack(const std::string &target) {
    FragTrap::rangedAttack(target);
}
