#ifndef SORCERER_HPP
# define SORCERER_HPP

#include <iostream>
#include "Victim.hpp"

class Sorcerer
{
public:
	Sorcerer(std::string s_name,std::string s_title);
	Sorcerer(Sorcerer const &wizar);
	Sorcerer &operator=(Sorcerer const &wizare);
	~Sorcerer();

	std::string	getName() const;
	std::string getTitle() const;
	void		polymorph(Victim const &vic) const;
private:
	Sorcerer();
	std::string _Name;
	std::string _Title;
};

std::ostream &operator<<(std::ostream &os, Sorcerer const &other);

#endif
