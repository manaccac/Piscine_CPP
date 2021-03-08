#ifndef SCAV_TRAP_HPP
# define SCAV_TRAP_HPP

#include <iostream>

class ScavTrap
{
public:
	ScavTrap(std::string s_name);
	ScavTrap(ScavTrap const &F_Trap);
    ScavTrap &operator=(ScavTrap const &other);
	~ScavTrap();

	void	rangedAttack(std::string const & target);
	void	meleeAttack(std::string const & target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	void	challengeNewcomer(std::string const & target);
private:
	unsigned int	_Hit_points;
	unsigned int	_Max_hit_points;
	unsigned int	_Energy_points;
	unsigned int	_Max_energy_points;
	unsigned int	_Level;
	std::string		_Name;
	unsigned int	_M_attack_damage;
	unsigned int	_R_attack_damage;
	unsigned int	_A_damage_reduction;
};

#endif
