#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string s_target) : Form("Shruberry", 145, 137), _target(s_target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &sh_form) : Form("Shruberry", 145, 137), _target(sh_form._target)
{
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &sh_form)
{
	_target = sh_form._target;
	Form::operator=(sh_form);
	return (*this);
}

void	ShrubberyCreationForm::execute(Bureaucrat const &bur) const
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

	std::stringstream file_name;

	file_name << _target << "_shrubbery";
	std::ofstream	Open_file(file_name.str());

	Open_file << "                                              ." << std::endl;
	Open_file << "                                   .         ;" << std::endl;
	Open_file << "      .              .              ;%     ;;" << std::endl;
	Open_file << "        ,           ,                :;%  %;" << std::endl;
	Open_file << "         :         ;                   :;%;'     .," << std::endl;
	Open_file << ",.        %;     %;            ;        %;'    ,;" << std::endl;
	Open_file << "  ;       ;%;  %%;        ,     %;    ;%;    ,%'" << std::endl;
	Open_file << "   %;       %;%;      ,  ;       %;  ;%;   ,%;'" << std::endl;
	Open_file << "    ;%;      %;        ;%;        % ;%;  ,%;'" << std::endl;
	Open_file << "     `%;.     ;%;     %;'         `;%%;.%;'" << std::endl;
	Open_file << "      `:;%.    ;%%. %@;        %; ;@%;%'" << std::endl;
	Open_file << "         `:%;.  :;bd%;          %;@%;'" << std::endl;
	Open_file << "           `@%:.  :;%.         ;@@%;'" << std::endl;
	Open_file << "             `@%.  `;@%.      ;@@%;" << std::endl;
	Open_file << "               `@%%. `@%%    ;@@%;" << std::endl;
	Open_file << "                 ;@%. :@%%  %@@%;" << std::endl;
	Open_file << "                   %@bd%%%bd%%:;" << std::endl;
	Open_file << "                     #@%%%%%:;;" << std::endl;
	Open_file << "                     %@@%%%::;" << std::endl;
	Open_file << "                     %@@@%(o);  . '" << std::endl;
	Open_file << "                     %@@@o%;:(.,'" << std::endl;
	Open_file << "                 `.. %@@@o%::;" << std::endl;
	Open_file << "                    `)@@@o%::;" << std::endl;
	Open_file << "                     %@@(o)::;" << std::endl;
	Open_file << "                    .%@@@@%::;" << std::endl;
	Open_file << "                    ;%@@@@%::;." << std::endl;
	Open_file << "                   ;%@@@@%%:;;;." << std::endl;
	Open_file << "               ...;%@@@@@%%:;;;;,..	 Stolen." << std::endl;
	Open_file << "" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}
