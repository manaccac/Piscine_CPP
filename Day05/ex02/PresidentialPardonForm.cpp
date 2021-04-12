#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string s_target) : Form("president", 25, 5), _target(s_target)
{
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &sh_form) : Form("president", 25, 5), _target(sh_form._target)
{
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &sh_form)
{
	_target = sh_form._target;
	Form::operator=(sh_form);
	return (*this);
}

void		PresidentialPardonForm::execute(Bureaucrat const &bur) const
{
	if (bur.getGrade() > getCanExec())
	{
		std::cout << " cant execute this Form beacause grade is to low" << std::endl;
		return ;
	}
	else if (getSign() == false)
	{
		std::cout << " cant execute this Form beacause this Form is not signed" << std::endl;
		return ;
	}
	std::cout << _target << " has been pardoned by Zafod Beeblebrox." << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}
