#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap {
public:
	ClapTrap(std::string s_name, int hp, int mhp, int ep, int mep, int lvl, int mad, int rad, int adr);
	ClapTrap(ClapTrap const &C_trap);
	ClapTrap &operator=(ClapTrap const &other);
	~ClapTrap();

	void rangedAttack(const std::string &target);
	void meleeAttack(const std::string &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	const std::string &getName() const;

protected:
	ClapTrap();
	std::string		_Name;
	unsigned int	_Hit_points;
	unsigned int	_Max_hit_points;
	unsigned int	_Energy_points;
	unsigned int	_Max_energy_points;
	unsigned int	_Level;
	unsigned int	_M_attack_damage;
	unsigned int	_R_attack_damage;
	unsigned int	_A_damage_reduction;
};

#endif
