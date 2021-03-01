#ifndef		ZOMBIE_HPP
# define	ZOMBIE_HPP

#include <iostream>
#include <string>
#include <cstring>

class Zombie
{
public:
	Zombie(std::string s_name, std::string s_type);
	~Zombie();

	void advret();
	
	void	set_name(std::string s_name);
	void	set_type(std::string s_type);

	std::string	get_name();
	std::string get_type();

private:
	std::string name;
	std::string type;

};

#endif