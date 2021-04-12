#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"
#include <sstream>
#include <fstream>

class ShrubberyCreationForm : public Form
{
public:
	ShrubberyCreationForm(std::string s_target);
	ShrubberyCreationForm(ShrubberyCreationForm const &sh_form);
	ShrubberyCreationForm &operator=(ShrubberyCreationForm const &sh_form);
	~ShrubberyCreationForm();

	void	execute(Bureaucrat const &bur) const;
private:
	ShrubberyCreationForm();
	std::string _target;
};

#endif
