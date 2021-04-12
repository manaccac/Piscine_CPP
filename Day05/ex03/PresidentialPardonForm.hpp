#ifndef PRESIDENTIALPARDONFROM_HPP
#define PRESIDENTIALPARDONFROM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
public:
	PresidentialPardonForm(std::string s_target);
	PresidentialPardonForm(PresidentialPardonForm const &sh_form);
	PresidentialPardonForm &operator=(PresidentialPardonForm const &sh_form);
	~PresidentialPardonForm();

	virtual void	execute(Bureaucrat const &bur) const;
private:
	PresidentialPardonForm();
	std::string _target;
};

#endif
