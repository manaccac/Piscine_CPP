#include "Form.hpp"

Form::Form() : _name("default"), _canSign(1), _canExec(1)
{
	_sign = false;
}

Form::Form(const std::string s_name, int s_canSign, int s_canExec) : _name(s_name), _canSign(s_canSign), _canExec(s_canExec)
{
	if (s_canSign > 150 || s_canExec > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (s_canSign < 1 || s_canExec < 1)
		throw Bureaucrat::GradeTooHighException();
	else
		_sign = false;
}

Form::Form(Form const &s_Form) : _name(s_Form._name), _sign(s_Form._sign), _canSign(s_Form._canSign), _canExec(s_Form._canExec)
{
}

Form &Form::operator=(Form const &s_Form)
{
	_sign = s_Form._sign;
	return(*this);
}

Form::~Form()
{
}

void	Form::beSigned(Bureaucrat bur)
{
	if (bur.getGrade() > _canSign)
	{
		_sign = false;
		throw Form::GradeTooLowException();
	}
	else
		_sign = true;
}

const char* Form::GradeTooHighException::what() const throw()
{
	return ("Error: Grade too high (<1)");
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("Error: Grade too low (>150)");
}

const char* Form::FormNotSign::what() const throw()
{
	return ("Error: Form not sign");
}

std::ostream& operator<<(std::ostream& os, const Form& Form)
{
	os << "Form name: " << Form.getName() << std::endl << " signed: " << Form.getSign() << std::endl << " grade need for Sign the form: " << Form.getCanSign() << std::endl << " grade for ex: " << Form.getCanExec() << std::endl;
	return os;
}
