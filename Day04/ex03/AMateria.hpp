#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
public:
	AMateria(std::string const & s_type);
	AMateria(AMateria const &s_mat);
	AMateria &operator=(AMateria const &s_mat);
	virtual ~AMateria();
	std::string const & getType() const; //Returns the materia type
	unsigned int getXP() const; //Returns the Materia's XP
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
protected:
	std::string _type;
	unsigned int _xp;
private:
	AMateria();
};

#endif
