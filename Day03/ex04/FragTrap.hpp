#ifndef FRAG_TRAP_HPP
# define FRAG_TRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
public:
	FragTrap(std::string s_name);
	FragTrap(FragTrap const &F_trap);
	~FragTrap();
	FragTrap &operator=(FragTrap const &other);
	void vaulthunter_dot_exe(const std::string &target);
protected:
	FragTrap();
};

#endif
