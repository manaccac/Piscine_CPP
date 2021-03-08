#ifndef FRAG_TRAP_HPP
# define FRAG_TRAP_HPP

#include <iostream>

class FragTrap
{
public:
	FragTrap(std::string s_name);
	FragTrap(FragTrap const &F_Trap);
    FragTrap &operator=(FragTrap const &other);
	~FragTrap();

	void	rangedAttack(std::string const & target);
	void	meleeAttack(std::string const & target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	void	vaulthunter_dot_exe(std::string const & target);
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
