#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string s_name, int s_grade) : _name(s_name)
{
	if (s_grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (s_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else
		_grade = s_grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const &s_Bureau) : _name(s_Bureau._name) ,_grade(s_Bureau._grade)
{
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &s_Bureau)
{
	_grade = s_Bureau._grade;
	return (*this);
}

Bureaucrat::~Bureaucrat()
{
}

void		Bureaucrat::UpGrade()
{
	if (_grade == 1)
		throw Bureaucrat::GradeTooHighException();
	else
		_grade -= 1;
}

void		Bureaucrat::DownGrade()
{
	if (_grade == 150)
		throw Bureaucrat::GradeTooLowException();
	else
		_grade += 1;
}

void		Bureaucrat::signForm(Form &sign_form)
{
	try
	{
		sign_form.beSigned(*this);
		std::cout << *this << " signs" << sign_form << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cout << *this << " cant sign " << sign_form << " beacause grade is to low" << std::endl;
	}
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Error: Grade too high (<1)");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Error: Grade too low (>150)");
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bur)
{
	os << bur.getName() << ", bureaucrate grade " << bur.getGrade() << std::endl;
	return os;
}
