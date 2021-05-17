#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

typedef Form * (Intern::*ptr) (std::string target);

Intern::Intern()
{
	_list_form[0] = "shrubbery creation";
	_list_form[1] = "robotomy request";
	_list_form[2] = "presidential pardon";
}

Intern::Intern(Intern const &sta)
{
	(void)sta;
	_list_form[0] = "shrubbery creation";
	_list_form[1] = "Robotomy request";
	_list_form[2] = "presidential pardon";
}

Intern &Intern::operator=(Intern const &sta)
{
	(void)sta;
	_list_form[0] = "shrubbery creation";
	_list_form[1] = "Robotomy request";
	_list_form[2] = "presidential pardon";
	return (*this);
}

Intern::~Intern()
{
}

Form *Intern::makeForm(std::string name_form, std::string targ_form)
{
	ptr	constr[3] = {&Intern::execShrubbery, &Intern::execRobotomy, &Intern::execPresiential};
	Form *copy = NULL;
	for (int i = 0; i != 3; i++)
	{
		if (name_form == _list_form[i])
		{
			copy = (this->*constr[i])(targ_form);
			std::cout << "Intern creates " << targ_form << std::endl;
		}
	}
	if (copy == NULL)
		std::cout << "Error, unrecognized Form type !" << std::endl;
	return (copy);
}

Form *Intern::execShrubbery(std::string s_target)
{
	return (new ShrubberyCreationForm(s_target));
}

Form *Intern::execRobotomy(std::string s_target)
{
	return (new RobotomyRequestForm(s_target));
}

Form *Intern::execPresiential(std::string s_target)
{
	return (new PresidentialPardonForm(s_target));
}
