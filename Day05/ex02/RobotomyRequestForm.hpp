#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"
#include <iostream>

class RobotomyRequestForm : public Form
{
public:
	RobotomyRequestForm(std::string s_target);
	RobotomyRequestForm(RobotomyRequestForm const &sh_form);
	RobotomyRequestForm &operator=(RobotomyRequestForm const &sh_form);
	~RobotomyRequestForm();

	virtual void	execute(Bureaucrat const &bur) const;
private:
	RobotomyRequestForm();
	std::string _target;
};

#endif
