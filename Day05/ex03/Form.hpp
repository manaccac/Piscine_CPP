#ifndef Form_HPP
#define Form_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
public:
	Form();
	Form(const std::string s_name, int s_canSign, int s_canExec);
	Form(Form const &s_Form);
	Form &operator=(Form const &s_Form);
	virtual ~Form();

	std::string getName() const {return (_name);};
	bool		getSign() const {return (_sign);};
	int			getCanSign() const {return (_canSign);};
	int			getCanExec() const {return (_canExec);};

	void		beSigned(Bureaucrat bur);
	virtual void execute(Bureaucrat const &executor) const = 0;

	class GradeTooHighException	: public std::exception {virtual const char* what() const throw();};
	class GradeTooLowException	: public std::exception {virtual const char* what() const throw();};
	class FormNotSign : public std::exception {virtual const char* what() const throw();};

private:
	const std::string _name;
	bool		_sign;
	const int	_canSign;
	const int	_canExec;
};

std::ostream & operator<<(std::ostream &o, const Form& form);

#endif
