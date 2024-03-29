#ifndef NINJATRAP_HPP
#define NINJATRAP_HPP

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class NinjaTrap : virtual public ClapTrap
{
public:
	NinjaTrap(std::string s_name);
	NinjaTrap(NinjaTrap const &ft);
	~NinjaTrap();
	NinjaTrap &operator=(NinjaTrap const &other);
	void ninjaShoebox(const NinjaTrap &N_trap);
	void ninjaShoebox(const FragTrap &F_trap);
	void ninjaShoebox(const ScavTrap &S_trap);
	void ninjaShoebox(const ClapTrap &C_trap);
protected:
	NinjaTrap();
};

#endif
