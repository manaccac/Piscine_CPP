#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"

int main() {
	Bureaucrat a("Initial", 137);
	ShrubberyCreationForm s_form = ShrubberyCreationForm("tmp");

	a.signForm(s_form);
	a.executeForm(s_form);

	return 0;
}
