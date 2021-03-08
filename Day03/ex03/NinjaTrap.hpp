#ifndef NINJATRAP_HPP
#define NINJATRAP_HPP

#include "ClapTrap.hpp"

class NinjaTrap : public ClapTrap
{
public:
	NinjaTrap(std::string s_name);
	NinjaTrap(NinjaTrap const &ft);
	~NinjaTrap();
	NinjaTrap &operator=(NinjaTrap const &other);
	void ninjaShoebox(const NinjaTrap &N_trap);
	void ninjaShoebox(const ClapTrap &C_trap);
};

#endif
