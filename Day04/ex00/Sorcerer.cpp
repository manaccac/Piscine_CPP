#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string s_name, std::string s_title) : _Name(s_name), _Title(s_title)
{
	std::cout << _Name << ", " << _Title << ", is born!" << std::endl;
}

Sorcerer::Sorcerer(Sorcerer const &wizar) : _Name(wizar._Name), _Title(wizar._Title)
{
	std::cout << _Name << ", " << _Title << ", is born!" << std::endl;
}

Sorcerer	&Sorcerer::operator=(Sorcerer const &other)
{
	_Name = other._Name;
	_Title = other._Title;
	std::cout << _Name << ", " << _Title << ", is born!" << std::endl;
	return (*this);
}

Sorcerer::~Sorcerer()
{
	std::cout << _Name << ", " << _Title << ", is dead. Consequences will never be the same!" << std::endl;
}

std::string	Sorcerer::getName() const
{
	return(this->_Name);
}

std::string	Sorcerer::getTitle() const
{
	return(this->_Title);
}

std::ostream &operator<<(std::ostream &os, const Sorcerer &other)
{
	os << "I am " << other.getName() << ", " << other.getTitle() << ", and I like ponies!" << std::endl;
	return (os);
}
