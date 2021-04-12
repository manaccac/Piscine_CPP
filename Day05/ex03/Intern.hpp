#ifndef INTERN_HPP
#define INTERN_HPP

#include "Form.hpp"
#include <iostream>

class Intern
{
public:
	Intern();
	Intern(Intern const &sta);
	Intern &operator=(Intern const &sta);
	~Intern();

	Form *makeForm(std::string name_form, std::string targ_form);
	Form *execShrubbery(std::string s_target);
	Form *execRobotomy(std::string s_target);
	Form *execPresiential(std::string s_target);
private:
	std::string _list_form[3];
};

#endif
