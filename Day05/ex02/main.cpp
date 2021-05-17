#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

#include <exception>
#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int	main(int argc __attribute__((unused)), char **argv __attribute__((unused)))
{
	std::cout << std::endl << "************************* MY TESTS" \
		" **************" << std::endl;
	//TEST 1)
	std::cout << std::endl << "TEST 1) "
		"instanciating ShrubberyCreationForm with target maison" \
		<< std::endl << std::endl;
	{
		Form	*form1 = new ShrubberyCreationForm("maison");

		std::cout << *form1;
		delete form1;
	}
	//TEST 2)
	std::cout << std::endl << "TEST 2) "
		"instanciating ShrubberyCreationForm and executing without signing it." \
		<< std::endl << std::endl;
	{
		Bureaucrat Charlie("Charlie", 1);
		Form	*form1 = new ShrubberyCreationForm("maison");
		std::cout << *form1;
		try { form1->execute(Charlie); }
		catch (std::exception const &e)
		{
			std::cout << e.what() << std::endl;
		}
		form1->beSigned(Charlie);
		std::cout << *form1;
		try { form1->execute(Charlie); }
		catch (std::exception const &e)
		{
			std::cout << e.what() << std::endl;
		}
		std::cout << "	==> verify that the file maison_shrubbery has been created..." << std::endl;
		delete form1;
	}
	//TEST 3)
	std::cout << std::endl << "TEST 3) "
		"instanciating PresidentialPardonForm and get the bureaucrat to execute it" \
		<< std::endl << std::endl;
	{
		Bureaucrat Charlie("Charlie", 6);
		Form	*form1 = new PresidentialPardonForm("Victim_from_42");
		form1->beSigned(Charlie);
		std::cout << Charlie;
		std::cout << *form1;
		Charlie.executeForm(*form1);
		Charlie.UpGrade();
		std::cout << std::endl << Charlie;
		Charlie.executeForm(*form1);
		delete form1;
	}
	//TEST 4)
	std::cout << std::endl << "TEST 4) "
		"instanciating RobotomyRequestForm and get the bureaucrat to execute it" \
		<< std::endl << std::endl;
	{
		Bureaucrat Charlie("Charlie", 46);
		Form	*form1 = new RobotomyRequestForm("Victim_from_42");
		std::cout << Charlie;
		std::cout << *form1;
		Charlie.executeForm(*form1);
		std::cout << std::endl;
		form1->beSigned(Charlie);
		std::cout << Charlie;
		std::cout << *form1;
		Charlie.executeForm(*form1);
		std::cout << std::endl;
		Charlie.UpGrade();
		std::cout << Charlie;
		std::cout << *form1;
		Charlie.executeForm(*form1);
		delete form1;
	}
	return (0);
}
