#include <iostream>
#include "whatever.hpp"

int	main()
{
	int i_a = 42;
	int i_b = 420;
	float f_a = 4.2f;
	float f_b = 42.42f;
	std::string s_a = "slt";
	std::string s_b = "bonjour";

	std::cout << "==TEST START==" << std::endl;
	std::cout << "a = " << i_a << "\nb = " << i_b << std::endl;
	std::cout << "max(a, b) = " << max(i_a, i_b) << std::endl;
	std::cout << "min(a, b) = " << min(i_a, i_b) << std::endl;
	std::cout << "swap(a, b)" << std::endl;
	swap(i_a, i_b);
	std::cout << "a = " << i_a << "\nb = " << i_b << std::endl;

	std::cout << "==TEST FLOAT==" << std::endl;

	std::cout << "a = " << f_a << "\nb = " << f_b << std::endl;
	std::cout << "max(a, b) = " << max(f_a, f_b) << std::endl;
	std::cout << "min(a, b) = " << min(f_a, f_b) << std::endl;
	std::cout << "swap(a, b)" << std::endl;
	swap(f_a, f_b);
	std::cout << "a = " << f_a << "\nb = " << f_b << std::endl;

	std::cout << "==TEST STRING==" << std::endl;

	std::cout << "string a = " << s_a << "\nstring b = " << s_b << std::endl;
	std::cout << "max(a, b) = " << ::max(s_a, s_b) << std::endl;
	std::cout << "min(a, b) = " << ::min(s_a, s_b) << std::endl;
	std::cout << "swap(a, b)" << std::endl;
	swap(s_a, s_b);
	std::cout << "a = " << s_a << "\nb = " << s_b << std::endl;

	std::cout << "==TEST fonction==" << std::endl;

	char s1[] = "42";
	char s2[] = "67";

	std::cout << "atoi(42) = " << atoi(s1) << "\natoi(67) = " << atoi(s2) << std::endl;
	std::cout << "max(42, 67) = " << ::max(atoi(s1), atoi(s2)) << std::endl;
	std::cout << "min(42, 67) = " << ::min(atoi(s1), atoi(s2)) << std::endl;
}