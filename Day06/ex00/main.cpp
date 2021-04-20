#include <iostream>
#include <stdlib.h>     /* strtod */
#include <math.h>       /* isnan, sqrt */
#include <iostream>     // std::cout, std::fixed
#include <iomanip>      // std::setprecision
# include <climits>

void	conv_char(double long dl)
{
	if (dl >= 32 && dl <= 126)
	{
		char c = static_cast<char> (dl);
		std::cout << "char: '" << c << "'" << std::endl;
	}
	else
	{
		if (isnan(dl))
			std::cout << "char: " << "impossible" << std::endl;
		else
			std::cout << "char: " << "Non displayable" << std::endl;
	}
}

void	conv_int(double long dl)
{
	if (dl <= 2147483647 && dl >= -2147483648)
	{
		int i = static_cast<int> (dl);
		std::cout << "int: " << i << std::endl;
	}
	else
	{
		if (dl > 2147483647 || dl < -2147483648)
			std::cout << "int: " << "Limit break" << std::endl;
		else if (isnan(dl))
			std::cout << "int: " << "impossible" << std::endl;
	}
}

void	conv_float(double long dl)
{
	if (isnan(dl))
		std::cout << "float: " << "nanf" << std::endl;
	else
	{
		float f = static_cast<float> (dl);
		if (isinf(f) && dl > 0)
			std::cout << "float: " << "+inff" << std::endl;
		else if (isinf(f) && dl < 0)
			std::cout << "float: " << "-inff" << std::endl;
		else
			std::cout << "float: " << std::fixed << std::setprecision(1) << f << "f" << std::endl;
	}
}

void	conv_double(double long dl)
{
	if (isnan(dl))
		std::cout << "double: " << "nan" << std::endl;
	else
	{
		double d = static_cast<double> (dl);
		if (isinf(d) && dl > 0)
			std::cout << "double: " << "+inf" << std::endl;
		else if (isinf(d) && dl < 0)
			std::cout << "double: " << "-inf" << std::endl;
		else
			std::cout << "double: " << std::fixed << std::setprecision(1) << d << std::endl;
	}
}

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Erreur ARG" << std::endl;
		return (0);
	}

	std::string val = argv[1];

	if (val.length() == 1)
	{
		double long dl = static_cast<int> (val[0]);
		if (dl == 48)
			dl = 0;
		conv_char(dl);
		conv_int(dl);
		conv_float(dl);
		conv_double(dl);
	}
	else
	{
		double long dl;
		char* pEnd;
		dl = std::strtod(val.c_str(), &pEnd);
		conv_char(dl);
		conv_int(dl);
		conv_float(dl);
		conv_double(dl);
	}

	return (1);
}
