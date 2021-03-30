#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include "ICharacter.hpp"

class Character : public ICharacter
{
public:
	Character();
	Character(std::string const s_name);
	Character(Character const &s_chara);
	Character &operator=(Character const &s_chara);
	~Character();

	std::string const & getName() const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);
private:
	std::string _name;
	AMateria *_spell[4];
};

#endif
