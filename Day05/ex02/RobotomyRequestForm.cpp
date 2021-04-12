#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string s_target) : Form("Robot", 72, 45), _target(s_target)
{
	srand (time(NULL));
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &sh_form) : Form("Robot", 72, 45), _target(sh_form._target)
{
	srand (time(NULL));
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &sh_form)
{
	_target = sh_form._target;
	Form::operator=(sh_form);
	return (*this);
}

void		RobotomyRequestForm::execute(Bureaucrat const &bur) const
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

	int random;
	random = rand()%100;
	std::cout << "BrrrrrrrrBrrrrrrrrrBrrrrrrrrrrr" << std::endl;
	if (random < 50)
		std::cout << _target << "was robotomized" << std::endl;
	else
		std::cout << _target << " ERROR ERROR fail robotomized" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}
