#ifndef SORCERER_HPP
# define SORCERER_HPP

#include <iostream>

class Sorcerer
{
public:
	Sorcerer(std::string s_name,std::string s_title);
	Sorcerer(Sorcerer const &wizar);
	Sorcerer &operator=(Sorcerer const &other);
	~Sorcerer();

	std::string	getName() const;
	std::string getTitle() const;
private:
	std::string _Name;
	std::string _Title;
};

std::ostream &operator<<(std::ostream &os, Sorcerer const &other);

#endif
