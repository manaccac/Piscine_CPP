#ifndef		ZOMBIE_HPP
# define	ZOMBIE_HPP

#include <iostream>
#include <string>
#include <cstring>

class Zombie
{
public:
	Zombie();
	Zombie(std::string s_name, std::string s_type);
	~Zombie();

	void	set_name(std::string s_name);
	void	set_type(std::string s_type);
	void advert();

private:
	std::string name;
	std::string type;

};

#endif
