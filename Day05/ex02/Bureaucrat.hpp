#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <exception>
#include <iostream>
#include "Form.hpp"

class Form;

class Bureaucrat
{
public:
	Bureaucrat(const std::string s_name, int s_grade);
	Bureaucrat(Bureaucrat const &s_Bureau);
	Bureaucrat &operator=(Bureaucrat const &s_Bureau);
	~Bureaucrat();

	std::string	getName() const {return (_name);};
	int			getGrade() const {return (_grade);};
	void		UpGrade();
	void		DownGrade();

	void		signForm(Form &sign_form);

	void		executeForm (Form const &form);

	class GradeTooHighException	: public std::exception {virtual const char* what() const throw();};
	class GradeTooLowException	: public std::exception {virtual const char* what() const throw();};
private:
	const std::string	_name;
	int			_grade;
};

std::ostream & operator<<(std::ostream &o, const Bureaucrat& bur);

#endif
