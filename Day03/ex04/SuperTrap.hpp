#ifndef SuperTrap_HPP
#define SuperTrap_HPP

#include "FragTrap.hpp"
#include "NinjaTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap
{
public:
    SuperTrap(std::string s_name);
    SuperTrap(SuperTrap const &S_trap);
    SuperTrap &operator=(SuperTrap const &other);
    void meleeAttack(const std::string &target);
    void rangedAttack(const std::string &target);
    ~SuperTrap();
};

#endif
