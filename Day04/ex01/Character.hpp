#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include <iostream>
#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character
{
public:
	Character(std::string const & s_name);
	Character(Character const &chara);
	Character &operator=(Character const &chara);
	~Character();

	void recoverAP();
	void equip(AWeapon *weap);
	void attack(Enemy *ad);
	std::string getName() const;
private:
	std::string _Name;
	int			_AP;
};

#endif
