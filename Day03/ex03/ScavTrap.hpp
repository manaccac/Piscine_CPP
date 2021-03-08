#ifndef Scav_TRAP_HPP
# define Scav_TRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:
	ScavTrap(std::string s_name);
	ScavTrap(ScavTrap const &S_trap);
	~ScavTrap();
	ScavTrap &operator=(ScavTrap const &other);
	void challengeNewcomer(const std::string &target);
};

#endif
